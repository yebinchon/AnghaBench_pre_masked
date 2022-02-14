
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct i40e_lldp_org_tlv {int ouisubtype; } ;
struct i40e_dcbx_config {int dummy; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct i40e_lldp_org_tlv*,struct i40e_dcbx_config*) ;
 int FUNC_2 (struct i40e_lldp_org_tlv*,struct i40e_dcbx_config*) ;
 int FUNC_3 (struct i40e_lldp_org_tlv*,struct i40e_dcbx_config*) ;
 int FUNC_4 (struct i40e_lldp_org_tlv*,struct i40e_dcbx_config*) ;

__attribute__((used)) static void FUNC_5(struct i40e_lldp_org_tlv *VAR_2,
    struct i40e_dcbx_config *VAR_3)
{
 u32 VAR_4;
 u8 VAR_5;

 VAR_4 = FUNC_0(VAR_2->ouisubtype);
 VAR_5 = (u8)((VAR_4 & VAR_0) >>
         VAR_1);
 switch (VAR_5) {
 case 130:
  FUNC_2(VAR_2, VAR_3);
  break;
 case 129:
  FUNC_3(VAR_2, VAR_3);
  break;
 case 128:
  FUNC_4(VAR_2, VAR_3);
  break;
 case 131:
  FUNC_1(VAR_2, VAR_3);
  break;
 default:
  break;
 }
}
