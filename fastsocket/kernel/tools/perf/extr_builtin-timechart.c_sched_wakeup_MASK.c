
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct wakeup_entry {int pid; } ;
struct wake_event {int waker; int wakee; struct wake_event* next; void* time; } ;
struct trace_entry {int flags; } ;
struct per_pid {TYPE_1__* current; int pid; } ;
struct TYPE_2__ {scalar_t__ state; void* state_since; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 struct per_pid* FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int,void*,void*) ;
 struct wake_event* VAR_5 ;
 struct wake_event* FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(int VAR_6, u64 VAR_7, int VAR_8, struct trace_entry *VAR_9)
{
 struct per_pid *VAR_10;
 struct wakeup_entry *VAR_11 = (void *)VAR_9;
 struct wake_event *VAR_12 = FUNC_2(sizeof(*VAR_12));

 if (!VAR_12)
  return;

 VAR_12->time = VAR_7;
 VAR_12->waker = VAR_8;

 if ((VAR_9->flags & VAR_0) || (VAR_9->flags & VAR_1))
  VAR_12->waker = -1;

 VAR_12->wakee = VAR_11->pid;
 VAR_12->next = VAR_5;
 VAR_5 = VAR_12;
 VAR_10 = FUNC_0(VAR_12->wakee);

 if (VAR_10 && VAR_10->current && VAR_10->current->state == VAR_3) {
  VAR_10->current->state_since = VAR_7;
  VAR_10->current->state = VAR_4;
 }
 if (VAR_10 && VAR_10->current && VAR_10->current->state == VAR_2) {
  FUNC_1(VAR_10->pid, VAR_10->current->state, VAR_6, VAR_10->current->state_since, VAR_7);
  VAR_10->current->state_since = VAR_7;
  VAR_10->current->state = VAR_4;
 }
}
