
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct disassemble_info {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,struct disassemble_info*) ;
 int VAR_0 ;
 struct disassemble_info FUNC_1 (int ,struct ui_file*) ;

int
FUNC_2 (CORE_ADDR VAR_1, struct ui_file *VAR_2)
{
  struct disassemble_info VAR_3 = FUNC_1 (VAR_0, VAR_2);
  return FUNC_0 (VAR_1, &VAR_3);
}
