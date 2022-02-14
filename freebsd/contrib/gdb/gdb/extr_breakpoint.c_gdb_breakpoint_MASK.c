
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct captured_breakpoint_args {char* address; char* condition; int hardwareflag; int tempflag; int thread; int ignore_count; } ;
typedef enum gdb_rc { ____Placeholder_gdb_rc } gdb_rc ;


 int VAR_0 ;
 int FUNC_0 (int ,struct captured_breakpoint_args*,int *,int ) ;
 int VAR_1 ;

enum gdb_rc
FUNC_1 (char *VAR_2, char *VAR_3,
  int VAR_4, int VAR_5,
  int VAR_6, int VAR_7)
{
  struct captured_breakpoint_args VAR_8;
  VAR_8.address = VAR_2;
  VAR_8.condition = VAR_3;
  VAR_8.hardwareflag = VAR_4;
  VAR_8.tempflag = VAR_5;
  VAR_8.thread = VAR_6;
  VAR_8.ignore_count = VAR_7;
  return FUNC_0 (VAR_1, &VAR_8,
         ((void*)0), VAR_0);
}
