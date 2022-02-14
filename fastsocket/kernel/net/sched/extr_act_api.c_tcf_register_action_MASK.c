
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_action_ops {scalar_t__ type; struct tc_action_ops* next; int kind; } ;


 int VAR_0 ;
 struct tc_action_ops* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct tc_action_ops *VAR_3)
{
 struct tc_action_ops *VAR_4, **VAR_5;

 FUNC_1(&VAR_2);
 for (VAR_5 = &VAR_1; (VAR_4 = *VAR_5) != ((void*)0); VAR_5 = &VAR_4->next) {
  if (VAR_3->type == VAR_4->type || (FUNC_0(VAR_3->kind, VAR_4->kind) == 0)) {
   FUNC_2(&VAR_2);
   return -VAR_0;
  }
 }
 VAR_3->next = ((void*)0);
 *VAR_5 = VAR_3;
 FUNC_2(&VAR_2);
 return 0;
}
