
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct trace_iterator {int dummy; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct trace_iterator*,int ) ;
 int VAR_3 ;

enum print_line_t FUNC_1(struct trace_iterator *VAR_4,
          u32 VAR_5)
{
 if (VAR_3 & VAR_2)
  VAR_5 |= VAR_1;
 else
  VAR_5 |= VAR_0;

 return FUNC_0(VAR_4, VAR_5);
}
