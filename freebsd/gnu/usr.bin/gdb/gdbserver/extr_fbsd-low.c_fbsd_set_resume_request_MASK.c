
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {int dummy; } ;
struct process_info {TYPE_1__* resume; } ;
struct inferior_list_entry {int id; } ;
struct TYPE_2__ {int thread; } ;


 struct process_info* FUNC_0 (struct thread_info*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_1 (struct inferior_list_entry *VAR_1)
{
  struct process_info *VAR_2;
  struct thread_info *VAR_3;
  int VAR_4;

  VAR_3 = (struct thread_info *) VAR_1;
  VAR_2 = FUNC_0 (VAR_3);

  VAR_4 = 0;
  while (VAR_0[VAR_4].thread != -1 && VAR_0[VAR_4].thread != VAR_1->id)
    VAR_4++;

  VAR_2->resume = &VAR_0[VAR_4];
}
