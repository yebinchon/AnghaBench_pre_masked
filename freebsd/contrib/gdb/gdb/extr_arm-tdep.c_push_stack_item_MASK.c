
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_item {int len; void* data; struct stack_item* prev; } ;


 int FUNC_0 (void*,void*,int) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static struct stack_item *
FUNC_2 (struct stack_item *VAR_0, void *VAR_1, int VAR_2)
{
  struct stack_item *VAR_3;
  VAR_3 = FUNC_1 (sizeof (struct stack_item));
  VAR_3->data = FUNC_1 (VAR_2);
  VAR_3->len = VAR_2;
  VAR_3->prev = VAR_0;
  FUNC_0 (VAR_3->data, VAR_1, VAR_2);
  return VAR_3;
}
