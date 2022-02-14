
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct boot_trace_call {int func; } ;
struct trace_boot_call {struct boot_trace_call boot_call; } ;
struct trace_array {struct ring_buffer* buffer; } ;
struct ring_buffer_event {int dummy; } ;
struct ring_buffer {int dummy; } ;
struct ftrace_event_call {int dummy; } ;
typedef scalar_t__ initcall_t ;


 int VAR_0 ;
 struct trace_array* VAR_1 ;
 struct ftrace_event_call VAR_2 ;
 int FUNC_0 (struct ftrace_event_call*,struct trace_boot_call*,struct ring_buffer*,struct ring_buffer_event*) ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct trace_boot_call* FUNC_3 (struct ring_buffer_event*) ;
 int FUNC_4 (int ,unsigned long) ;
 struct ring_buffer_event* FUNC_5 (struct ring_buffer*,int ,int,int ,int ) ;
 int FUNC_6 (struct ring_buffer*,struct ring_buffer_event*,int ,int ) ;

void FUNC_7(struct boot_trace_call *VAR_4, initcall_t VAR_5)
{
 struct ftrace_event_call *VAR_6 = &VAR_2;
 struct ring_buffer_event *VAR_7;
 struct ring_buffer *VAR_8;
 struct trace_boot_call *VAR_9;
 struct trace_array *VAR_10 = VAR_1;

 if (!VAR_10 || !VAR_3)
  return;




 FUNC_4(VAR_4->func, (unsigned long)VAR_5);
 FUNC_1();

 VAR_8 = VAR_10->buffer;
 VAR_7 = FUNC_5(VAR_8, VAR_0,
       sizeof(*VAR_9), 0, 0);
 if (!VAR_7)
  goto out;
 VAR_9 = FUNC_3(VAR_7);
 VAR_9->boot_call = *VAR_4;
 if (!FUNC_0(VAR_6, VAR_9, VAR_8, VAR_7))
  FUNC_6(VAR_8, VAR_7, 0, 0);
 out:
 FUNC_2();
}
