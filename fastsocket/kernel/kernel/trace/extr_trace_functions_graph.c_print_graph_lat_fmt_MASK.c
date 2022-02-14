
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_entry {int dummy; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int FUNC_0 (struct trace_seq*,struct trace_entry*) ;
 int FUNC_1 (struct trace_seq*,char) ;

__attribute__((used)) static enum print_line_t
FUNC_2(struct trace_seq *VAR_0, struct trace_entry *VAR_1)
{
 if (!FUNC_1(VAR_0, ' '))
  return 0;

 return FUNC_0(VAR_0, VAR_1);
}
