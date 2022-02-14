
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_array {int buffer; } ;
struct ring_buffer_event {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct kmemtrace_alloc_entry {int type_id; unsigned long call_site; size_t bytes_req; size_t bytes_alloc; int node; int gfp_flags; void const* ptr; TYPE_1__ ent; } ;
struct ftrace_event_call {int dummy; } ;
typedef int gfp_t ;
typedef enum kmemtrace_type_id { ____Placeholder_kmemtrace_type_id } kmemtrace_type_id ;


 int VAR_0 ;
 struct ftrace_event_call VAR_1 ;
 int FUNC_0 (struct ftrace_event_call*,struct kmemtrace_alloc_entry*,int ,struct ring_buffer_event*) ;
 struct trace_array* VAR_2 ;
 struct kmemtrace_alloc_entry* FUNC_1 (struct ring_buffer_event*) ;
 struct ring_buffer_event* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,struct ring_buffer_event*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static inline void FUNC_6(enum kmemtrace_type_id VAR_3,
       unsigned long VAR_4,
       const void *VAR_5,
       size_t VAR_6,
       size_t VAR_7,
       gfp_t VAR_8,
       int VAR_9)
{
 struct ftrace_event_call *VAR_10 = &VAR_1;
 struct trace_array *VAR_11 = VAR_2;
 struct kmemtrace_alloc_entry *VAR_12;
 struct ring_buffer_event *VAR_13;

 VAR_13 = FUNC_2(VAR_11->buffer, sizeof(*VAR_12));
 if (!VAR_13)
  return;

 VAR_12 = FUNC_1(VAR_13);
 FUNC_5(&VAR_12->ent, 0, 0);

 VAR_12->ent.type = VAR_0;
 VAR_12->type_id = VAR_3;
 VAR_12->call_site = VAR_4;
 VAR_12->ptr = VAR_5;
 VAR_12->bytes_req = VAR_6;
 VAR_12->bytes_alloc = VAR_7;
 VAR_12->gfp_flags = VAR_8;
 VAR_12->node = VAR_9;

 if (!FUNC_0(VAR_10, VAR_12, VAR_11->buffer, VAR_13))
  FUNC_3(VAR_11->buffer, VAR_13);

 FUNC_4();
}
