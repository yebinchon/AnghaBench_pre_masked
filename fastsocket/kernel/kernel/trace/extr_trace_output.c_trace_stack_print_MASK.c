
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_iterator {int ent; struct trace_seq seq; } ;
struct stack_entry {scalar_t__* caller; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct trace_seq*,scalar_t__,int) ;
 int FUNC_1 (struct stack_entry*,int ) ;
 int FUNC_2 (struct trace_seq*,char*) ;

__attribute__((used)) static enum print_line_t FUNC_3(struct trace_iterator *VAR_4,
        int VAR_5)
{
 struct stack_entry *VAR_6;
 struct trace_seq *VAR_7 = &VAR_4->seq;
 int VAR_8;

 FUNC_1(VAR_6, VAR_4->ent);

 if (!FUNC_2(VAR_7, "<stack trace>\n"))
  goto partial;
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if (!VAR_6->caller[VAR_8] || (VAR_6->caller[VAR_8] == VAR_3))
   break;
  if (!FUNC_2(VAR_7, " => "))
   goto partial;

  if (!FUNC_0(VAR_7, VAR_6->caller[VAR_8], VAR_5))
   goto partial;
  if (!FUNC_2(VAR_7, "\n"))
   goto partial;
 }

 return VAR_1;

 partial:
 return VAR_2;
}
