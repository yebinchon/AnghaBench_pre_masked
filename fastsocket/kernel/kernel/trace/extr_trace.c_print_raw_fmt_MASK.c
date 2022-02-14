
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_iterator {int ts; int cpu; struct trace_entry* ent; struct trace_seq seq; } ;
struct trace_event {int (* raw ) (struct trace_iterator*,int ) ;} ;
struct trace_entry {int type; int pid; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct trace_event* FUNC_0 (int ) ;
 int FUNC_1 (struct trace_iterator*,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct trace_seq*,char*,int ,...) ;

__attribute__((used)) static enum print_line_t FUNC_3(struct trace_iterator *VAR_4)
{
 struct trace_seq *VAR_5 = &VAR_4->seq;
 struct trace_entry *VAR_6;
 struct trace_event *VAR_7;

 VAR_6 = VAR_4->ent;

 if (VAR_3 & VAR_0) {
  if (!FUNC_2(VAR_5, "%d %d %llu ",
          VAR_6->pid, VAR_4->cpu, VAR_4->ts))
   goto partial;
 }

 VAR_7 = FUNC_0(VAR_6->type);
 if (VAR_7)
  return VAR_7->raw(VAR_4, 0);

 if (!FUNC_2(VAR_5, "%d ?\n", VAR_6->type))
  goto partial;

 return VAR_1;
partial:
 return VAR_2;
}
