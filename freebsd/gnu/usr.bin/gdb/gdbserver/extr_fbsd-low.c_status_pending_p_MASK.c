
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct process_info {int status_pending_p; int head; } ;
struct inferior_list_entry {int dummy; } ;


 scalar_t__ FUNC_0 (struct process_info*) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_2 (struct inferior_list_entry *VAR_0, void *VAR_1)
{
  struct process_info *VAR_2 = (struct process_info *) VAR_0;

  if (VAR_2->status_pending_p)
    if (FUNC_0 (VAR_2))
      {






 FUNC_1 (&VAR_2->head, 0, 0);
 return 0;
      }

  return VAR_2->status_pending_p;
}
