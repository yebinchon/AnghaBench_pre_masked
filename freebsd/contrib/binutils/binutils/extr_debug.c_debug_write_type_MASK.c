
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct debug_write_fns {void* (* typedef_type ) (void*,char const*) ;void* (* empty_type ) (void*) ;void* (* tag_type ) (void*,char const*,unsigned int,scalar_t__) ;void* (* void_type ) (void*) ;void* (* int_type ) (void*,int ,int ) ;void* (* float_type ) (void*,int ) ;void* (* complex_type ) (void*,int ) ;void* (* bool_type ) (void*,int ) ;void* (* end_struct_type ) (void*) ;void* (* enum_type ) (void*,char const*,char const**,int *) ;void* (* pointer_type ) (void*) ;void* (* function_type ) (void*,int,int ) ;void* (* reference_type ) (void*) ;void* (* range_type ) (void*,int ,int ) ;void* (* array_type ) (void*,int ,int ,int ) ;void* (* set_type ) (void*,int ) ;void* (* offset_type ) (void*) ;void* (* method_type ) (void*,int ,int,int ) ;void* (* const_type ) (void*) ;void* (* volatile_type ) (void*) ;int (* struct_field ) (void*,int ,int ,int ,int ) ;int (* start_struct_type ) (void*,char const*,unsigned int,int,int ) ;} ;
struct TYPE_17__ {TYPE_12__* knamed; struct debug_type* kvolatile; struct debug_type* kconst; TYPE_11__* kmethod; TYPE_10__* koffset; TYPE_9__* kset; TYPE_8__* karray; TYPE_7__* krange; struct debug_type* kreference; TYPE_6__* kfunction; struct debug_type* kpointer; TYPE_5__* kenum; TYPE_2__* kclass; int kint; TYPE_1__* kindirect; } ;
struct debug_type {int kind; TYPE_13__ u; int size; } ;
struct debug_name {scalar_t__ mark; char const* name; scalar_t__ kind; } ;
struct debug_handle {scalar_t__ mark; unsigned int base_id; } ;
struct TYPE_20__ {int bitsize; int bitpos; } ;
struct TYPE_21__ {TYPE_3__ f; } ;
struct debug_field {int visibility; TYPE_4__ u; int name; struct debug_type* type; } ;
typedef int bfd_signed_vma ;
typedef void* bfd_boolean ;
struct TYPE_26__ {int bitstringp; struct debug_type* type; } ;
struct TYPE_25__ {int stringp; int upper; int lower; struct debug_type* range_type; struct debug_type* element_type; } ;
struct TYPE_24__ {int upper; int lower; struct debug_type* type; } ;
struct TYPE_23__ {int varargs; struct debug_type** arg_types; struct debug_type* return_type; } ;
struct TYPE_22__ {char const** names; int * values; } ;
struct TYPE_19__ {unsigned int id; scalar_t__ mark; struct debug_field** fields; } ;
struct TYPE_18__ {struct debug_type** slot; } ;
struct TYPE_16__ {struct debug_name* name; struct debug_type* type; } ;
struct TYPE_15__ {int varargs; struct debug_type* domain_type; struct debug_type** arg_types; struct debug_type* return_type; } ;
struct TYPE_14__ {struct debug_type* target_type; struct debug_type* base_type; } ;
 scalar_t__ VAR_0 ;
 struct debug_type* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 struct debug_type* FUNC_4 (void*,struct debug_type*,int *) ;
 int FUNC_5 (struct debug_handle*,char const*,struct debug_type*) ;
 void* FUNC_6 (struct debug_handle*,struct debug_write_fns const*,void*,struct debug_type*,char const*) ;
 void* FUNC_7 (void*,char const*) ;
 void* FUNC_8 (void*,char const*,unsigned int,scalar_t__) ;
 int FUNC_9 (void*,char const*,unsigned int,int,int ) ;
 int FUNC_10 (void*,int ,int ,int ,int ) ;
 void* FUNC_11 (void*) ;
 void* FUNC_12 (void*,char const*,char const**,int *) ;
 void* FUNC_13 (void*,char const*,char const**,int *) ;
 void* FUNC_14 (void*) ;
 void* FUNC_15 (void*,int,int ) ;
 void* FUNC_16 (void*) ;
 void* FUNC_17 (void*,int ,int ) ;
 void* FUNC_18 (void*) ;
 void* FUNC_19 (void*,int ,int ,int ) ;
 void* FUNC_20 (void*,int ) ;
 void* FUNC_21 (void*) ;
 void* FUNC_22 (void*,int ,int,int ) ;
 void* FUNC_23 (void*) ;
 void* FUNC_24 (void*) ;
 void* FUNC_25 (void*,char const*,unsigned int,scalar_t__) ;
 void* FUNC_26 (void*) ;
 void* FUNC_27 (void*) ;
 void* FUNC_28 (void*,int ,int ) ;
 void* FUNC_29 (void*,int ) ;
 void* FUNC_30 (void*,int ) ;
 void* FUNC_31 (void*,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_32 (struct debug_handle *VAR_3,
    const struct debug_write_fns *VAR_4, void *VAR_5,
    struct debug_type *VAR_6, struct debug_name *VAR_7)
{
  unsigned int VAR_8;
  int VAR_9;
  const char *VAR_10 = ((void*)0);




  if ((VAR_6->kind == 139
       || VAR_6->kind == 132)
      && (VAR_6->u.knamed->name->mark == VAR_3->mark
   || (VAR_6->kind == 132
       && VAR_6->u.knamed->name != VAR_7)))
    {
      if (VAR_6->kind == 139)
 return (*VAR_4->typedef_type) (VAR_5, VAR_6->u.knamed->name->name);
      else
 {
   struct debug_type *VAR_11;
   unsigned int VAR_12;

   VAR_11 = FUNC_4 ((void *) VAR_3, VAR_6, ((void*)0));
   if (VAR_11 == ((void*)0))
     return (*VAR_4->empty_type) (VAR_5);
   VAR_12 = 0;
   if ((VAR_11->kind == 133
        || VAR_11->kind == 131
        || VAR_11->kind == 149
        || VAR_11->kind == 130)
       && VAR_11->u.kclass != ((void*)0))
     {
       if (VAR_11->u.kclass->id <= VAR_3->base_id)
  {
    if (! FUNC_5 (VAR_3,
         VAR_6->u.knamed->name->name,
         VAR_11))
      return VAR_2;
  }
       VAR_12 = VAR_11->u.kclass->id;
     }

   return (*VAR_4->tag_type) (VAR_5, VAR_6->u.knamed->name->name, VAR_12,
       VAR_11->kind);
 }
    }





  if (VAR_7 != ((void*)0))
    VAR_7->mark = VAR_3->mark;

  if (VAR_7 != ((void*)0)
      && VAR_6->kind != 139
      && VAR_6->kind != 132)
    {
      FUNC_2 (VAR_7->kind == VAR_0);
      VAR_10 = VAR_7->name;
    }

  switch (VAR_6->kind)
    {
    case 143:
      FUNC_3 (FUNC_0("debug_write_type: illegal type encountered"));
      return VAR_2;
    case 142:
      if (*VAR_6->u.kindirect->slot == VAR_1)
 return (*VAR_4->empty_type) (VAR_5);
      return FUNC_32 (VAR_3, VAR_4, VAR_5, *VAR_6->u.kindirect->slot,
          VAR_7);
    case 129:
      return (*VAR_4->void_type) (VAR_5);
    case 141:
      return (*VAR_4->int_type) (VAR_5, VAR_6->size, VAR_6->u.kint);
    case 145:
      return (*VAR_4->float_type) (VAR_5, VAR_6->size);
    case 148:
      return (*VAR_4->complex_type) (VAR_5, VAR_6->size);
    case 150:
      return (*VAR_4->bool_type) (VAR_5, VAR_6->size);
    case 133:
    case 131:
      if (VAR_6->u.kclass != ((void*)0))
 {
   if (VAR_6->u.kclass->id <= VAR_3->base_id)
     {
       if (! FUNC_5 (VAR_3, VAR_10, VAR_6))
  return VAR_2;
     }

   if (VAR_3->mark == VAR_6->u.kclass->mark)
     {



       FUNC_2 (VAR_6->u.kclass->id > VAR_3->base_id);
       return (*VAR_4->tag_type) (VAR_5, VAR_10, VAR_6->u.kclass->id,
           VAR_6->kind);
     }
   VAR_6->u.kclass->mark = VAR_3->mark;
 }

      if (! (*VAR_4->start_struct_type) (VAR_5, VAR_10,
           (VAR_6->u.kclass != ((void*)0)
     ? VAR_6->u.kclass->id
     : 0),
           VAR_6->kind == 133,
           VAR_6->size))
 return VAR_2;
      if (VAR_6->u.kclass != ((void*)0)
   && VAR_6->u.kclass->fields != ((void*)0))
 {
   for (VAR_8 = 0; VAR_6->u.kclass->fields[VAR_8] != ((void*)0); VAR_8++)
     {
       struct debug_field *VAR_13;

       VAR_13 = VAR_6->u.kclass->fields[VAR_8];
       if (! FUNC_32 (VAR_3, VAR_4, VAR_5, VAR_13->type,
          (struct debug_name *) ((void*)0))
    || ! (*VAR_4->struct_field) (VAR_5, VAR_13->name, VAR_13->u.f.bitpos,
          VAR_13->u.f.bitsize, VAR_13->visibility))
  return VAR_2;
     }
 }
      return (*VAR_4->end_struct_type) (VAR_5);
    case 149:
    case 130:
      return FUNC_6 (VAR_3, VAR_4, VAR_5, VAR_6, VAR_10);
    case 146:
      if (VAR_6->u.kenum == ((void*)0))
 return (*VAR_4->enum_type) (VAR_5, VAR_10, (const char **) ((void*)0),
      (bfd_signed_vma *) ((void*)0));
      return (*VAR_4->enum_type) (VAR_5, VAR_10, VAR_6->u.kenum->names,
    VAR_6->u.kenum->values);
    case 137:
      if (! FUNC_32 (VAR_3, VAR_4, VAR_5, VAR_6->u.kpointer,
         (struct debug_name *) ((void*)0)))
 return VAR_2;
      return (*VAR_4->pointer_type) (VAR_5);
    case 144:
      if (! FUNC_32 (VAR_3, VAR_4, VAR_5,
         VAR_6->u.kfunction->return_type,
         (struct debug_name *) ((void*)0)))
 return VAR_2;
      if (VAR_6->u.kfunction->arg_types == ((void*)0))
 VAR_9 = -1;
      else
 {
   for (VAR_9 = 0; VAR_6->u.kfunction->arg_types[VAR_9] != ((void*)0); VAR_9++)
     if (! FUNC_32 (VAR_3, VAR_4, VAR_5,
        VAR_6->u.kfunction->arg_types[VAR_9],
        (struct debug_name *) ((void*)0)))
       return VAR_2;
 }
      return (*VAR_4->function_type) (VAR_5, VAR_9,
        VAR_6->u.kfunction->varargs);
    case 135:
      if (! FUNC_32 (VAR_3, VAR_4, VAR_5, VAR_6->u.kreference,
         (struct debug_name *) ((void*)0)))
 return VAR_2;
      return (*VAR_4->reference_type) (VAR_5);
    case 136:
      if (! FUNC_32 (VAR_3, VAR_4, VAR_5, VAR_6->u.krange->type,
         (struct debug_name *) ((void*)0)))
 return VAR_2;
      return (*VAR_4->range_type) (VAR_5, VAR_6->u.krange->lower,
     VAR_6->u.krange->upper);
    case 151:
      if (! FUNC_32 (VAR_3, VAR_4, VAR_5, VAR_6->u.karray->element_type,
         (struct debug_name *) ((void*)0))
   || ! FUNC_32 (VAR_3, VAR_4, VAR_5,
     VAR_6->u.karray->range_type,
     (struct debug_name *) ((void*)0)))
 return VAR_2;
      return (*VAR_4->array_type) (VAR_5, VAR_6->u.karray->lower,
     VAR_6->u.karray->upper,
     VAR_6->u.karray->stringp);
    case 134:
      if (! FUNC_32 (VAR_3, VAR_4, VAR_5, VAR_6->u.kset->type,
         (struct debug_name *) ((void*)0)))
 return VAR_2;
      return (*VAR_4->set_type) (VAR_5, VAR_6->u.kset->bitstringp);
    case 138:
      if (! FUNC_32 (VAR_3, VAR_4, VAR_5, VAR_6->u.koffset->base_type,
         (struct debug_name *) ((void*)0))
   || ! FUNC_32 (VAR_3, VAR_4, VAR_5,
     VAR_6->u.koffset->target_type,
     (struct debug_name *) ((void*)0)))
 return VAR_2;
      return (*VAR_4->offset_type) (VAR_5);
    case 140:
      if (! FUNC_32 (VAR_3, VAR_4, VAR_5,
         VAR_6->u.kmethod->return_type,
         (struct debug_name *) ((void*)0)))
 return VAR_2;
      if (VAR_6->u.kmethod->arg_types == ((void*)0))
 VAR_9 = -1;
      else
 {
   for (VAR_9 = 0; VAR_6->u.kmethod->arg_types[VAR_9] != ((void*)0); VAR_9++)
     if (! FUNC_32 (VAR_3, VAR_4, VAR_5,
        VAR_6->u.kmethod->arg_types[VAR_9],
        (struct debug_name *) ((void*)0)))
       return VAR_2;
 }
      if (VAR_6->u.kmethod->domain_type != ((void*)0))
 {
   if (! FUNC_32 (VAR_3, VAR_4, VAR_5,
      VAR_6->u.kmethod->domain_type,
      (struct debug_name *) ((void*)0)))
     return VAR_2;
 }
      return (*VAR_4->method_type) (VAR_5,
      VAR_6->u.kmethod->domain_type != ((void*)0),
      VAR_9,
      VAR_6->u.kmethod->varargs);
    case 147:
      if (! FUNC_32 (VAR_3, VAR_4, VAR_5, VAR_6->u.kconst,
         (struct debug_name *) ((void*)0)))
 return VAR_2;
      return (*VAR_4->const_type) (VAR_5);
    case 128:
      if (! FUNC_32 (VAR_3, VAR_4, VAR_5, VAR_6->u.kvolatile,
         (struct debug_name *) ((void*)0)))
 return VAR_2;
      return (*VAR_4->volatile_type) (VAR_5);
    case 139:
      return FUNC_32 (VAR_3, VAR_4, VAR_5, VAR_6->u.knamed->type,
          (struct debug_name *) ((void*)0));
    case 132:
      return FUNC_32 (VAR_3, VAR_4, VAR_5, VAR_6->u.knamed->type,
          VAR_6->u.knamed->name);
    default:
      FUNC_1 ();
      return VAR_2;
    }
}
