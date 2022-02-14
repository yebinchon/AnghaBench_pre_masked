
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct i40e_lldp_org_tlv {int* tlvinfo; int ouisubtype; int typelength; } ;
struct TYPE_2__ {int pfccap; int pfcenable; scalar_t__ mbc; scalar_t__ willing; } ;
struct i40e_dcbx_config {TYPE_1__ pfc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_3(struct i40e_lldp_org_tlv *VAR_8,
      struct i40e_dcbx_config *VAR_9)
{
 u8 *VAR_10 = VAR_8->tlvinfo;
 u32 VAR_11;
 u16 VAR_12;

 VAR_12 = (u16)((VAR_7 << VAR_6) |
   VAR_2);
 VAR_8->typelength = FUNC_2(VAR_12);

 VAR_11 = (u32)((VAR_0 << VAR_5) |
   VAR_4);
 VAR_8->ouisubtype = FUNC_1(VAR_11);







 if (VAR_9->pfc.willing)
  VAR_10[0] = FUNC_0(VAR_3);

 if (VAR_9->pfc.mbc)
  VAR_10[0] |= FUNC_0(VAR_1);

 VAR_10[0] |= VAR_9->pfc.pfccap & 0xF;
 VAR_10[1] = VAR_9->pfc.pfcenable;
}
