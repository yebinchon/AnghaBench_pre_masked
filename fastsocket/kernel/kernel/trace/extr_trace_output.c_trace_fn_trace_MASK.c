
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_iterator {int ent; struct trace_seq seq; } ;
struct ftrace_entry {scalar_t__ parent_ip; scalar_t__ ip; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct trace_seq*,scalar_t__,int) ;
 int FUNC_1 (struct ftrace_entry*,int ) ;
 int FUNC_2 (struct trace_seq*,char*) ;

__attribute__((used)) static enum print_line_t FUNC_3(struct trace_iterator *VAR_3, int VAR_4)
{
 struct ftrace_entry *VAR_5;
 struct trace_seq *VAR_6 = &VAR_3->seq;

 FUNC_1(VAR_5, VAR_3->ent);

 if (!FUNC_0(VAR_6, VAR_5->ip, VAR_4))
  goto partial;

 if ((VAR_4 & VAR_0) && VAR_5->parent_ip) {
  if (!FUNC_2(VAR_6, " <-"))
   goto partial;
  if (!FUNC_0(VAR_6,
          VAR_5->parent_ip,
          VAR_4))
   goto partial;
 }
 if (!FUNC_2(VAR_6, "\n"))
  goto partial;

 return VAR_1;

 partial:
 return VAR_2;
}
