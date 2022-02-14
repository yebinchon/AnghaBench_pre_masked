
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {scalar_t__ type; scalar_t__ len; } ;
typedef TYPE_1__ ucl_object_t ;
typedef int * ucl_object_iter_t ;
struct ucl_schema_error {int dummy; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ UCL_ARRAY ;
 scalar_t__ UCL_BOOLEAN ;
 scalar_t__ UCL_OBJECT ;
 int UCL_SCHEMA_CONSTRAINT ;
 int UCL_SCHEMA_INVALID_SCHEMA ;
 scalar_t__ strcmp (int ,char*) ;
 TYPE_1__* ucl_array_find_index (TYPE_1__ const*,unsigned int) ;
 TYPE_1__* ucl_array_head (TYPE_1__ const*) ;
 TYPE_1__* ucl_object_iterate (TYPE_1__ const*,int **,int) ;
 int ucl_object_key (TYPE_1__ const*) ;
 int ucl_object_toboolean (TYPE_1__ const*) ;
 scalar_t__ ucl_object_toint_safe (TYPE_1__ const*,scalar_t__*) ;
 int ucl_schema_array_is_unique (TYPE_1__ const*,struct ucl_schema_error*) ;
 int ucl_schema_create_error (struct ucl_schema_error*,int ,TYPE_1__ const*,char*,...) ;
 int ucl_schema_validate (TYPE_1__ const*,TYPE_1__ const*,int,struct ucl_schema_error*,TYPE_1__ const*,TYPE_1__*) ;

__attribute__((used)) static bool
ucl_schema_validate_array (const ucl_object_t *schema,
  const ucl_object_t *obj, struct ucl_schema_error *err,
  const ucl_object_t *root,
  ucl_object_t *ext_ref)
{
 const ucl_object_t *elt, *it, *found, *additional_schema = ((void*)0),
   *first_unvalidated = ((void*)0);
 ucl_object_iter_t iter = ((void*)0), piter = ((void*)0);
 bool ret = 1, allow_additional = 1, need_unique = 0;
 int64_t minmax;
 unsigned int idx = 0;

 while (ret && (elt = ucl_object_iterate (schema, &iter, 1)) != ((void*)0)) {
  if (strcmp (ucl_object_key (elt), "items") == 0) {
   if (elt->type == UCL_ARRAY) {
    found = ucl_array_head (obj);
    while (ret && (it = ucl_object_iterate (elt, &piter, 1)) != ((void*)0)) {
     if (found) {
      ret = ucl_schema_validate (it, found, 0, err,
        root, ext_ref);
      found = ucl_array_find_index (obj, ++idx);
     }
    }
    if (found != ((void*)0)) {

     first_unvalidated = found;
    }
   }
   else if (elt->type == UCL_OBJECT) {

    while (ret && (it = ucl_object_iterate (obj, &piter, 1)) != ((void*)0)) {
     ret = ucl_schema_validate (elt, it, 0, err, root,
       ext_ref);
    }
   }
   else {
    ucl_schema_create_error (err, UCL_SCHEMA_INVALID_SCHEMA, elt,
      "items attribute is invalid in schema");
    ret = 0;
    break;
   }
  }
  else if (strcmp (ucl_object_key (elt), "additionalItems") == 0) {
   if (elt->type == UCL_BOOLEAN) {
    if (!ucl_object_toboolean (elt)) {

     allow_additional = 0;
    }
   }
   else if (elt->type == UCL_OBJECT) {

    additional_schema = elt;
   }
   else {
    ucl_schema_create_error (err, UCL_SCHEMA_INVALID_SCHEMA, elt,
      "additionalItems attribute is invalid in schema");
    ret = 0;
    break;
   }
  }
  else if (elt->type == UCL_BOOLEAN &&
    strcmp (ucl_object_key (elt), "uniqueItems") == 0) {
   need_unique = ucl_object_toboolean (elt);
  }
  else if (strcmp (ucl_object_key (elt), "minItems") == 0
    && ucl_object_toint_safe (elt, &minmax)) {
   if (obj->len < minmax) {
    ucl_schema_create_error (err, UCL_SCHEMA_CONSTRAINT, obj,
      "array has not enough items: %u, minimum is: %u",
      obj->len, (unsigned)minmax);
    ret = 0;
    break;
   }
  }
  else if (strcmp (ucl_object_key (elt), "maxItems") == 0
    && ucl_object_toint_safe (elt, &minmax)) {
   if (obj->len > minmax) {
    ucl_schema_create_error (err, UCL_SCHEMA_CONSTRAINT, obj,
      "array has too many items: %u, maximum is: %u",
      obj->len, (unsigned)minmax);
    ret = 0;
    break;
   }
  }
 }

 if (ret) {

  if (!allow_additional || additional_schema != ((void*)0)) {
   if (first_unvalidated != ((void*)0)) {
    if (!allow_additional) {
     ucl_schema_create_error (err, UCL_SCHEMA_CONSTRAINT, obj,
       "array has undefined item");
     ret = 0;
    }
    else if (additional_schema != ((void*)0)) {
     elt = ucl_array_find_index (obj, idx);
     while (elt) {
      if (!ucl_schema_validate (additional_schema, elt, 0,
        err, root, ext_ref)) {
       ret = 0;
       break;
      }
      elt = ucl_array_find_index (obj, idx ++);
     }
    }
   }
  }

  if (ret && need_unique) {
   ret = ucl_schema_array_is_unique (obj, err);
  }
 }

 return ret;
}
