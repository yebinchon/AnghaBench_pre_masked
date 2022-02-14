
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
 case 142:
  *VAR_3 = "DW_EH_PE_absptr"; break;
 case 128:
  *VAR_3 = "DW_EH_PE_uleb128"; break;
 case 131:
  *VAR_3 = "DW_EH_PE_udata2"; break;
 case 130:
  *VAR_3 = "DW_EH_PE_udata4"; break;
 case 129:
  *VAR_3 = "DW_EH_PE_udata8"; break;
 case 133:
  *VAR_3 = "DW_EH_PE_sleb128"; break;
 case 136:
  *VAR_3 = "DW_EH_PE_sdata2"; break;
 case 135:
  *VAR_3 = "DW_EH_PE_sdata4"; break;
 case 134:
  *VAR_3 = "DW_EH_PE_sdata8"; break;
 case 137:
  *VAR_3 = "DW_EH_PE_pcrel"; break;
 case 132:
  *VAR_3 = "DW_EH_PE_textrel"; break;
 case 140:
  *VAR_3 = "DW_EH_PE_datarel"; break;
 case 139:
  *VAR_3 = "DW_EH_PE_funcrel"; break;
 case 141:
  *VAR_3 = "DW_EH_PE_aligned"; break;
 case 138:
  *VAR_3 = "DW_EH_PE_omit"; break;
 default:
  return (VAR_0);
 }

 return (VAR_1);
}
