
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct debug_class_type* kclass; } ;
struct debug_type {TYPE_1__ u; } ;
struct debug_method_variant {scalar_t__* physname; scalar_t__ visibility; scalar_t__ constp; scalar_t__ volatilep; scalar_t__ voffset; int * context; int * type; } ;
struct debug_method {scalar_t__* name; struct debug_method_variant** variants; } ;
struct debug_handle {int dummy; } ;
struct TYPE_7__ {scalar_t__ bitpos; scalar_t__ bitsize; } ;
struct TYPE_6__ {scalar_t__* physname; } ;
struct TYPE_8__ {TYPE_3__ f; TYPE_2__ s; } ;
struct debug_field {scalar_t__* name; scalar_t__ visibility; scalar_t__ static_member; int type; TYPE_4__ u; } ;
struct debug_class_type {struct debug_method** methods; struct debug_baseclass** baseclasses; int * vptrbase; struct debug_field** fields; } ;
struct debug_baseclass {scalar_t__ bitpos; scalar_t__ virtual; scalar_t__ visibility; int * type; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (void*,int ,int *) ;
 int FUNC_1 (struct debug_handle*,int *,int *) ;
 scalar_t__ FUNC_2 (scalar_t__*,scalar_t__*) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (struct debug_handle *VAR_2, struct debug_type *VAR_3,
   struct debug_type *VAR_4)
{
  struct debug_class_type *VAR_5, *VAR_6;

  VAR_5 = VAR_3->u.kclass;
  VAR_6 = VAR_4->u.kclass;

  if ((VAR_5->fields == ((void*)0)) != (VAR_6->fields == ((void*)0))
      || (VAR_5->baseclasses == ((void*)0)) != (VAR_6->baseclasses == ((void*)0))
      || (VAR_5->methods == ((void*)0)) != (VAR_6->methods == ((void*)0))
      || (VAR_5->vptrbase == ((void*)0)) != (VAR_6->vptrbase == ((void*)0)))
    return VAR_0;

  if (VAR_5->fields != ((void*)0))
    {
      struct debug_field **VAR_7, **VAR_8;

      for (VAR_7 = VAR_5->fields, VAR_8 = VAR_6->fields;
    *VAR_7 != ((void*)0) && *VAR_8 != ((void*)0);
    VAR_7++, VAR_8++)
 {
   struct debug_field *VAR_9, *VAR_10;

   VAR_9 = *VAR_7;
   VAR_10 = *VAR_8;
   if (VAR_9->name[0] != VAR_10->name[0]
       || VAR_9->visibility != VAR_10->visibility
       || VAR_9->static_member != VAR_10->static_member)
     return VAR_0;
   if (VAR_9->static_member)
     {
       if (FUNC_2 (VAR_9->u.s.physname, VAR_10->u.s.physname) != 0)
  return VAR_0;
     }
   else
     {
       if (VAR_9->u.f.bitpos != VAR_10->u.f.bitpos
    || VAR_9->u.f.bitsize != VAR_10->u.f.bitsize)
  return VAR_0;
     }




   if (FUNC_2 (VAR_9->name, VAR_10->name) != 0
       || ! FUNC_1 (VAR_2,
         FUNC_0 ((void *) VAR_2,
         VAR_9->type, ((void*)0)),
         FUNC_0 ((void *) VAR_2,
         VAR_10->type, ((void*)0))))
     return VAR_0;
 }
      if (*VAR_7 != ((void*)0) || *VAR_8 != ((void*)0))
 return VAR_0;
    }

  if (VAR_5->vptrbase != ((void*)0))
    {
      if (! FUNC_1 (VAR_2, VAR_5->vptrbase, VAR_6->vptrbase))
 return VAR_0;
    }

  if (VAR_5->baseclasses != ((void*)0))
    {
      struct debug_baseclass **VAR_11, **VAR_12;

      for (VAR_11 = VAR_5->baseclasses, VAR_12 = VAR_6->baseclasses;
    *VAR_11 != ((void*)0) && *VAR_12 != ((void*)0);
    ++VAR_11, ++VAR_12)
 {
   struct debug_baseclass *VAR_13, *VAR_14;

   VAR_13 = *VAR_11;
   VAR_14 = *VAR_12;
   if (VAR_13->bitpos != VAR_14->bitpos
       || VAR_13->virtual != VAR_14->virtual
       || VAR_13->visibility != VAR_14->visibility
       || ! FUNC_1 (VAR_2, VAR_13->type, VAR_14->type))
     return VAR_0;
 }
      if (*VAR_11 != ((void*)0) || *VAR_12 != ((void*)0))
 return VAR_0;
    }

  if (VAR_5->methods != ((void*)0))
    {
      struct debug_method **VAR_15, **VAR_16;

      for (VAR_15 = VAR_5->methods, VAR_16 = VAR_6->methods;
    *VAR_15 != ((void*)0) && *VAR_16 != ((void*)0);
    ++VAR_15, ++VAR_16)
 {
   struct debug_method *VAR_17, *VAR_18;

   VAR_17 = *VAR_15;
   VAR_18 = *VAR_16;
   if (VAR_17->name[0] != VAR_18->name[0]
       || FUNC_2 (VAR_17->name, VAR_18->name) != 0
       || (VAR_17->variants == ((void*)0)) != (VAR_18->variants == ((void*)0)))
     return VAR_0;
   if (VAR_17->variants == ((void*)0))
     {
       struct debug_method_variant **VAR_19, **VAR_20;

       for (VAR_19 = VAR_17->variants, VAR_20 = VAR_18->variants;
     *VAR_19 != ((void*)0) && *VAR_20 != ((void*)0);
     ++VAR_19, ++VAR_20)
  {
    struct debug_method_variant *VAR_21, *VAR_22;

    VAR_21 = *VAR_19;
    VAR_22 = *VAR_20;
    if (VAR_21->physname[0] != VAR_22->physname[0]
        || VAR_21->visibility != VAR_22->visibility
        || VAR_21->constp != VAR_22->constp
        || VAR_21->volatilep != VAR_22->volatilep
        || VAR_21->voffset != VAR_22->voffset
        || (VAR_21->context == ((void*)0)) != (VAR_22->context == ((void*)0))
        || FUNC_2 (VAR_21->physname, VAR_22->physname) != 0
        || ! FUNC_1 (VAR_2, VAR_21->type, VAR_22->type))
      return VAR_0;
    if (VAR_21->context != ((void*)0))
      {
        if (! FUNC_1 (VAR_2, VAR_21->context,
           VAR_22->context))
   return VAR_0;
      }
  }
       if (*VAR_19 != ((void*)0) || *VAR_20 != ((void*)0))
  return VAR_0;
     }
 }
      if (*VAR_15 != ((void*)0) || *VAR_16 != ((void*)0))
 return VAR_0;
    }

  return VAR_1;
}
