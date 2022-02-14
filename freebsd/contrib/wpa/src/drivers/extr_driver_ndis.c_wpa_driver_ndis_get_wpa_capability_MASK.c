
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int key_mgmt; int enc; int auth; } ;
struct wpa_driver_ndis_data {int has_capability; TYPE_1__ capa; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_0 (struct wpa_driver_ndis_data*) ;
 scalar_t__ FUNC_1 (struct wpa_driver_ndis_data*) ;
 scalar_t__ FUNC_2 (struct wpa_driver_ndis_data*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct wpa_driver_ndis_data*,int ) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_5(struct wpa_driver_ndis_data *VAR_20)
{
 FUNC_4(VAR_0, "NDIS: verifying driver WPA capability");

 if (FUNC_2(VAR_20, VAR_3) == 0 &&
     FUNC_0(VAR_20) == VAR_3) {
  FUNC_4(VAR_0, "NDIS: WPA key management supported");
  VAR_20->capa.key_mgmt |= VAR_18;
 }

 if (FUNC_2(VAR_20, VAR_4) == 0 &&
     FUNC_0(VAR_20) == VAR_4) {
  FUNC_4(VAR_0, "NDIS: WPA-PSK key management "
      "supported");
  VAR_20->capa.key_mgmt |= VAR_19;
 }

 if (FUNC_3(VAR_20, VAR_9) == 0 &&
     FUNC_1(VAR_20) == VAR_10) {
  FUNC_4(VAR_0, "NDIS: CCMP encryption supported");
  VAR_20->capa.enc |= VAR_14;
 }

 if (FUNC_3(VAR_20, VAR_7) == 0 &&
     FUNC_1(VAR_20) == VAR_8) {
  FUNC_4(VAR_0, "NDIS: TKIP encryption supported");
  VAR_20->capa.enc |= VAR_15;
 }

 if (FUNC_3(VAR_20, VAR_5) == 0 &&
     FUNC_1(VAR_20) == VAR_6) {
  FUNC_4(VAR_0, "NDIS: WEP encryption supported");
  VAR_20->capa.enc |= VAR_17 |
   VAR_16;
 }

 if (FUNC_2(VAR_20, VAR_2) == 0 &&
     FUNC_0(VAR_20) == VAR_2) {
  VAR_20->capa.auth |= VAR_13;
 }

 if (FUNC_2(VAR_20, VAR_1) == 0 &&
     FUNC_0(VAR_20) == VAR_1) {
  VAR_20->capa.auth |= VAR_12;
 }

 FUNC_3(VAR_20, VAR_11);




 if (VAR_20->capa.key_mgmt & VAR_18 &&
     VAR_20->capa.enc & (VAR_15 |
        VAR_14)) {
  FUNC_4(VAR_0, "NDIS: driver supports WPA");
  VAR_20->has_capability = 1;
 } else {
  FUNC_4(VAR_0, "NDIS: no WPA support found");
 }

 FUNC_4(VAR_0, "NDIS: driver capabilities: key_mgmt 0x%x "
     "enc 0x%x auth 0x%x",
     VAR_20->capa.key_mgmt, VAR_20->capa.enc, VAR_20->capa.auth);
}
