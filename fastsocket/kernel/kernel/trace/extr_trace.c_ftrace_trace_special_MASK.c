
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {struct ring_buffer* buffer; } ;
struct special_entry {unsigned long arg1; unsigned long arg2; unsigned long arg3; } ;
struct ring_buffer_event {int dummy; } ;
struct ring_buffer {int dummy; } ;
struct ftrace_event_call {int dummy; } ;


 int VAR_0 ;
 struct ftrace_event_call VAR_1 ;
 int FUNC_0 (struct ftrace_event_call*,struct special_entry*,struct ring_buffer*,struct ring_buffer_event*) ;
 struct special_entry* FUNC_1 (struct ring_buffer_event*) ;
 struct ring_buffer_event* FUNC_2 (struct ring_buffer*,int ,int,int ,int) ;
 int FUNC_3 (struct ring_buffer*,struct ring_buffer_event*,int ,int) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2,
       unsigned long VAR_3, unsigned long VAR_4, unsigned long VAR_5,
       int VAR_6)
{
 struct ftrace_event_call *VAR_7 = &VAR_1;
 struct ring_buffer_event *VAR_8;
 struct trace_array *VAR_9 = VAR_2;
 struct ring_buffer *VAR_10 = VAR_9->buffer;
 struct special_entry *VAR_11;

 VAR_8 = FUNC_2(VAR_10, VAR_0,
       sizeof(*VAR_11), 0, VAR_6);
 if (!VAR_8)
  return;
 VAR_11 = FUNC_1(VAR_8);
 VAR_11->arg1 = VAR_3;
 VAR_11->arg2 = VAR_4;
 VAR_11->arg3 = VAR_5;

 if (!FUNC_0(VAR_7, VAR_11, VAR_10, VAR_8))
  FUNC_3(VAR_10, VAR_8, 0, VAR_6);
}
