
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_iterator {int ts; int cpu; int ent; struct trace_seq seq; } ;
struct kmemtrace_user_event {int event_size; unsigned long ptr; int call_site; int timestamp; int cpu; int type_id; int event_id; } ;
struct kmemtrace_free_entry {scalar_t__ ptr; int call_site; int type_id; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kmemtrace_free_entry*,int ) ;
 struct kmemtrace_user_event* FUNC_1 (struct trace_seq*,int) ;

__attribute__((used)) static enum print_line_t
FUNC_2(struct trace_iterator *VAR_3, int VAR_4)
{
 struct trace_seq *VAR_5 = &VAR_3->seq;
 struct kmemtrace_free_entry *VAR_6;
 struct kmemtrace_user_event *VAR_7;

 FUNC_0(VAR_6, VAR_3->ent);

 VAR_7 = FUNC_1(VAR_5, sizeof(*VAR_7));
 if (!VAR_7)
  return VAR_2;

 VAR_7->event_id = VAR_0;
 VAR_7->type_id = VAR_6->type_id;
 VAR_7->event_size = sizeof(*VAR_7);
 VAR_7->cpu = VAR_3->cpu;
 VAR_7->timestamp = VAR_3->ts;
 VAR_7->call_site = VAR_6->call_site;
 VAR_7->ptr = (unsigned long)VAR_6->ptr;

 return VAR_1;
}
