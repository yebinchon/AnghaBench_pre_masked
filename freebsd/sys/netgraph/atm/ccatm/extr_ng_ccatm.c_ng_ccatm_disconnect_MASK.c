
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccnode {int hook_cnt; int data; int * manage; int * dump; } ;
struct cchook {TYPE_1__* node; int inst; scalar_t__ is_uni; } ;
struct ccdata {int dummy; } ;
typedef int node_p ;
typedef int * hook_p ;
struct TYPE_2__ {struct ccdata* data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct cchook* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 struct ccnode* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct ccdata*) ;
 int FUNC_10 (struct cchook*,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(hook_p VAR_1)
{
 node_p VAR_2 = FUNC_0(VAR_1);
 struct ccnode *VAR_3 = FUNC_5(VAR_2);
 struct cchook *VAR_4 = FUNC_1(VAR_1);
 struct ccdata *VAR_5;

 if (VAR_1 == VAR_3->dump) {
  VAR_3->dump = ((void*)0);

 } else if (VAR_1 == VAR_3->manage) {
  VAR_3->manage = ((void*)0);
  FUNC_7(VAR_3->data);

 } else {
  if (VAR_4->is_uni)
   FUNC_6(VAR_4->inst, 0);
  else
   FUNC_8(VAR_4->inst);

  VAR_5 = VAR_4->node->data;

  FUNC_10(VAR_4, VAR_0);
  FUNC_2(VAR_1, ((void*)0));

  VAR_3->hook_cnt--;

  FUNC_9(VAR_5);
 }




 if (FUNC_4(VAR_2) == 0 && FUNC_3(VAR_2))
  FUNC_11(VAR_2);

 return (0);
}
