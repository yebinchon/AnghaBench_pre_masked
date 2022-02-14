
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ const u8 ;
struct wpa_driver_ndis_data {int dummy; } ;
typedef enum wpa_alg { ____Placeholder_wpa_alg } wpa_alg ;
typedef size_t ULONGLONG ;
struct TYPE_4__ {size_t Length; int KeyIndex; size_t KeyLength; size_t KeyRSC; scalar_t__ const* KeyMaterial; scalar_t__ const* BSSID; } ;
typedef TYPE_1__ NDIS_802_11_KEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (struct wpa_driver_ndis_data*,int ,char*,size_t) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__ const*,scalar_t__ const*,size_t) ;
 int FUNC_4 (scalar_t__ const*,int,int) ;
 TYPE_1__* FUNC_5 (size_t) ;
 int FUNC_6 (struct wpa_driver_ndis_data*,int,int,int,scalar_t__ const*,size_t) ;
 scalar_t__ FUNC_7 (struct wpa_driver_ndis_data*,scalar_t__ const*) ;
 int FUNC_8 (struct wpa_driver_ndis_data*,int,scalar_t__ const*,scalar_t__ const*,int) ;
 int FUNC_9 (int ,char*,scalar_t__ const*,size_t) ;

__attribute__((used)) static int FUNC_10(const char *VAR_6, void *VAR_7,
       enum wpa_alg VAR_8, const u8 *VAR_9,
       int VAR_10, int VAR_11,
       const u8 *VAR_12, size_t VAR_13,
       const u8 *VAR_14, size_t VAR_15)
{
 struct wpa_driver_ndis_data *VAR_16 = VAR_7;
 size_t VAR_17, VAR_18;
 NDIS_802_11_KEY *VAR_19;
 int VAR_20, VAR_21;
 u8 VAR_22[VAR_0];

 if (VAR_9 == ((void*)0) || FUNC_0(VAR_9)) {

  VAR_21 = 0;
  if (FUNC_7(VAR_16, VAR_22) < 0)
   FUNC_4(VAR_22, 0xff, VAR_0);
 } else {

  VAR_21 = 1;
  FUNC_3(VAR_22, VAR_9, VAR_0);
 }

 if (VAR_8 == VAR_3 || VAR_15 == 0) {
  return FUNC_8(VAR_16, VAR_10, VAR_9, VAR_22,
        VAR_21);
 }

 if (VAR_8 == VAR_5) {
  return FUNC_6(VAR_16, VAR_21, VAR_10, VAR_11,
            VAR_14, VAR_15);
 }

 VAR_17 = 12 + 6 + 6 + 8 + VAR_15;

 VAR_19 = FUNC_5(VAR_17);
 if (VAR_19 == ((void*)0))
  return -1;

 VAR_19->Length = VAR_17;
 VAR_19->KeyIndex = VAR_10;
 if (VAR_11)
  VAR_19->KeyIndex |= 1 << 31;
 if (VAR_21)
  VAR_19->KeyIndex |= 1 << 30;
 if (VAR_12 && VAR_13)
  VAR_19->KeyIndex |= 1 << 29;
 VAR_19->KeyLength = VAR_15;
 FUNC_3(VAR_19->BSSID, VAR_22, VAR_0);
 if (VAR_12 && VAR_13) {
  for (VAR_18 = 0; VAR_18 < VAR_13; VAR_18++)
   VAR_19->KeyRSC |= (ULONGLONG) VAR_12[VAR_18] << (VAR_18 * 8);
 }
 if (VAR_8 == VAR_4 && VAR_15 == 32) {
  FUNC_3(VAR_19->KeyMaterial, VAR_14, 16);
  FUNC_3(VAR_19->KeyMaterial + 16, VAR_14 + 24, 8);
  FUNC_3(VAR_19->KeyMaterial + 24, VAR_14 + 16, 8);
 } else {
  FUNC_3(VAR_19->KeyMaterial, VAR_14, VAR_15);
 }

 FUNC_9(VAR_1, "NDIS: OID_802_11_ADD_KEY",
   (u8 *) VAR_19, VAR_17);
 VAR_20 = FUNC_1(VAR_16, VAR_2, (char *) VAR_19, VAR_17);
 FUNC_2(VAR_19);

 return VAR_20;
}
