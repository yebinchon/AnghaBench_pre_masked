
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct debug_write_fns {int (* end_class_type ) (void*) ;int (* class_end_method ) (void*) ;int (* class_static_method_variant ) (void*,int ,int ,int ,int ) ;int (* class_method_variant ) (void*,int ,int ,int ,int ,scalar_t__,int ) ;int (* class_start_method ) (void*,int ) ;int (* class_baseclass ) (void*,int ,int ,int ) ;int (* struct_field ) (void*,int ,int ,int ,int ) ;int (* class_static_member ) (void*,int ,int ,int ) ;int (* start_class_type ) (void*,char const*,unsigned int,int,int ,int ,int) ;int (* tag_type ) (void*,char const*,unsigned int,scalar_t__) ;} ;
struct TYPE_10__ {TYPE_4__* kclass; } ;
struct debug_type {scalar_t__ kind; TYPE_5__ u; int size; } ;
struct debug_name {int dummy; } ;
struct debug_method_variant {scalar_t__ voffset; int volatilep; int constp; int visibility; int physname; struct debug_type* context; struct debug_type* type; } ;
struct debug_method {struct debug_method_variant** variants; int name; } ;
struct debug_handle {unsigned int base_id; scalar_t__ mark; } ;
struct TYPE_7__ {int bitsize; int bitpos; } ;
struct TYPE_6__ {int physname; } ;
struct TYPE_8__ {TYPE_2__ f; TYPE_1__ s; } ;
struct debug_field {int visibility; TYPE_3__ u; int name; scalar_t__ static_member; struct debug_type* type; } ;
struct debug_baseclass {int visibility; int virtual; int bitpos; struct debug_type* type; } ;
typedef int bfd_boolean ;
struct TYPE_9__ {unsigned int id; scalar_t__ mark; struct debug_method** methods; struct debug_baseclass** baseclasses; struct debug_field** fields; struct debug_type* vptrbase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct debug_handle*,char const*,struct debug_type*) ;
 int FUNC_2 (struct debug_handle*,struct debug_write_fns const*,void*,struct debug_type*,struct debug_name*) ;
 int FUNC_3 (void*,char const*,unsigned int,scalar_t__) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*,char const*,unsigned int,int,int ,int ,int) ;
 int FUNC_6 (void*,int ,int ,int ) ;
 int FUNC_7 (void*,int ,int ,int ,int ) ;
 int FUNC_8 (void*,int ,int ,int ) ;
 int FUNC_9 (void*,int ) ;
 int FUNC_10 (void*,int ,int ,int ,int ,scalar_t__,int ) ;
 int FUNC_11 (void*,int ,int ,int ,int ) ;
 int FUNC_12 (void*) ;

__attribute__((used)) static bfd_boolean
FUNC_13 (struct debug_handle *VAR_3,
   const struct debug_write_fns *VAR_4, void *VAR_5,
   struct debug_type *VAR_6, const char *VAR_7)
{
  unsigned int VAR_8;
  unsigned int VAR_9;
  struct debug_type *VAR_10;

  if (VAR_6->u.kclass == ((void*)0))
    {
      VAR_9 = 0;
      VAR_10 = ((void*)0);
    }
  else
    {
      if (VAR_6->u.kclass->id <= VAR_3->base_id)
 {
   if (! FUNC_1 (VAR_3, VAR_7, VAR_6))
     return VAR_1;
 }

      if (VAR_3->mark == VAR_6->u.kclass->mark)
 {



   FUNC_0 (VAR_6->u.kclass->id > VAR_3->base_id);
   return (*VAR_4->tag_type) (VAR_5, VAR_7, VAR_6->u.kclass->id,
       VAR_6->kind);
 }
      VAR_6->u.kclass->mark = VAR_3->mark;
      VAR_9 = VAR_6->u.kclass->id;

      VAR_10 = VAR_6->u.kclass->vptrbase;
      if (VAR_10 != ((void*)0) && VAR_10 != VAR_6)
 {
   if (! FUNC_2 (VAR_3, VAR_4, VAR_5, VAR_10,
      (struct debug_name *) ((void*)0)))
     return VAR_1;
 }
    }

