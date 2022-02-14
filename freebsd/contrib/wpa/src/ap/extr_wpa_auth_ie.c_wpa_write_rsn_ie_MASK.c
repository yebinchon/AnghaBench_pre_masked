
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct wpa_auth_config {int wpa_group; int rsn_pairwise; int wpa_key_mgmt; scalar_t__ ieee80211w; int group_mgmt_cipher; scalar_t__ ocv; scalar_t__ wmm_enabled; scalar_t__ rsn_preauth; } ;
struct rsn_ie_hdr {int len; int * version; int elem_id; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 scalar_t__ FUNC_1 (int,int,int,int) ;
 int VAR_27 ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;




 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int const*,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ VAR_53 ;
 scalar_t__ FUNC_7 (int ,int) ;
 int FUNC_8 (int ,char*,int) ;

int FUNC_9(struct wpa_auth_config *VAR_54, u8 *VAR_55, size_t VAR_56,
       const u8 *VAR_57)
{
 struct rsn_ie_hdr *VAR_58;
 int VAR_59, VAR_60;
 u8 *VAR_61, *VAR_62;
 u16 VAR_63;
 u32 VAR_64;

 VAR_58 = (struct rsn_ie_hdr *) VAR_55;
 VAR_58->elem_id = VAR_29;
 FUNC_3(VAR_58->version, VAR_28);
 VAR_61 = (u8 *) (VAR_58 + 1);

 VAR_64 = FUNC_7(VAR_52, VAR_54->wpa_group);
 if (VAR_64 == 0) {
  FUNC_8(VAR_1, "Invalid group cipher (%d).",
      VAR_54->wpa_group);
  return -1;
 }
 FUNC_2(VAR_61, VAR_64);
 VAR_61 += VAR_27;

 VAR_59 = 0;
 VAR_62 = VAR_61;
 VAR_61 += 2;
 VAR_60 = FUNC_6(VAR_61, VAR_54->rsn_pairwise);
 VAR_59 += VAR_60;
 VAR_61 += VAR_60 * VAR_27;
 if (VAR_59 == 0) {
  FUNC_8(VAR_1, "Invalid pairwise cipher (%d).",
      VAR_54->rsn_pairwise);
  return -1;
 }
 FUNC_3(VAR_62, VAR_59);

 VAR_59 = 0;
 VAR_62 = VAR_61;
 VAR_61 += 2;
 if (VAR_54->wpa_key_mgmt & VAR_43) {
  FUNC_2(VAR_61, VAR_21);
  VAR_61 += VAR_27;
  VAR_59++;
 }
 if (VAR_54->wpa_key_mgmt & VAR_49) {
  FUNC_2(VAR_61, VAR_18);
  VAR_61 += VAR_27;
  VAR_59++;
 }
 if (VAR_54->wpa_key_mgmt & VAR_45) {
  FUNC_2(VAR_61, VAR_5);
  VAR_61 += VAR_27;
  VAR_59++;
 }
 if (VAR_54->wpa_key_mgmt & VAR_46) {
  FUNC_2(VAR_61, VAR_6);
  VAR_61 += VAR_27;
  VAR_59++;
 }
 if (VAR_59 == 0) {
  FUNC_8(VAR_1, "Invalid key management type (%d).",
      VAR_54->wpa_key_mgmt);
  return -1;
 }
 FUNC_3(VAR_62, VAR_59);


 VAR_63 = 0;
 if (VAR_54->rsn_preauth)
  VAR_63 |= VAR_33;
 if (VAR_54->wmm_enabled) {

  VAR_63 |= (VAR_26 << 2);
 }
 FUNC_3(VAR_61, VAR_63);
 VAR_61 += 2;

 if (VAR_57) {
  if (2 + VAR_3 > VAR_55 + VAR_56 - VAR_61)
   return -1;

  FUNC_3(VAR_61, 1);
  VAR_61 += 2;
  FUNC_4(VAR_61, VAR_57, VAR_3);
  VAR_61 += VAR_3;
 }
 VAR_58->len = (VAR_61 - VAR_55) - 2;

 return VAR_61 - VAR_55;
}
