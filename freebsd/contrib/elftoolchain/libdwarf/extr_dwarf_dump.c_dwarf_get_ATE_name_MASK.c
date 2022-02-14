
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

 switch(VAR_2) {
 case 144:
  *VAR_3 = "DW_ATE_address"; break;
 case 143:
  *VAR_3 = "DW_ATE_boolean"; break;
 case 142:
  *VAR_3 = "DW_ATE_complex_float"; break;
 case 139:
  *VAR_3 = "DW_ATE_float"; break;
 case 133:
  *VAR_3 = "DW_ATE_signed"; break;
 case 132:
  *VAR_3 = "DW_ATE_signed_char"; break;
 case 130:
  *VAR_3 = "DW_ATE_unsigned"; break;
 case 129:
  *VAR_3 = "DW_ATE_unsigned_char"; break;
 case 137:
  *VAR_3 = "DW_ATE_imaginary_float"; break;
 case 134:
  *VAR_3 = "DW_ATE_packed_decimal"; break;
 case 135:
  *VAR_3 = "DW_ATE_numeric_string"; break;
 case 140:
  *VAR_3 = "DW_ATE_edited"; break;
 case 131:
  *VAR_3 = "DW_ATE_signed_fixed"; break;
 case 128:
  *VAR_3 = "DW_ATE_unsigned_fixed"; break;
 case 141:
  *VAR_3 = "DW_ATE_decimal_float"; break;
 case 136:
  *VAR_3 = "DW_ATE_lo_user"; break;
 case 138:
  *VAR_3 = "DW_ATE_hi_user"; break;
 default:
  return (VAR_0);
 }

 return (VAR_1);
}
