
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

int
FUNC_1(unsigned VAR_2, const char **VAR_3)
{

 FUNC_0(VAR_3 != ((void*)0));

 switch (VAR_2) {
 case 136:
  *VAR_3 = "DW_LNS_copy"; break;
 case 138:
  *VAR_3 = "DW_LNS_advance_pc"; break;
 case 139:
  *VAR_3 = "DW_LNS_advance_line"; break;
 case 130:
  *VAR_3 = "DW_LNS_set_file"; break;
 case 132:
  *VAR_3 = "DW_LNS_set_column"; break;
 case 134:
  *VAR_3 = "DW_LNS_negate_stmt"; break;
 case 133:
  *VAR_3 = "DW_LNS_set_basic_block"; break;
 case 137:
  *VAR_3 = "DW_LNS_const_add_pc"; break;
 case 135:
  *VAR_3 = "DW_LNS_fixed_advance_pc"; break;
 case 128:
  *VAR_3 = "DW_LNS_set_prologue_end"; break;
 case 131:
  *VAR_3 = "DW_LNS_set_epilogue_begin"; break;
 case 129:
  *VAR_3 = "DW_LNS_set_isa"; break;
 default:
  return (VAR_0);
 }

 return (VAR_1);
}
