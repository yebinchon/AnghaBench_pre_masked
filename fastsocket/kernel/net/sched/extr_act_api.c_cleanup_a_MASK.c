
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_action {struct tc_action* next; } ;


 int FUNC_0 (struct tc_action*) ;

__attribute__((used)) static void FUNC_1(struct tc_action *VAR_0)
{
 struct tc_action *VAR_1;

 for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_0) {
  VAR_0 = VAR_1->next;
  FUNC_0(VAR_1);
 }
}
