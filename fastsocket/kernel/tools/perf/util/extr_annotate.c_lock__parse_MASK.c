
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* ops; TYPE_5__* ins; } ;
struct ins_operands {TYPE_2__ locked; int raw; } ;
struct TYPE_10__ {TYPE_1__* ops; } ;
struct TYPE_9__ {int raw; } ;
struct TYPE_7__ {int (* parse ) (TYPE_3__*) ;} ;


 scalar_t__ FUNC_0 (int ,char**,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_5__* FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct ins_operands *VAR_0)
{
 char *VAR_1;

 VAR_0->locked.ops = FUNC_4(sizeof(*VAR_0->locked.ops));
 if (VAR_0->locked.ops == ((void*)0))
  return 0;

 if (FUNC_0(VAR_0->raw, &VAR_1, &VAR_0->locked.ops->raw) < 0)
  goto out_free_ops;

 VAR_0->locked.ins = FUNC_2(VAR_1);
 if (VAR_0->locked.ins == ((void*)0))
  goto out_free_ops;

 if (!VAR_0->locked.ins->ops)
  return 0;

 if (VAR_0->locked.ins->ops->parse)
  VAR_0->locked.ins->ops->parse(VAR_0->locked.ops);

 return 0;

out_free_ops:
 FUNC_1(VAR_0->locked.ops);
 VAR_0->locked.ops = ((void*)0);
 return 0;
}
