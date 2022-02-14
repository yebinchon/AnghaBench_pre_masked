
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct process_info {scalar_t__ status_pending_p; TYPE_1__* resume; } ;
struct inferior_list_entry {int dummy; } ;
struct TYPE_2__ {scalar_t__ leave_stopped; } ;


 int FUNC_0 (struct process_info*) ;

__attribute__((used)) static int
FUNC_1 (struct inferior_list_entry *VAR_0, void *VAR_1)
{
  struct process_info *VAR_2 = (struct process_info *) VAR_0;



  if (VAR_2->resume->leave_stopped)
    return 0;
  if (VAR_2->status_pending_p)
    FUNC_0 (VAR_2);

  if (VAR_2->status_pending_p)
    * (int *) VAR_1 = 1;

  return 0;
}
