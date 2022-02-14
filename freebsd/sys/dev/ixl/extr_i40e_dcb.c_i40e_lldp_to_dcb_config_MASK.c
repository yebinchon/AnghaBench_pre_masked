
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
typedef int typelength ;
struct i40e_lldp_org_tlv {int typelength; } ;
struct i40e_dcbx_config {int dummy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

 int FUNC_1 (struct i40e_lldp_org_tlv*,struct i40e_dcbx_config*) ;

enum i40e_status_code FUNC_2(u8 *VAR_9,
        struct i40e_dcbx_config *VAR_10)
{
 enum i40e_status_code VAR_11 = VAR_7;
 struct i40e_lldp_org_tlv *VAR_12;
 u16 VAR_13;
 u16 VAR_14;
 u16 VAR_15;
 u16 VAR_16 = 0;

 if (!VAR_9 || !VAR_10)
  return VAR_0;


 VAR_9 += VAR_2;
 VAR_12 = (struct i40e_lldp_org_tlv *)VAR_9;
 while (1) {
  VAR_15 = FUNC_0(VAR_12->typelength);
  VAR_13 = (u16)((VAR_15 & VAR_5) >>
        VAR_6);
  VAR_14 = (u16)((VAR_15 & VAR_3) >>
          VAR_4);
  VAR_16 += sizeof(VAR_15) + VAR_14;


  if ((VAR_13 == VAR_8) || (VAR_16 > VAR_1))
   break;

  switch (VAR_13) {
  case 128:
   FUNC_1(VAR_12, VAR_10);
   break;
  default:
   break;
  }


  VAR_12 = (struct i40e_lldp_org_tlv *)((char *)VAR_12 +
          sizeof(VAR_12->typelength) +
          VAR_14);
 }

 return VAR_11;
}
