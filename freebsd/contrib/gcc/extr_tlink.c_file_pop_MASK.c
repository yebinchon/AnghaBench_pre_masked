
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct file_stack_entry {struct file_stack_entry* next; TYPE_1__* value; } ;
struct TYPE_3__ {scalar_t__ tweaking; } ;
typedef TYPE_1__ file ;


 struct file_stack_entry* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct file_stack_entry*) ;

__attribute__((used)) static file *
FUNC_1 (void)
{
  struct file_stack_entry *VAR_2 = VAR_0;
  file *VAR_3;
  if (VAR_2 == ((void*)0))
    return ((void*)0);
  VAR_3 = VAR_2->value;
  VAR_0 = VAR_2->next;
  FUNC_0 (&VAR_1, VAR_2);
  VAR_3->tweaking = 0;
  return VAR_3;
}
