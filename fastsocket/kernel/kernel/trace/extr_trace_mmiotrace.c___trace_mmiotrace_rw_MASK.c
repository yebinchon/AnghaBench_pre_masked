
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmiotrace_rw {int dummy; } ;
struct trace_mmiotrace_rw {struct mmiotrace_rw rw; } ;
struct trace_array_cpu {int dummy; } ;
struct trace_array {struct ring_buffer* buffer; } ;
struct ring_buffer_event {int dummy; } ;
struct ring_buffer {int dummy; } ;
struct ftrace_event_call {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct ftrace_event_call VAR_2 ;
 int FUNC_1 (struct ftrace_event_call*,struct trace_mmiotrace_rw*,struct ring_buffer*,struct ring_buffer_event*) ;
 int FUNC_2 () ;
 struct trace_mmiotrace_rw* FUNC_3 (struct ring_buffer_event*) ;
 struct ring_buffer_event* FUNC_4 (struct ring_buffer*,int ,int,int ,int) ;
 int FUNC_5 (struct ring_buffer*,struct ring_buffer_event*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct trace_array *VAR_3,
    struct trace_array_cpu *VAR_4,
    struct mmiotrace_rw *VAR_5)
{
 struct ftrace_event_call *VAR_6 = &VAR_2;
 struct ring_buffer *VAR_7 = VAR_3->buffer;
 struct ring_buffer_event *VAR_8;
 struct trace_mmiotrace_rw *VAR_9;
 int VAR_10 = FUNC_2();

 VAR_8 = FUNC_4(VAR_7, VAR_0,
       sizeof(*VAR_9), 0, VAR_10);
 if (!VAR_8) {
  FUNC_0(&VAR_1);
  return;
 }
 VAR_9 = FUNC_3(VAR_8);
 VAR_9->rw = *VAR_5;

 if (!FUNC_1(VAR_6, VAR_9, VAR_7, VAR_8))
  FUNC_5(VAR_7, VAR_8, 0, VAR_10);
}
