
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long long,struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*,char*) ;

__attribute__((used)) static enum print_line_t
FUNC_2(unsigned long long VAR_2, struct trace_seq *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4 != VAR_0)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_3, "|  ");
 if (!VAR_4)
  return VAR_1;

 return VAR_0;
}
