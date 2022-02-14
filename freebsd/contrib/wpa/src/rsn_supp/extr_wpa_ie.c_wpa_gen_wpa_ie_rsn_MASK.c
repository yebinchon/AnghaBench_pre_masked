
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct wpa_sm {int mfp; TYPE_1__* cur_pmksa; scalar_t__ ocv; } ;
struct rsn_ie_hdr {int len; int * version; int elem_id; } ;
struct TYPE_2__ {int pmkid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
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
 int VAR_22 ;
 int FUNC_0 (int *,scalar_t__) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (int) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
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
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int) ;
 scalar_t__ FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int) ;

__attribute__((used)) static int FUNC_8(u8 *VAR_49, size_t VAR_50,
         int VAR_51, int VAR_52,
         int VAR_53, int VAR_54,
         struct wpa_sm *VAR_55)
{
 u8 *VAR_56;
 struct rsn_ie_hdr *VAR_57;
 u16 VAR_58;
 u32 VAR_59;

 if (VAR_50 < sizeof(*VAR_57) + VAR_22 +
     2 + VAR_22 + 2 + VAR_22 + 2 +
     (VAR_55->cur_pmksa ? 2 + VAR_2 : 0)) {
  FUNC_7(VAR_0, "RSN: Too short IE buffer (%lu bytes)",
      (unsigned long) VAR_50);
  return -1;
 }

 VAR_57 = (struct rsn_ie_hdr *) VAR_49;
 VAR_57->elem_id = VAR_24;
 FUNC_2(VAR_57->version, VAR_23);
 VAR_56 = (u8 *) (VAR_57 + 1);

 VAR_59 = FUNC_4(VAR_48, VAR_52);
 if (VAR_59 == 0) {
  FUNC_7(VAR_1, "Invalid group cipher (%d).",
      VAR_52);
  return -1;
 }
 FUNC_0(VAR_56, VAR_59);
 VAR_56 += VAR_22;

 *VAR_56++ = 1;
 *VAR_56++ = 0;
 VAR_59 = FUNC_4(VAR_48, VAR_51);
 if (VAR_59 == 0 ||
     (!FUNC_6(VAR_51) &&
      VAR_51 != VAR_28)) {
  FUNC_7(VAR_1, "Invalid pairwise cipher (%d).",
      VAR_51);
  return -1;
 }
 FUNC_0(VAR_56, VAR_59);
 VAR_56 += VAR_22;

 *VAR_56++ = 1;
 *VAR_56++ = 0;
 if (VAR_53 == VAR_39) {
  FUNC_0(VAR_56, VAR_21);
 } else if (VAR_53 == VAR_45) {
  FUNC_0(VAR_56, VAR_18);
 } else if (VAR_53 == VAR_29) {
  FUNC_0(VAR_56, VAR_6);
 } else if (VAR_53 == VAR_42) {
  FUNC_0(VAR_56, VAR_5);
 } else if (VAR_53 == VAR_41) {
  FUNC_0(VAR_56, VAR_4);
 } else {
  FUNC_7(VAR_1, "Invalid key management type (%d).",
      VAR_53);
  return -1;
 }
 VAR_56 += VAR_22;


 VAR_58 = 0;






 if (VAR_55->ocv)
  VAR_58 |= VAR_27;
 FUNC_2(VAR_56, VAR_58);
 VAR_56 += 2;

 if (VAR_55->cur_pmksa) {

  *VAR_56++ = 1;
  *VAR_56++ = 0;

  FUNC_3(VAR_56, VAR_55->cur_pmksa->pmkid, VAR_2);
  VAR_56 += VAR_2;
 }
 VAR_57->len = (VAR_56 - VAR_49) - 2;

 FUNC_1((size_t) (VAR_56 - VAR_49) <= VAR_50);

 return VAR_56 - VAR_49;
}
