
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct trace_entry {int dummy; } ;
struct sched_switch {int prev_state; int next_pid; int prev_pid; } ;
struct per_pid {TYPE_1__* current; } ;
struct TYPE_2__ {scalar_t__ state; void* state_since; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct per_pid* FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int,void*,void*) ;

__attribute__((used)) static void FUNC_2(int VAR_4, u64 VAR_5, struct trace_entry *VAR_6)
{
 struct per_pid *VAR_7 = ((void*)0), *VAR_8;
 struct sched_switch *VAR_9 = (void *)VAR_6;


 VAR_8 = FUNC_0(VAR_9->prev_pid);

 VAR_7 = FUNC_0(VAR_9->next_pid);

 if (VAR_8->current && VAR_8->current->state != VAR_1)
  FUNC_1(VAR_9->prev_pid, VAR_2, VAR_4, VAR_8->current->state_since, VAR_5);
 if (VAR_7 && VAR_7->current) {
  if (VAR_7->current->state != VAR_1)
   FUNC_1(VAR_9->next_pid, VAR_7->current->state, VAR_4, VAR_7->current->state_since, VAR_5);

  VAR_7->current->state_since = VAR_5;
  VAR_7->current->state = VAR_2;
 }

 if (VAR_8->current) {
  VAR_8->current->state = VAR_1;
  VAR_8->current->state_since = VAR_5;
  if (VAR_9->prev_state & 2)
   VAR_8->current->state = VAR_0;
  if (VAR_9->prev_state == 0)
   VAR_8->current->state = VAR_3;
 }
}
