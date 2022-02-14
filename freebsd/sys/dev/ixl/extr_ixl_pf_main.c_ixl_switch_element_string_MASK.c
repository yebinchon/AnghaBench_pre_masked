
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct i40e_aqc_switch_config_element_resp {int element_type; int element_info; } ;
 int FUNC_0 (struct sbuf*,char*) ;
 int FUNC_1 (struct sbuf*) ;
 char* FUNC_2 (struct sbuf*) ;
 int FUNC_3 (struct sbuf*) ;
 int FUNC_4 (struct sbuf*,char*,int ) ;

char *
FUNC_5(struct sbuf *VAR_0,
    struct i40e_aqc_switch_config_element_resp *VAR_1)
{
 FUNC_1(VAR_0);

 switch (VAR_1->element_type) {
 case 134:
  FUNC_4(VAR_0, "MAC %3d", VAR_1->element_info);
  break;
 case 132:
  FUNC_4(VAR_0, "PF  %3d", VAR_1->element_info);
  break;
 case 129:
  FUNC_4(VAR_0, "VF  %3d", VAR_1->element_info);
  break;
 case 135:
  FUNC_0(VAR_0, "EMP");
  break;
 case 136:
  FUNC_0(VAR_0, "BMC");
  break;
 case 131:
  FUNC_0(VAR_0, "PV");
  break;
 case 130:
  FUNC_0(VAR_0, "VEB");
  break;
 case 133:
  FUNC_0(VAR_0, "PA");
  break;
 case 128:
  FUNC_4(VAR_0, "VSI %3d", VAR_1->element_info);
  break;
 default:
  FUNC_0(VAR_0, "?");
  break;
 }

 FUNC_3(VAR_0);
 return FUNC_2(VAR_0);
}
