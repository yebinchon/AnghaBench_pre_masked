
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_iterator {int ts; int cpu; struct trace_entry* ent; struct trace_seq seq; } ;
struct trace_event {int (* hex ) (struct trace_iterator*,int ) ;} ;
struct trace_entry {int type; int pid; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int FUNC_0 (struct trace_seq*,unsigned char) ;
 int FUNC_1 (struct trace_seq*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct trace_event* FUNC_2 (int ) ;
 int FUNC_3 (struct trace_iterator*,int ) ;
 int VAR_2 ;

__attribute__((used)) static enum print_line_t FUNC_4(struct trace_iterator *VAR_3)
{
 struct trace_seq *VAR_4 = &VAR_3->seq;
 unsigned char VAR_5 = '\n';
 struct trace_entry *VAR_6;
 struct trace_event *VAR_7;

 VAR_6 = VAR_3->ent;

 if (VAR_2 & VAR_0) {
  FUNC_1(VAR_4, VAR_6->pid);
  FUNC_1(VAR_4, VAR_3->cpu);
  FUNC_1(VAR_4, VAR_3->ts);
 }

 VAR_7 = FUNC_2(VAR_6->type);
 if (VAR_7) {
  enum print_line_t VAR_8 = VAR_7->hex(VAR_3, 0);
  if (VAR_8 != VAR_1)
   return VAR_8;
 }

 FUNC_0(VAR_4, VAR_5);

 return VAR_1;
}
