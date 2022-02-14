
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
 case 152:
  *VAR_3 = "DW_FORM_addr"; break;
 case 151:
  *VAR_3 = "DW_FORM_block"; break;
 case 150:
  *VAR_3 = "DW_FORM_block1"; break;
 case 149:
  *VAR_3 = "DW_FORM_block2"; break;
 case 148:
  *VAR_3 = "DW_FORM_block4"; break;
 case 147:
  *VAR_3 = "DW_FORM_data1"; break;
 case 146:
  *VAR_3 = "DW_FORM_data2"; break;
 case 145:
  *VAR_3 = "DW_FORM_data4"; break;
 case 144:
  *VAR_3 = "DW_FORM_data8"; break;
 case 143:
  *VAR_3 = "DW_FORM_exprloc"; break;
 case 142:
  *VAR_3 = "DW_FORM_flag"; break;
 case 141:
  *VAR_3 = "DW_FORM_flag_present"; break;
 case 140:
  *VAR_3 = "DW_FORM_indirect"; break;
 case 139:
  *VAR_3 = "DW_FORM_ref1"; break;
 case 138:
  *VAR_3 = "DW_FORM_ref2"; break;
 case 137:
  *VAR_3 = "DW_FORM_ref4"; break;
 case 136:
  *VAR_3 = "DW_FORM_ref8"; break;
 case 135:
  *VAR_3 = "DW_FORM_ref_addr"; break;
 case 134:
  *VAR_3 = "DW_FORM_ref_sig8"; break;
 case 133:
  *VAR_3 = "DW_FORM_ref_udata"; break;
 case 132:
  *VAR_3 = "DW_FORM_sdata"; break;
 case 131:
  *VAR_3 = "DW_FORM_sec_offset"; break;
 case 130:
  *VAR_3 = "DW_FORM_string"; break;
 case 129:
  *VAR_3 = "DW_FORM_strp"; break;
 case 128:
  *VAR_3 = "DW_FORM_udata"; break;
 default:
  return (VAR_0);
 }

 return (VAR_1);
}
