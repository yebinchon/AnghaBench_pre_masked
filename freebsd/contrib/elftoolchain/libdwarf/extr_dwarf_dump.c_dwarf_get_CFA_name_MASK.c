
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
 case 155:
  *VAR_3 = "DW_CFA_advance_loc"; break;
 case 141:
  *VAR_3 = "DW_CFA_offset"; break;
 case 136:
  *VAR_3 = "DW_CFA_restore"; break;
 case 142:
  *VAR_3 = "DW_CFA_nop"; break;
 case 132:
  *VAR_3 = "DW_CFA_set_loc"; break;
 case 154:
  *VAR_3 = "DW_CFA_advance_loc1"; break;
 case 153:
  *VAR_3 = "DW_CFA_advance_loc2"; break;
 case 152:
  *VAR_3 = "DW_CFA_advance_loc4"; break;
 case 140:
  *VAR_3 = "DW_CFA_offset_extended"; break;
 case 135:
  *VAR_3 = "DW_CFA_restore_extended"; break;
 case 131:
  *VAR_3 = "DW_CFA_undefined"; break;
 case 133:
  *VAR_3 = "DW_CFA_same_value"; break;
 case 138:
  *VAR_3 = "DW_CFA_register"; break;
 case 137:
  *VAR_3 = "DW_CFA_remember_state"; break;
 case 134:
  *VAR_3 = "DW_CFA_restore_state"; break;
 case 151:
  *VAR_3 = "DW_CFA_def_cfa"; break;
 case 147:
  *VAR_3 = "DW_CFA_def_cfa_register"; break;
 case 149:
  *VAR_3 = "DW_CFA_def_cfa_offset"; break;
 case 150:
  *VAR_3 = "DW_CFA_def_cfa_expression"; break;
 case 145:
  *VAR_3 = "DW_CFA_expression"; break;
 case 139:
  *VAR_3 = "DW_CFA_offset_extended_sf"; break;
 case 146:
  *VAR_3 = "DW_CFA_def_cfa_sf"; break;
 case 148:
  *VAR_3 = "DW_CFA_def_cfa_offset_sf"; break;
 case 129:
  *VAR_3 = "DW_CFA_val_offset"; break;
 case 128:
  *VAR_3 = "DW_CFA_val_offset_sf"; break;
 case 130:
  *VAR_3 = "DW_CFA_val_expression"; break;
 case 143:
  *VAR_3 = "DW_CFA_lo_user"; break;
 case 144:
  *VAR_3 = "DW_CFA_high_user"; break;
 default:
  return (VAR_0);
 }

 return (VAR_1);
}
