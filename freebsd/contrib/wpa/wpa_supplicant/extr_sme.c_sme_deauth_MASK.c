
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ prev_bssid_set; } ;
struct wpa_supplicant {int pending_bssid; int bssid; TYPE_1__ sme; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct wpa_supplicant*,int ,int ) ;
 int FUNC_3 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_4 (struct wpa_supplicant*,int ) ;
 int FUNC_5 (struct wpa_supplicant*,int ) ;
 int FUNC_6 (struct wpa_supplicant*) ;

__attribute__((used)) static void FUNC_7(struct wpa_supplicant *VAR_4)
{
 int VAR_5;

 VAR_5 = !FUNC_0(VAR_4->bssid);

 if (FUNC_2(VAR_4, VAR_4->pending_bssid,
       VAR_2) < 0) {
  FUNC_3(VAR_4, VAR_1, "SME: Deauth request to the driver "
   "failed");
 }
 VAR_4->sme.prev_bssid_set = 0;

 FUNC_5(VAR_4, VAR_4->pending_bssid);
 FUNC_4(VAR_4, VAR_3);
 FUNC_1(VAR_4->bssid, 0, VAR_0);
 FUNC_1(VAR_4->pending_bssid, 0, VAR_0);
 if (VAR_5)
  FUNC_6(VAR_4);
}
