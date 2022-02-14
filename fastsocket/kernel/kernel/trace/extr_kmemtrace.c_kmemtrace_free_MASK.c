
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_array {int buffer; } ;
struct ring_buffer_event {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct kmemtrace_free_entry {int type_id; unsigned long call_site; void const* ptr; TYPE_1__ ent; } ;
struct ftrace_event_call {int dummy; } ;
typedef enum kmemtrace_type_id { ____Placeholder_kmemtrace_type_id } kmemtrace_type_id ;


 int VAR_0 ;
 struct ftrace_event_call VAR_1 ;
 int FUNC_0 (struct ftrace_event_call*,struct kmemtrace_free_entry*,int ,struct ring_buffer_event*) ;
 struct trace_array* VAR_2 ;
 struct kmemtrace_free_entry* FUNC_1 (struct ring_buffer_event*) ;
 struct ring_buffer_event* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,struct ring_buffer_event*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static inline void FUNC_6(enum kmemtrace_type_id VAR_3,
      unsigned long VAR_4,
      const void *VAR_5)
{
 struct ftrace_event_call *VAR_6 = &VAR_1;
 struct trace_array *VAR_7 = VAR_2;
 struct kmemtrace_free_entry *VAR_8;
 struct ring_buffer_event *VAR_9;

 VAR_9 = FUNC_2(VAR_7->buffer, sizeof(*VAR_8));
 if (!VAR_9)
  return;
 VAR_8 = FUNC_1(VAR_9);
 FUNC_5(&VAR_8->ent, 0, 0);

 VAR_8->ent.type = VAR_0;
 VAR_8->type_id = VAR_3;
 VAR_8->call_site = VAR_4;
 VAR_8->ptr = VAR_5;

 if (!FUNC_0(VAR_6, VAR_8, VAR_7->buffer, VAR_9))
  FUNC_3(VAR_7->buffer, VAR_9);

 FUNC_4();
}
