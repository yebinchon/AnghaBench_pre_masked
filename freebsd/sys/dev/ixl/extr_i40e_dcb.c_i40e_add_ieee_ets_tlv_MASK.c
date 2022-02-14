
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct i40e_lldp_org_tlv {int* tlvinfo; int ouisubtype; int typelength; } ;
struct i40e_dcb_ets_config {int maxtcs; int* prioritytable; int* tcbwtable; int* tsatable; scalar_t__ willing; } ;
struct i40e_dcbx_config {struct i40e_dcb_ets_config etscfg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_3(struct i40e_lldp_org_tlv *VAR_10,
      struct i40e_dcbx_config *VAR_11)
{
 u8 VAR_12, VAR_13, VAR_14 = 0;
 struct i40e_dcb_ets_config *VAR_15;
 u16 VAR_16 = 0, VAR_17, VAR_18;
 u8 *VAR_19 = VAR_10->tlvinfo;
 u32 VAR_20;

 VAR_17 = (u16)((VAR_9 << VAR_7) |
   VAR_3);
 VAR_10->typelength = FUNC_2(VAR_17);

 VAR_20 = (u32)((VAR_0 << VAR_6) |
   VAR_5);
 VAR_10->ouisubtype = FUNC_1(VAR_20);
 VAR_15 = &VAR_11->etscfg;
 if (VAR_15->willing)
  VAR_14 = FUNC_0(VAR_4);
 VAR_14 |= VAR_15->maxtcs & VAR_1;
 VAR_19[VAR_16] = VAR_14;


 VAR_16++;
 for (VAR_18 = 0; VAR_18 < 4; VAR_18++) {
  VAR_12 = VAR_15->prioritytable[VAR_18 * 2] & 0xF;
  VAR_13 = VAR_15->prioritytable[VAR_18 * 2 + 1] & 0xF;
  VAR_19[VAR_16] = (VAR_12 << VAR_2) |
    VAR_13;
  VAR_16++;
 }







 for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18++)
  VAR_19[VAR_16++] = VAR_15->tcbwtable[VAR_18];







 for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18++)
  VAR_19[VAR_16++] = VAR_15->tsatable[VAR_18];
}
