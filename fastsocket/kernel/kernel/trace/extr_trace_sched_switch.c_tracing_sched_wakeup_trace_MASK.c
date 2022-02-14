
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {struct ring_buffer* buffer; } ;
struct task_struct {int state; int prio; int pid; } ;
struct ring_buffer_event {int dummy; } ;
struct ring_buffer {int dummy; } ;
struct ftrace_event_call {int dummy; } ;
struct ctx_switch_entry {int next_cpu; int next_state; int next_prio; int next_pid; int prev_state; int prev_prio; int prev_pid; } ;


 int VAR_0 ;
 struct ftrace_event_call VAR_1 ;
 int FUNC_0 (struct ftrace_event_call*,struct ctx_switch_entry*,struct ring_buffer*,struct ring_buffer_event*) ;
 int FUNC_1 (struct ring_buffer*,unsigned long,int,int) ;
 int FUNC_2 (struct ring_buffer*,unsigned long,int) ;
 struct ctx_switch_entry* FUNC_3 (struct ring_buffer_event*) ;
 int FUNC_4 (struct ring_buffer*,struct ring_buffer_event*) ;
 int FUNC_5 (struct task_struct*) ;
 struct ring_buffer_event* FUNC_6 (struct ring_buffer*,int ,int,unsigned long,int) ;

void
FUNC_7(struct trace_array *VAR_2,
      struct task_struct *VAR_3,
      struct task_struct *VAR_4,
      unsigned long VAR_5, int VAR_6)
{
 struct ftrace_event_call *VAR_7 = &VAR_1;
 struct ring_buffer_event *VAR_8;
 struct ctx_switch_entry *VAR_9;
 struct ring_buffer *VAR_10 = VAR_2->buffer;

 VAR_8 = FUNC_6(VAR_10, VAR_0,
       sizeof(*VAR_9), VAR_5, VAR_6);
 if (!VAR_8)
  return;
 VAR_9 = FUNC_3(VAR_8);
 VAR_9->prev_pid = VAR_4->pid;
 VAR_9->prev_prio = VAR_4->prio;
 VAR_9->prev_state = VAR_4->state;
 VAR_9->next_pid = VAR_3->pid;
 VAR_9->next_prio = VAR_3->prio;
 VAR_9->next_state = VAR_3->state;
 VAR_9->next_cpu = FUNC_5(VAR_3);

 if (!FUNC_0(VAR_7, VAR_9, VAR_10, VAR_8))
  FUNC_4(VAR_10, VAR_8);
 FUNC_1(VAR_2->buffer, VAR_5, 6, VAR_6);
 FUNC_2(VAR_2->buffer, VAR_5, VAR_6);
}
