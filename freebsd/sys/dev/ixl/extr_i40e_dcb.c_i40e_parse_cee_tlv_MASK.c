
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct i40e_lldp_org_tlv {int typelength; int ouisubtype; } ;
struct i40e_dcbx_config {int dummy; } ;
struct TYPE_2__ {int typelen; } ;
struct i40e_cee_feat_tlv {TYPE_1__ hdr; } ;
struct i40e_cee_ctrl_tlv {int dummy; } ;
typedef int ouisubtype ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i40e_cee_feat_tlv*,struct i40e_dcbx_config*) ;
 int FUNC_3 (struct i40e_cee_feat_tlv*,struct i40e_dcbx_config*) ;
 int FUNC_4 (struct i40e_cee_feat_tlv*,struct i40e_dcbx_config*) ;

__attribute__((used)) static void FUNC_5(struct i40e_lldp_org_tlv *VAR_8,
          struct i40e_dcbx_config *VAR_9)
{
 u16 VAR_10, VAR_11, VAR_12, VAR_13;
 struct i40e_cee_feat_tlv *VAR_14;
 u8 VAR_15, VAR_16 = 0;
 u32 VAR_17;

 VAR_17 = FUNC_0(VAR_8->ouisubtype);
 VAR_15 = (u8)((VAR_17 & VAR_4) >>
         VAR_5);

 if (VAR_15 != VAR_0)
  return;

 VAR_13 = FUNC_1(VAR_8->typelength);
 VAR_11 = (u16)((VAR_13 & VAR_2) >>
   VAR_3);
 VAR_10 = sizeof(VAR_8->typelength) + sizeof(VAR_17) +
       sizeof(struct i40e_cee_ctrl_tlv);

 if (VAR_11 <= VAR_10)
  return;

 VAR_14 = (struct i40e_cee_feat_tlv *)((char *)VAR_8 + VAR_10);
 while (VAR_16 < VAR_1) {
  VAR_13 = FUNC_1(VAR_14->hdr.typelen);
  VAR_12 = (u16)((VAR_13 &
    VAR_2) >>
    VAR_3);
  VAR_15 = (u8)((VAR_13 & VAR_6) >>
    VAR_7);
  switch (VAR_15) {
  case 128:
   FUNC_4(VAR_14, VAR_9);
   break;
  case 129:
   FUNC_3(VAR_14, VAR_9);
   break;
  case 130:
   FUNC_2(VAR_14, VAR_9);
   break;
  default:
   return;
  }
  VAR_16++;

  VAR_14 = (struct i40e_cee_feat_tlv *)((char *)VAR_14 +
      sizeof(VAR_14->hdr.typelen) +
      VAR_12);
 }
}
