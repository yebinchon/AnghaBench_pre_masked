
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct wpa_ie_hdr {int len; int version; int * oui; int elem_id; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static int FUNC_6(u8 *VAR_15, size_t VAR_16,
         int VAR_17, int VAR_18,
         int VAR_19)
{
 u8 *VAR_20;
 struct wpa_ie_hdr *VAR_21;
 u32 VAR_22;

 if (VAR_16 < sizeof(*VAR_21) + VAR_13 +
     2 + VAR_13 + 2 + VAR_13)
  return -1;

 VAR_21 = (struct wpa_ie_hdr *) VAR_15;
 VAR_21->elem_id = VAR_1;
 FUNC_0(VAR_21->oui, VAR_11);
 FUNC_2(VAR_21->version, VAR_14);
 VAR_20 = (u8 *) (VAR_21 + 1);

 VAR_22 = FUNC_3(VAR_12, VAR_18);
 if (VAR_22 == 0) {
  FUNC_5(VAR_0, "Invalid group cipher (%d).",
      VAR_18);
  return -1;
 }
 FUNC_0(VAR_20, VAR_22);
 VAR_20 += VAR_13;

 *VAR_20++ = 1;
 *VAR_20++ = 0;
 VAR_22 = FUNC_3(VAR_12, VAR_17);
 if (VAR_22 == 0 ||
     (!FUNC_4(VAR_17) &&
      VAR_17 != VAR_6)) {
  FUNC_5(VAR_0, "Invalid pairwise cipher (%d).",
      VAR_17);
  return -1;
 }
 FUNC_0(VAR_20, VAR_22);
 VAR_20 += VAR_13;

 *VAR_20++ = 1;
 *VAR_20++ = 0;
 if (VAR_19 == VAR_8) {
  FUNC_0(VAR_20, VAR_5);
 } else if (VAR_19 == VAR_9) {
  FUNC_0(VAR_20, VAR_4);
 } else if (VAR_19 == VAR_10) {
  FUNC_0(VAR_20, VAR_3);
 } else if (VAR_19 == VAR_7) {
  FUNC_0(VAR_20, VAR_2);
 } else {
  FUNC_5(VAR_0, "Invalid key management type (%d).",
      VAR_19);
  return -1;
 }
 VAR_20 += VAR_13;



 VAR_21->len = (VAR_20 - VAR_15) - 2;

 FUNC_1((size_t) (VAR_20 - VAR_15) <= VAR_16);

 return VAR_20 - VAR_15;
}
