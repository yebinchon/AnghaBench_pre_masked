
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_25__ {scalar_t__ type; scalar_t__ len; } ;
typedef TYPE_1__ ucl_object_t ;
typedef int * ucl_object_iter_t ;
struct ucl_schema_error {int dummy; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 TYPE_1__* FUNC_1 (TYPE_1__ const*,int **,int) ;
 char* FUNC_2 (TYPE_1__ const*) ;
 TYPE_1__* FUNC_3 (TYPE_1__ const*,char*) ;
 int FUNC_4 (TYPE_1__ const*) ;
 scalar_t__ FUNC_5 (TYPE_1__ const*,scalar_t__*) ;
 char* FUNC_6 (TYPE_1__ const*) ;
 int FUNC_7 (struct ucl_schema_error*,int ,TYPE_1__ const*,char*,...) ;
 TYPE_1__* FUNC_8 (TYPE_1__ const*,char*,int) ;
 int FUNC_9 (TYPE_1__ const*,TYPE_1__ const*,int,struct ucl_schema_error*,TYPE_1__ const*,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__ const*,TYPE_1__ const*,struct ucl_schema_error*,TYPE_1__ const*,TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_11 (const ucl_object_t *VAR_6,
  const ucl_object_t *VAR_7, struct ucl_schema_error *VAR_8,
  const ucl_object_t *VAR_9,
  ucl_object_t *VAR_10)
{
 const ucl_object_t *VAR_11, *VAR_12, *VAR_13, *VAR_14 = ((void*)0),
   *VAR_15 = ((void*)0), *VAR_16, *VAR_17;
 ucl_object_iter_t VAR_18 = ((void*)0), VAR_19 = ((void*)0);
 bool VAR_20 = 1, VAR_21 = 1;
 int64_t VAR_22;

 while (VAR_20 && (VAR_11 = FUNC_1 (VAR_6, &VAR_18, 1)) != ((void*)0)) {
  if (VAR_11->type == VAR_2 &&
    FUNC_0 (FUNC_2 (VAR_11), "properties") == 0) {
   VAR_19 = ((void*)0);
   while (VAR_20 && (VAR_12 = FUNC_1 (VAR_11, &VAR_19, 1)) != ((void*)0)) {
    VAR_13 = FUNC_3 (VAR_7, FUNC_2 (VAR_12));
    if (VAR_13) {
     VAR_20 = FUNC_9 (VAR_12, VAR_13, 1, VAR_8, VAR_9,
       VAR_10);
    }
   }
  }
  else if (FUNC_0 (FUNC_2 (VAR_11), "additionalProperties") == 0) {
   if (VAR_11->type == VAR_1) {
    if (!FUNC_4 (VAR_11)) {

     VAR_21 = 0;
    }
   }
   else if (VAR_11->type == VAR_2) {

    VAR_14 = VAR_11;
   }
   else {
    FUNC_7 (VAR_8, VAR_4, VAR_11,
      "additionalProperties attribute is invalid in schema");
    VAR_20 = 0;
    break;
   }
  }
  else if (FUNC_0 (FUNC_2 (VAR_11), "required") == 0) {
   if (VAR_11->type == VAR_0) {
    VAR_15 = VAR_11;
   }
   else {
    FUNC_7 (VAR_8, VAR_4, VAR_11,
      "required attribute is invalid in schema");
    VAR_20 = 0;
    break;
   }
  }
  else if (FUNC_0 (FUNC_2 (VAR_11), "minProperties") == 0
    && FUNC_5 (VAR_11, &VAR_22)) {
   if (VAR_7->len < VAR_22) {
    FUNC_7 (VAR_8, VAR_3, VAR_7,
      "object has not enough properties: %u, minimum is: %u",
      VAR_7->len, (unsigned)VAR_22);
    VAR_20 = 0;
    break;
   }
  }
  else if (FUNC_0 (FUNC_2 (VAR_11), "maxProperties") == 0
    && FUNC_5 (VAR_11, &VAR_22)) {
   if (VAR_7->len > VAR_22) {
    FUNC_7 (VAR_8, VAR_3, VAR_7,
      "object has too many properties: %u, maximum is: %u",
      VAR_7->len, (unsigned)VAR_22);
    VAR_20 = 0;
    break;
   }
  }
  else if (FUNC_0 (FUNC_2 (VAR_11), "patternProperties") == 0) {
   const ucl_object_t *VAR_23;
   ucl_object_iter_t VAR_24;
   VAR_19 = ((void*)0);
   while (VAR_20 && (VAR_12 = FUNC_1 (VAR_11, &VAR_19, 1)) != ((void*)0)) {
    VAR_24 = ((void*)0);
    while (VAR_20 && (VAR_23 = FUNC_1 (VAR_7, &VAR_24, 1)) != ((void*)0)) {
     VAR_13 = FUNC_8 (VAR_23, FUNC_2 (VAR_12), 0);
     if (VAR_13) {
      VAR_20 = FUNC_9 (VAR_12, VAR_13, 1, VAR_8, VAR_9,
        VAR_10);
     }
    }
   }
  }
  else if (VAR_11->type == VAR_2 &&
    FUNC_0 (FUNC_2 (VAR_11), "dependencies") == 0) {
   VAR_20 = FUNC_10 (VAR_11, VAR_7, VAR_8, VAR_9,
     VAR_10);
  }
 }

 if (VAR_20) {

  if (!VAR_21 || VAR_14 != ((void*)0)) {

   VAR_18 = ((void*)0);
   VAR_12 = FUNC_3 (VAR_6, "properties");
   while ((VAR_11 = FUNC_1 (VAR_7, &VAR_18, 1)) != ((void*)0)) {
    VAR_13 = FUNC_3 (VAR_12, FUNC_2 (VAR_11));
    if (VAR_13 == ((void*)0)) {

     VAR_19 = ((void*)0);
     VAR_16 = FUNC_3 (VAR_6, "patternProperties");
     while ((VAR_17 = FUNC_1 (VAR_16, &VAR_19, 1)) != ((void*)0)) {
      VAR_13 = FUNC_8 (VAR_7, FUNC_2 (VAR_17), 1);
      if (VAR_13 != ((void*)0)) {
       break;
      }
     }
    }
    if (VAR_13 == ((void*)0)) {
     if (!VAR_21) {
      FUNC_7 (VAR_8, VAR_3, VAR_7,
        "object has non-allowed property %s",
        FUNC_2 (VAR_11));
      VAR_20 = 0;
      break;
     }
     else if (VAR_14 != ((void*)0)) {
      if (!FUNC_9 (VAR_14, VAR_11,
        1, VAR_8, VAR_9, VAR_10)) {
       VAR_20 = 0;
       break;
      }
     }
    }
   }
  }

  if (VAR_15 != ((void*)0)) {
   VAR_18 = ((void*)0);
   while ((VAR_11 = FUNC_1 (VAR_15, &VAR_18, 1)) != ((void*)0)) {
    if (FUNC_3 (VAR_7, FUNC_6 (VAR_11)) == ((void*)0)) {
     FUNC_7 (VAR_8, VAR_5, VAR_7,
       "object has missing property %s",
       FUNC_6 (VAR_11));
     VAR_20 = 0;
     break;
    }
   }
  }
 }


 return VAR_20;
}
