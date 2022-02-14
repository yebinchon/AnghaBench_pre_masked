
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct file_stack_entry {struct file_stack_entry* next; TYPE_1__* value; } ;
struct TYPE_3__ {int tweaking; } ;
typedef TYPE_1__ file ;


 struct file_stack_entry* VAR_0 ;
 int VAR_1 ;
 struct file_stack_entry* FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1 (file *VAR_2)
{
  struct file_stack_entry *VAR_3;

  if (VAR_2->tweaking)
    return;

  VAR_3 = FUNC_0
    (&VAR_1, sizeof (struct file_stack_entry));
  VAR_3->value = VAR_2;
  VAR_3->next = VAR_0;
  VAR_0 = VAR_3;
  VAR_2->tweaking = 1;
}
