
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_iterator {int ts; int cpu; struct trace_entry* ent; struct trace_seq seq; } ;
struct trace_event {int (* binary ) (struct trace_iterator*,int ) ;} ;
struct trace_entry {int type; int pid; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int FUNC_0 (struct trace_seq*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct trace_event* FUNC_1 (int ) ;
 int FUNC_2 (struct trace_iterator*,int ) ;
 int VAR_2 ;

__attribute__((used)) static enum print_line_t FUNC_3(struct trace_iterator *VAR_3)
{
 struct trace_seq *VAR_4 = &VAR_3->seq;
 struct trace_entry *VAR_5;
 struct trace_event *VAR_6;

 VAR_5 = VAR_3->ent;

 if (VAR_2 & VAR_0) {
  FUNC_0(VAR_4, VAR_5->pid);
  FUNC_0(VAR_4, VAR_3->cpu);
  FUNC_0(VAR_4, VAR_3->ts);
 }

 VAR_6 = FUNC_1(VAR_5->type);
 return VAR_6 ? VAR_6->binary(VAR_3, 0) : VAR_1;
}
