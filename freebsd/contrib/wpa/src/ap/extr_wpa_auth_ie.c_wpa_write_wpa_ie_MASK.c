
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct wpa_ie_hdr {int len; int * version; int * oui; int elem_id; } ;
struct wpa_auth_config {int wpa_group; int wpa_pairwise; int wpa_key_mgmt; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int FUNC_5(struct wpa_auth_config *VAR_10, u8 *VAR_11, size_t VAR_12)
{
 struct wpa_ie_hdr *VAR_13;
 int VAR_14;
 u8 *VAR_15, *VAR_16;
 u32 VAR_17;

 VAR_13 = (struct wpa_ie_hdr *) VAR_11;
 VAR_13->elem_id = VAR_1;
 FUNC_0(VAR_13->oui, VAR_6);
 FUNC_1(VAR_13->version, VAR_9);
 VAR_15 = (u8 *) (VAR_13 + 1);

 VAR_17 = FUNC_3(VAR_7, VAR_10->wpa_group);
 if (VAR_17 == 0) {
  FUNC_4(VAR_0, "Invalid group cipher (%d).",
      VAR_10->wpa_group);
  return -1;
 }
 FUNC_0(VAR_15, VAR_17);
 VAR_15 += VAR_8;

 VAR_16 = VAR_15;
 VAR_15 += 2;

 VAR_14 = FUNC_2(VAR_15, VAR_10->wpa_pairwise);
 if (VAR_14 == 0) {
  FUNC_4(VAR_0, "Invalid pairwise cipher (%d).",
      VAR_10->wpa_pairwise);
  return -1;
 }
 VAR_15 += VAR_14 * VAR_8;
 FUNC_1(VAR_16, VAR_14);

 VAR_14 = 0;
 VAR_16 = VAR_15;
 VAR_15 += 2;

 if (VAR_10->wpa_key_mgmt & VAR_4) {
  FUNC_0(VAR_15, VAR_3);
  VAR_15 += VAR_8;
  VAR_14++;
 }
 if (VAR_10->wpa_key_mgmt & VAR_5) {
  FUNC_0(VAR_15, VAR_2);
  VAR_15 += VAR_8;
  VAR_14++;
 }

 if (VAR_14 == 0) {
  FUNC_4(VAR_0, "Invalid key management type (%d).",
      VAR_10->wpa_key_mgmt);
  return -1;
 }
 FUNC_1(VAR_16, VAR_14);



 VAR_13->len = (VAR_15 - VAR_11) - 2;

 return VAR_15 - VAR_11;
}
