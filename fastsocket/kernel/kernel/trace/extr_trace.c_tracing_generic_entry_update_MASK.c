
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_entry {int preempt_count; int flags; int lock_depth; int pid; } ;
struct task_struct {int lock_depth; int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct task_struct* VAR_7 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 () ;

void
FUNC_2(struct trace_entry *VAR_8, unsigned long VAR_9,
        int VAR_10)
{
 struct task_struct *VAR_11 = VAR_7;

 VAR_8->preempt_count = VAR_10 & 0xff;
 VAR_8->pid = (VAR_11) ? VAR_11->pid : 0;
 VAR_8->lock_depth = (VAR_11) ? VAR_11->lock_depth : 0;
 VAR_8->flags =



  VAR_3 |

  ((VAR_10 & VAR_0) ? VAR_2 : 0) |
  ((VAR_10 & VAR_1) ? VAR_6 : 0) |
  (FUNC_1() ? VAR_5 : 0);
}
