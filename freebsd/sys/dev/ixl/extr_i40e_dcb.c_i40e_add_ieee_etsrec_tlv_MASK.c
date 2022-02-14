
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct i40e_lldp_org_tlv {int* tlvinfo; int ouisubtype; int typelength; } ;
struct i40e_dcb_ets_config {int* prioritytable; int* tcbwtable; int* tsatable; } ;
struct i40e_dcbx_config {struct i40e_dcb_ets_config etsrec; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_2(struct i40e_lldp_org_tlv *VAR_8,
         struct i40e_dcbx_config *VAR_9)
{
 struct i40e_dcb_ets_config *VAR_10;
 u16 VAR_11 = 0, VAR_12, VAR_13;
 u8 VAR_14, VAR_15;
 u8 *VAR_16 = VAR_8->tlvinfo;
 u32 VAR_17;

 VAR_12 = (u16)((VAR_7 << VAR_5) |
   VAR_2);
 VAR_8->typelength = FUNC_1(VAR_12);

 VAR_17 = (u32)((VAR_0 << VAR_4) |
   VAR_3);
 VAR_8->ouisubtype = FUNC_0(VAR_17);

 VAR_10 = &VAR_9->etsrec;


 VAR_11++;
 for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
  VAR_14 = VAR_10->prioritytable[VAR_13 * 2] & 0xF;
  VAR_15 = VAR_10->prioritytable[VAR_13 * 2 + 1] & 0xF;
  VAR_16[VAR_11] = (VAR_14 << VAR_1) |
    VAR_15;
  VAR_11++;
 }







 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++)
  VAR_16[VAR_11++] = VAR_10->tcbwtable[VAR_13];







 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++)
  VAR_16[VAR_11++] = VAR_10->tsatable[VAR_13];
}
