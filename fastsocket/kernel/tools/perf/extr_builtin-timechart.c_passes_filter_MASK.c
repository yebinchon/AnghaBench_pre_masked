
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct process_filter {scalar_t__ pid; struct process_filter* next; int name; } ;
struct per_pidcomm {int comm; } ;
struct per_pid {scalar_t__ pid; } ;


 struct process_filter* VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct per_pid *VAR_1, struct per_pidcomm *VAR_2)
{
 struct process_filter *VAR_3;
 if (!VAR_0)
  return 1;

 VAR_3 = VAR_0;
 while (VAR_3) {
  if (VAR_3->pid && VAR_1->pid == VAR_3->pid)
   return 1;
  if (FUNC_0(VAR_3->name, VAR_2->comm) == 0)
   return 1;
  VAR_3 = VAR_3->next;
 }
 return 0;
}
