
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_iterator {int cpu; struct trace_seq seq; struct trace_entry* ent; } ;
struct trace_entry {scalar_t__ type; } ;
struct hw_branch_entry {int from; int to; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct trace_seq*,int ,unsigned long) ;
 int FUNC_1 (struct hw_branch_entry*,struct trace_entry*) ;
 scalar_t__ FUNC_2 (struct trace_seq*,char*,...) ;

__attribute__((used)) static enum print_line_t FUNC_3(struct trace_iterator *VAR_5)
{
 unsigned long VAR_6 = VAR_1;
 struct trace_entry *VAR_7 = VAR_5->ent;
 struct trace_seq *VAR_8 = &VAR_5->seq;
 struct hw_branch_entry *VAR_9;

 FUNC_1(VAR_9, VAR_7);

 if (VAR_7->type == VAR_0) {
  if (FUNC_2(VAR_8, "%4d  ", VAR_5->cpu) &&
      FUNC_0(VAR_8, VAR_9->to, VAR_6) &&
      FUNC_2(VAR_8, "\t  <-  ") &&
      FUNC_0(VAR_8, VAR_9->from, VAR_6) &&
      FUNC_2(VAR_8, "\n"))
   return VAR_2;
  return VAR_3;
 }
 return VAR_4;
}
