
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct debug_write_fns {int (* typed_constant ) (void*,int ,int ) ;int (* float_constant ) (void*,int ,int ) ;int (* int_constant ) (void*,int ,int ) ;int (* variable ) (void*,int ,int ,int ) ;int (* tag ) (void*,int ) ;int (* typdef ) (void*,int ) ;} ;
struct TYPE_6__ {TYPE_2__* typed_constant; int float_constant; int int_constant; int function; TYPE_1__* variable; int tag; int type; } ;
struct debug_name {int kind; TYPE_3__ u; int name; int linkage; } ;
struct debug_handle {int dummy; } ;
typedef int bfd_boolean ;
struct TYPE_5__ {int val; int type; } ;
struct TYPE_4__ {int val; int kind; int type; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct debug_handle*,struct debug_write_fns const*,void*,int ,int ,int ) ;
 int FUNC_2 (struct debug_handle*,struct debug_write_fns const*,void*,int ,struct debug_name*) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (void*,int ,int ,int ) ;
 int FUNC_6 (void*,int ,int ) ;
 int FUNC_7 (void*,int ,int ) ;
 int FUNC_8 (void*,int ,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_9 (struct debug_handle *VAR_2,
    const struct debug_write_fns *VAR_3, void *VAR_4,
    struct debug_name *VAR_5)
{
  switch (VAR_5->kind)
    {
    case 130:
      if (! FUNC_2 (VAR_2, VAR_3, VAR_4, VAR_5->u.type, VAR_5)
   || ! (*VAR_3->typdef) (VAR_4, VAR_5->name))
 return VAR_0;
      return VAR_1;
    case 131:
      if (! FUNC_2 (VAR_2, VAR_3, VAR_4, VAR_5->u.tag, VAR_5))
 return VAR_0;
      return (*VAR_3->tag) (VAR_4, VAR_5->name);
    case 128:
      if (! FUNC_2 (VAR_2, VAR_3, VAR_4, VAR_5->u.variable->type,
         (struct debug_name *) ((void*)0)))
 return VAR_0;
      return (*VAR_3->variable) (VAR_4, VAR_5->name, VAR_5->u.variable->kind,
          VAR_5->u.variable->val);
    case 133:
      return FUNC_1 (VAR_2, VAR_3, VAR_4, VAR_5->name,
       VAR_5->linkage, VAR_5->u.function);
    case 132:
      return (*VAR_3->int_constant) (VAR_4, VAR_5->name, VAR_5->u.int_constant);
    case 134:
      return (*VAR_3->float_constant) (VAR_4, VAR_5->name, VAR_5->u.float_constant);
    case 129:
      if (! FUNC_2 (VAR_2, VAR_3, VAR_4, VAR_5->u.typed_constant->type,
         (struct debug_name *) ((void*)0)))
 return VAR_0;
      return (*VAR_3->typed_constant) (VAR_4, VAR_5->name,
         VAR_5->u.typed_constant->val);
    default:
      FUNC_0 ();
      return VAR_0;
    }

}
