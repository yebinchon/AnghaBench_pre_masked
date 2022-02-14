
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct task_entry {void* task_id; } ;


 int FUNC_0 () ;
 struct task_entry* FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;

void *
FUNC_2 (void)
{
  struct value *VAR_1;
  void *VAR_2;
  int VAR_3;
  struct task_entry *VAR_4;
  extern int VAR_5;


  if (VAR_0)

    {
      VAR_4 = FUNC_1 (FUNC_0 ());
      return VAR_4 ? VAR_4->task_id : 0;
    }




  return ((void*)0);
}
