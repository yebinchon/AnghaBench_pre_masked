
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct filter_arg* left; struct filter_arg* right; } ;
struct filter_arg {scalar_t__ type; TYPE_1__ op; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct filter_arg*) ;
 int FUNC_2 (struct filter_arg*) ;

void FUNC_3(struct filter_arg *VAR_1, struct filter_arg *VAR_2,
    struct filter_arg *VAR_3)
{
 struct filter_arg *VAR_4;
 struct filter_arg **VAR_5;

 if (VAR_1->type != VAR_0 &&
     VAR_3->type != VAR_0)
  FUNC_0("can not reparent other than OP");


 if (VAR_2->op.right == VAR_3) {
  VAR_5 = &VAR_2->op.right;
  VAR_4 = VAR_2->op.left;
 } else if (VAR_2->op.left == VAR_3) {
  VAR_5 = &VAR_2->op.left;
  VAR_4 = VAR_2->op.right;
 } else
  FUNC_0("Error in reparent op, find other child");


 *VAR_5 = ((void*)0);


 if (VAR_1 == VAR_2) {
  FUNC_2(VAR_4);
  *VAR_1 = *VAR_3;

  FUNC_1(VAR_3);
  return;
 }

 if (VAR_1->op.right == VAR_2)
  VAR_5 = &VAR_1->op.right;
 else if (VAR_1->op.left == VAR_2)
  VAR_5 = &VAR_1->op.left;
 else
  FUNC_0("Error in reparent op");
 *VAR_5 = VAR_3;

 FUNC_2(VAR_2);
}
