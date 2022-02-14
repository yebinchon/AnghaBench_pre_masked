
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
struct trace_array {TYPE_1__** data; struct ring_buffer* buffer; } ;
struct ring_buffer_event {int dummy; } ;
struct ring_buffer {int dummy; } ;
struct TYPE_4__ {int type; } ;
struct hw_branch_entry {void* to; void* from; TYPE_2__ ent; } ;
struct ftrace_event_call {int dummy; } ;
struct TYPE_3__ {int disabled; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct ftrace_event_call VAR_1 ;
 int FUNC_2 (struct ftrace_event_call*,struct hw_branch_entry*,struct ring_buffer*,struct ring_buffer_event*) ;
 struct trace_array* VAR_2 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 () ;
 struct hw_branch_entry* FUNC_6 (struct ring_buffer_event*) ;
 struct ring_buffer_event* FUNC_7 (struct ring_buffer*,int ,int,int ,int ) ;
 int FUNC_8 (struct ring_buffer*,struct ring_buffer_event*,int ,int ) ;
 int VAR_3 ;
 int FUNC_9 (TYPE_2__*,int ,void*) ;
 scalar_t__ FUNC_10 (int) ;

void FUNC_11(u64 VAR_4, u64 VAR_5)
{
 struct ftrace_event_call *VAR_6 = &VAR_1;
 struct trace_array *VAR_7 = VAR_2;
 struct ring_buffer_event *VAR_8;
 struct ring_buffer *VAR_9;
 struct hw_branch_entry *VAR_10;
 unsigned long VAR_11;
 int VAR_12;

 if (FUNC_10(!VAR_7))
  return;

 if (FUNC_10(!VAR_3))
  return;

 FUNC_4(VAR_11);
 VAR_12 = FUNC_5();
 if (FUNC_1(&VAR_7->data[VAR_12]->disabled) != 1)
  goto out;

 VAR_9 = VAR_7->buffer;
 VAR_8 = FUNC_7(VAR_9, VAR_0,
       sizeof(*VAR_10), 0, 0);
 if (!VAR_8)
  goto out;
 VAR_10 = FUNC_6(VAR_8);
 FUNC_9(&VAR_10->ent, 0, VAR_4);
 VAR_10->ent.type = VAR_0;
 VAR_10->from = VAR_4;
 VAR_10->to = VAR_5;
 if (!FUNC_2(VAR_6, VAR_10, VAR_9, VAR_8))
  FUNC_8(VAR_9, VAR_8, 0, 0);

 out:
 FUNC_0(&VAR_7->data[VAR_12]->disabled);
 FUNC_3(VAR_11);
}
