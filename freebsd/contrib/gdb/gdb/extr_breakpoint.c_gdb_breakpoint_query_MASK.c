
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_out {int dummy; } ;
struct captured_breakpoint_query_args {int bnum; } ;
typedef enum gdb_rc { ____Placeholder_gdb_rc } gdb_rc ;


 int VAR_0 ;
 int FUNC_0 (struct ui_out*,int ,struct captured_breakpoint_query_args*,int *,int ) ;
 int VAR_1 ;

enum gdb_rc
FUNC_1 (struct ui_out *VAR_2, int VAR_3)
{
  struct captured_breakpoint_query_args VAR_4;
  VAR_4.bnum = VAR_3;


  return FUNC_0 (VAR_2, VAR_1, &VAR_4,
      ((void*)0), VAR_0);
}
