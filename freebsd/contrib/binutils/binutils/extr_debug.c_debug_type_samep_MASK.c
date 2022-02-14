
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct debug_type_compare_list {struct debug_type_compare_list* next; struct debug_type* t2; struct debug_type* t1; } ;
struct TYPE_15__ {TYPE_11__* knamed; struct debug_type* kvolatile; struct debug_type* kconst; TYPE_9__* kmethod; TYPE_8__* koffset; TYPE_7__* kset; TYPE_6__* karray; TYPE_5__* krange; struct debug_type* kreference; TYPE_4__* kfunction; struct debug_type* kpointer; TYPE_3__* kenum; TYPE_2__* kclass; int kint; TYPE_1__* kindirect; } ;
struct debug_type {scalar_t__ kind; scalar_t__ size; TYPE_12__ u; } ;
struct debug_handle {struct debug_type_compare_list* compare_list; int base_id; } ;
typedef int bfd_signed_vma ;
typedef int bfd_boolean ;
struct TYPE_24__ {struct debug_type** arg_types; struct debug_type* domain_type; struct debug_type* return_type; int varargs; } ;
struct TYPE_23__ {struct debug_type* target_type; struct debug_type* base_type; } ;
struct TYPE_22__ {struct debug_type* type; int bitstringp; } ;
struct TYPE_21__ {struct debug_type* element_type; int stringp; int upper; int lower; } ;
struct TYPE_20__ {struct debug_type* type; int upper; int lower; } ;
struct TYPE_19__ {struct debug_type** arg_types; struct debug_type* return_type; int varargs; } ;
struct TYPE_18__ {char** names; int * values; } ;
struct TYPE_17__ {int id; } ;
struct TYPE_16__ {struct debug_type** slot; } ;
struct TYPE_14__ {struct debug_type* type; TYPE_10__* name; } ;
struct TYPE_13__ {char const* name; } ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct debug_handle*,struct debug_type*,struct debug_type*) ;
 int FUNC_2 (char const*,char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (struct debug_handle *VAR_3, struct debug_type *VAR_4,
    struct debug_type *VAR_5)
{
  struct debug_type_compare_list *VAR_6;
  struct debug_type_compare_list VAR_7;
  bfd_boolean VAR_8;

  if (VAR_4 == ((void*)0))
    return VAR_5 == ((void*)0);
  if (VAR_5 == ((void*)0))
    return VAR_1;

  while (VAR_4->kind == VAR_0)
    {
      VAR_4 = *VAR_4->u.kindirect->slot;
      if (VAR_4 == ((void*)0))
 return VAR_1;
    }
  while (VAR_5->kind == VAR_0)
    {
      VAR_5 = *VAR_5->u.kindirect->slot;
      if (VAR_5 == ((void*)0))
 return VAR_1;
    }

  if (VAR_4 == VAR_5)
    return VAR_2;




  if (VAR_4->kind == 139
      && VAR_5->kind == 132)
    return FUNC_3 (VAR_3, VAR_4->u.knamed->type, VAR_5);
  else if (VAR_4->kind == 132
    && VAR_5->kind == 139)
    return FUNC_3 (VAR_3, VAR_4, VAR_5->u.knamed->type);

  if (VAR_4->kind != VAR_5->kind
      || VAR_4->size != VAR_5->size)
    return VAR_1;


  switch (VAR_4->kind)
    {
    default:
      break;
    case 129:
    case 143:
    case 146:
    case 148:
      return VAR_2;
    case 141:
      return VAR_4->u.kint == VAR_5->u.kint;
    }





  for (VAR_6 = VAR_3->compare_list; VAR_6 != ((void*)0); VAR_6 = VAR_6->next)
    {
      if (VAR_6->t1 == VAR_4 && VAR_6->t2 == VAR_5)
 return VAR_2;
    }

  VAR_7.t1 = VAR_4;
  VAR_7.t2 = VAR_5;
  VAR_7.next = VAR_3->compare_list;
  VAR_3->compare_list = &VAR_7;

  switch (VAR_4->kind)
    {
    default:
      FUNC_0 ();
      VAR_8 = VAR_1;
      break;

    case 133:
    case 131:
    case 147:
    case 130:
      if (VAR_4->u.kclass == ((void*)0))
 VAR_8 = VAR_5->u.kclass == ((void*)0);
      else if (VAR_5->u.kclass == ((void*)0))
 VAR_8 = VAR_1;
      else if (VAR_4->u.kclass->id > VAR_3->base_id
        && VAR_4->u.kclass->id == VAR_5->u.kclass->id)
 VAR_8 = VAR_2;
      else
 VAR_8 = FUNC_1 (VAR_3, VAR_4, VAR_5);
      break;

    case 144:
      if (VAR_4->u.kenum == ((void*)0))
 VAR_8 = VAR_5->u.kenum == ((void*)0);
      else if (VAR_5->u.kenum == ((void*)0))
 VAR_8 = VAR_1;
      else
 {
   const char **VAR_9, **VAR_10;
   bfd_signed_vma *VAR_11, *VAR_12;

   VAR_9 = VAR_4->u.kenum->names;
   VAR_10 = VAR_5->u.kenum->names;
   VAR_11 = VAR_4->u.kenum->values;
   VAR_12 = VAR_5->u.kenum->values;
   while (*VAR_9 != ((void*)0) && *VAR_10 != ((void*)0))
     {
       if (**VAR_9 != **VAR_10
    || *VAR_11 != *VAR_12
    || FUNC_2 (*VAR_9, *VAR_10) != 0)
  break;
       ++VAR_9;
       ++VAR_10;
       ++VAR_11;
       ++VAR_12;
     }
   VAR_8 = *VAR_9 == ((void*)0) && *VAR_10 == ((void*)0);
 }
      break;

    case 137:
      VAR_8 = FUNC_3 (VAR_3, VAR_4->u.kpointer, VAR_5->u.kpointer);
      break;

    case 142:
      if (VAR_4->u.kfunction->varargs != VAR_5->u.kfunction->varargs
   || ! FUNC_3 (VAR_3, VAR_4->u.kfunction->return_type,
     VAR_5->u.kfunction->return_type)
   || ((VAR_4->u.kfunction->arg_types == ((void*)0))
       != (VAR_5->u.kfunction->arg_types == ((void*)0))))
 VAR_8 = VAR_1;
      else if (VAR_4->u.kfunction->arg_types == ((void*)0))
 VAR_8 = VAR_2;
      else
 {
   struct debug_type **VAR_13, **VAR_14;

   VAR_13 = VAR_4->u.kfunction->arg_types;
   VAR_14 = VAR_5->u.kfunction->arg_types;
   while (*VAR_13 != ((void*)0) && *VAR_14 != ((void*)0))
     {
       if (! FUNC_3 (VAR_3, *VAR_13, *VAR_14))
  break;
       ++VAR_13;
       ++VAR_14;
     }
   VAR_8 = *VAR_13 == ((void*)0) && *VAR_14 == ((void*)0);
 }
      break;

    case 135:
      VAR_8 = FUNC_3 (VAR_3, VAR_4->u.kreference, VAR_5->u.kreference);
      break;

    case 136:
      VAR_8 = (VAR_4->u.krange->lower == VAR_5->u.krange->lower
      && VAR_4->u.krange->upper == VAR_5->u.krange->upper
      && FUNC_3 (VAR_3, VAR_4->u.krange->type,
      VAR_5->u.krange->type));

    case 149:
      VAR_8 = (VAR_4->u.karray->lower == VAR_5->u.karray->lower
      && VAR_4->u.karray->upper == VAR_5->u.karray->upper
      && VAR_4->u.karray->stringp == VAR_5->u.karray->stringp
      && FUNC_3 (VAR_3, VAR_4->u.karray->element_type,
      VAR_5->u.karray->element_type));
      break;

    case 134:
      VAR_8 = (VAR_4->u.kset->bitstringp == VAR_5->u.kset->bitstringp
      && FUNC_3 (VAR_3, VAR_4->u.kset->type, VAR_5->u.kset->type));
      break;

    case 138:
      VAR_8 = (FUNC_3 (VAR_3, VAR_4->u.koffset->base_type,
          VAR_5->u.koffset->base_type)
      && FUNC_3 (VAR_3, VAR_4->u.koffset->target_type,
      VAR_5->u.koffset->target_type));
      break;

    case 140:
      if (VAR_4->u.kmethod->varargs != VAR_5->u.kmethod->varargs
   || ! FUNC_3 (VAR_3, VAR_4->u.kmethod->return_type,
     VAR_5->u.kmethod->return_type)
   || ! FUNC_3 (VAR_3, VAR_4->u.kmethod->domain_type,
     VAR_5->u.kmethod->domain_type)
   || ((VAR_4->u.kmethod->arg_types == ((void*)0))
       != (VAR_5->u.kmethod->arg_types == ((void*)0))))
 VAR_8 = VAR_1;
      else if (VAR_4->u.kmethod->arg_types == ((void*)0))
 VAR_8 = VAR_2;
      else
 {
   struct debug_type **VAR_15, **VAR_16;

   VAR_15 = VAR_4->u.kmethod->arg_types;
   VAR_16 = VAR_5->u.kmethod->arg_types;
   while (*VAR_15 != ((void*)0) && *VAR_16 != ((void*)0))
     {
       if (! FUNC_3 (VAR_3, *VAR_15, *VAR_16))
  break;
       ++VAR_15;
       ++VAR_16;
     }
   VAR_8 = *VAR_15 == ((void*)0) && *VAR_16 == ((void*)0);
 }
      break;

    case 145:
      VAR_8 = FUNC_3 (VAR_3, VAR_4->u.kconst, VAR_5->u.kconst);
      break;

    case 128:
      VAR_8 = FUNC_3 (VAR_3, VAR_4->u.kvolatile, VAR_5->u.kvolatile);
      break;

    case 139:
    case 132:
      VAR_8 = (FUNC_2 (VAR_4->u.knamed->name->name, VAR_5->u.knamed->name->name) == 0
      && FUNC_3 (VAR_3, VAR_4->u.knamed->type,
      VAR_5->u.knamed->type));
      break;
    }

  VAR_3->compare_list = VAR_7.next;

  return VAR_8;
}