  if (! (*VAR_4->start_class_type) (VAR_5, VAR_7, VAR_9,
      VAR_6->kind == VAR_0,
      VAR_6->size,
      VAR_10 != ((void*)0),
      VAR_10 == VAR_6))
    return VAR_1;

  if (VAR_6->u.kclass != ((void*)0))
    {
      if (VAR_6->u.kclass->fields != ((void*)0))
 {
   for (VAR_8 = 0; VAR_6->u.kclass->fields[VAR_8] != ((void*)0); VAR_8++)
     {
       struct debug_field *VAR_11;

       VAR_11 = VAR_6->u.kclass->fields[VAR_8];
       if (! FUNC_2 (VAR_3, VAR_4, VAR_5, VAR_11->type,
          (struct debug_name *) ((void*)0)))
  return VAR_1;
       if (VAR_11->static_member)
  {
    if (! (*VAR_4->class_static_member) (VAR_5, VAR_11->name,
           VAR_11->u.s.physname,
           VAR_11->visibility))
      return VAR_1;
  }
       else
  {
    if (! (*VAR_4->struct_field) (VAR_5, VAR_11->name, VAR_11->u.f.bitpos,
           VAR_11->u.f.bitsize, VAR_11->visibility))
      return VAR_1;
  }
     }
 }

      if (VAR_6->u.kclass->baseclasses != ((void*)0))
 {
   for (VAR_8 = 0; VAR_6->u.kclass->baseclasses[VAR_8] != ((void*)0); VAR_8++)
     {
       struct debug_baseclass *VAR_12;

       VAR_12 = VAR_6->u.kclass->baseclasses[VAR_8];
       if (! FUNC_2 (VAR_3, VAR_4, VAR_5, VAR_12->type,
          (struct debug_name *) ((void*)0)))
  return VAR_1;
       if (! (*VAR_4->class_baseclass) (VAR_5, VAR_12->bitpos, VAR_12->virtual,
          VAR_12->visibility))
  return VAR_1;
     }
 }

      if (VAR_6->u.kclass->methods != ((void*)0))
 {
   for (VAR_8 = 0; VAR_6->u.kclass->methods[VAR_8] != ((void*)0); VAR_8++)
     {
       struct debug_method *VAR_13;
       unsigned int VAR_14;

       VAR_13 = VAR_6->u.kclass->methods[VAR_8];
       if (! (*VAR_4->class_start_method) (VAR_5, VAR_13->name))
  return VAR_1;
       for (VAR_14 = 0; VAR_13->variants[VAR_14] != ((void*)0); VAR_14++)
  {
    struct debug_method_variant *VAR_15;

    VAR_15 = VAR_13->variants[VAR_14];
    if (VAR_15->context != ((void*)0))
      {
        if (! FUNC_2 (VAR_3, VAR_4, VAR_5, VAR_15->context,
           (struct debug_name *) ((void*)0)))
   return VAR_1;
      }
    if (! FUNC_2 (VAR_3, VAR_4, VAR_5, VAR_15->type,
       (struct debug_name *) ((void*)0)))
      return VAR_1;
    if (VAR_15->voffset != VAR_2)
      {
        if (! (*VAR_4->class_method_variant) (VAR_5, VAR_15->physname,
         VAR_15->visibility,
         VAR_15->constp,
         VAR_15->volatilep,
         VAR_15->voffset,
         VAR_15->context != ((void*)0)))
   return VAR_1;
      }
    else
      {
        if (! (*VAR_4->class_static_method_variant) (VAR_5,
         VAR_15->physname,
         VAR_15->visibility,
         VAR_15->constp,
         VAR_15->volatilep))
   return VAR_1;
      }
  }
       if (! (*VAR_4->class_end_method) (VAR_5))
  return VAR_1;
     }
 }
    }

  return (*VAR_4->end_class_type) (VAR_5);
}
