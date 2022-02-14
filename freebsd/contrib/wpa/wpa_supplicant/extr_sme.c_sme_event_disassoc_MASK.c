
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prev_bssid; scalar_t__ prev_bssid_set; } ;
struct wpa_supplicant {TYPE_1__ sme; } ;
struct disassoc_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_1 (struct wpa_supplicant*,int ,int ) ;

void FUNC_2(struct wpa_supplicant *VAR_2,
   struct disassoc_info *VAR_3)
{
 FUNC_0(VAR_2, VAR_0, "SME: Disassociation event received");
 if (VAR_2->sme.prev_bssid_set) {






  FUNC_0(VAR_2, VAR_0, "SME: Deauthenticate to clear "
   "driver state");
  FUNC_1(VAR_2, VAR_2->sme.prev_bssid,
           VAR_1);
 }
}
