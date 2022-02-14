
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int prio; int op; TYPE_1__* left; } ;
struct print_arg {TYPE_2__ op; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct print_arg *VAR_1)
{


 if (!VAR_1->op.left || VAR_1->op.left->type == VAR_0)
  VAR_1->op.prio = 0;
 else
  VAR_1->op.prio = FUNC_0(VAR_1->op.op);

 return VAR_1->op.prio;
}
