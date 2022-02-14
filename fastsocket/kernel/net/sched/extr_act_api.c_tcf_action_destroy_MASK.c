
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_action {struct tc_action* next; TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ (* cleanup ) (struct tc_action*,int) ;int owner; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct tc_action*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct tc_action*,int) ;

void FUNC_4(struct tc_action *VAR_1, int VAR_2)
{
 struct tc_action *VAR_3;

 for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_1) {
  if (VAR_3->ops && VAR_3->ops->cleanup) {
   if (VAR_3->ops->cleanup(VAR_3, VAR_2) == VAR_0)
    FUNC_2(VAR_3->ops->owner);
   VAR_1 = VAR_1->next;
   FUNC_1(VAR_3);
  } else {

   FUNC_0(1, "tcf_action_destroy: BUG? destroying NULL ops\n");
   VAR_1 = VAR_1->next;
   FUNC_1(VAR_3);
  }
 }
}
