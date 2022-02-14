
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userstack_entry {int dummy; } ;
struct trace_seq {int dummy; } ;
struct trace_iterator {int ent; struct trace_seq seq; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct userstack_entry*,struct trace_seq*,int) ;
 int FUNC_1 (struct userstack_entry*,int ) ;
 int FUNC_2 (struct trace_seq*,char*) ;

__attribute__((used)) static enum print_line_t FUNC_3(struct trace_iterator *VAR_2,
      int VAR_3)
{
 struct userstack_entry *VAR_4;
 struct trace_seq *VAR_5 = &VAR_2->seq;

 FUNC_1(VAR_4, VAR_2->ent);

 if (!FUNC_2(VAR_5, "<user stack trace>\n"))
  goto partial;

 if (!FUNC_0(VAR_4, VAR_5, VAR_3))
  goto partial;

 return VAR_0;

 partial:
 return VAR_1;
}
