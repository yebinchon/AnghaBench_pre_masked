
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct trace_seq*,char*,int ,int) ;

__attribute__((used)) static enum print_line_t
FUNC_1(struct trace_seq *VAR_3, int VAR_4)
{
 int VAR_5;






 VAR_5 = FUNC_0(VAR_3, " %*d) ", VAR_2, VAR_4);
 if (!VAR_5)
  return VAR_1;

 return VAR_0;
}
