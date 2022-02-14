
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_item {struct stack_item* data; struct stack_item* prev; } ;


 int FUNC_0 (struct stack_item*) ;

__attribute__((used)) static struct stack_item *
FUNC_1 (struct stack_item *VAR_0)
{
  struct stack_item *VAR_1 = VAR_0;
  VAR_0 = VAR_0->prev;
  FUNC_0 (VAR_1->data);
  FUNC_0 (VAR_1);
  return VAR_0;
}
