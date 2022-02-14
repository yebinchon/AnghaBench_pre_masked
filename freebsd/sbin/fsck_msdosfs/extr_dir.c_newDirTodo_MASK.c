
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirTodoNode {struct dirTodoNode* next; } ;


 struct dirTodoNode* VAR_0 ;
 struct dirTodoNode* FUNC_0 (int) ;

__attribute__((used)) static struct dirTodoNode *
FUNC_1(void)
{
 struct dirTodoNode *VAR_1;

 if (!(VAR_1 = VAR_0)) {
  if (!(VAR_1 = FUNC_0(sizeof *VAR_1)))
   return 0;
 } else
  VAR_0 = VAR_1->next;
 return VAR_1;
}
