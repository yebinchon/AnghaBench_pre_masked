
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct i40e_lldp_org_tlv {int typelength; } ;
struct i40e_dcbx_config {int dummy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct i40e_lldp_org_tlv*,struct i40e_dcbx_config*,int ) ;

enum i40e_status_code FUNC_2(u8 *VAR_6, u16 *VAR_7,
           struct i40e_dcbx_config *VAR_8)
{
 u16 VAR_9, VAR_10 = 0, VAR_11 = VAR_5;
 enum i40e_status_code VAR_12 = VAR_3;
 struct i40e_lldp_org_tlv *VAR_13;
 u16 VAR_14;

 VAR_13 = (struct i40e_lldp_org_tlv *)VAR_6;
 while (1) {
  FUNC_1(VAR_13, VAR_8, VAR_11++);
  VAR_14 = FUNC_0(VAR_13->typelength);
  VAR_9 = (u16)((VAR_14 & VAR_1) >>
    VAR_2);
  if (VAR_9)
   VAR_10 += VAR_9 + 2;

  if ((VAR_11 >= VAR_4) ||
      (VAR_10 > VAR_0))
   break;

  if (VAR_9)
   VAR_13 = (struct i40e_lldp_org_tlv *)((char *)VAR_13 +
         sizeof(VAR_13->typelength) + VAR_9);
 }
 *VAR_7 = VAR_10;
 return VAR_12;
}
