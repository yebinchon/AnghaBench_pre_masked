
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct trace_iterator {size_t cpu; TYPE_1__* tr; struct ring_buffer_iter** buffer_iter; } ;
struct ring_buffer_iter {int dummy; } ;
struct ring_buffer_event {int dummy; } ;
struct TYPE_10__ {scalar_t__ func; } ;
struct TYPE_8__ {scalar_t__ type; scalar_t__ pid; } ;
struct ftrace_graph_ret_entry {TYPE_5__ ret; TYPE_3__ ent; } ;
struct TYPE_9__ {scalar_t__ func; } ;
struct TYPE_7__ {scalar_t__ pid; } ;
struct ftrace_graph_ent_entry {TYPE_4__ graph_ent; TYPE_2__ ent; } ;
struct TYPE_6__ {int buffer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,size_t,int *) ;
 struct ftrace_graph_ret_entry* FUNC_1 (struct ring_buffer_event*) ;
 struct ring_buffer_event* FUNC_2 (struct ring_buffer_iter*,int *) ;
 struct ring_buffer_event* FUNC_3 (int ,size_t,int *) ;
 int FUNC_4 (struct ring_buffer_iter*,int *) ;

__attribute__((used)) static struct ftrace_graph_ret_entry *
FUNC_5(struct trace_iterator *VAR_1,
  struct ftrace_graph_ent_entry *VAR_2)
{
 struct ring_buffer_iter *VAR_3;
 struct ring_buffer_event *VAR_4;
 struct ftrace_graph_ret_entry *VAR_5;

 VAR_3 = VAR_1->buffer_iter[VAR_1->cpu];


 if (VAR_3)
  VAR_4 = FUNC_2(VAR_3, ((void*)0));
 else {

  FUNC_0(VAR_1->tr->buffer, VAR_1->cpu, ((void*)0));
  VAR_4 = FUNC_3(VAR_1->tr->buffer, VAR_1->cpu,
     ((void*)0));
 }

 if (!VAR_4)
  return ((void*)0);

 VAR_5 = FUNC_1(VAR_4);

 if (VAR_5->ent.type != VAR_0)
  return ((void*)0);

 if (VAR_2->ent.pid != VAR_5->ent.pid ||
   VAR_2->graph_ent.func != VAR_5->ret.func)
  return ((void*)0);


 if (VAR_3)
  FUNC_4(VAR_3, ((void*)0));

 return VAR_5;
}
