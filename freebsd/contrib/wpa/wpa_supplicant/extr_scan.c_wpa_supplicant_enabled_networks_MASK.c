
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; scalar_t__ p2p_mgmt; } ;
struct wpa_ssid {struct wpa_ssid* next; } ;
struct TYPE_2__ {scalar_t__ auto_interworking; scalar_t__ interworking; scalar_t__ cred; struct wpa_ssid* ssid; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*,int ,char*,int) ;
 int FUNC_1 (struct wpa_supplicant*,struct wpa_ssid*) ;

int FUNC_2(struct wpa_supplicant *VAR_1)
{
 struct wpa_ssid *VAR_2 = VAR_1->conf->ssid;
 int VAR_3 = 0, VAR_4 = 0;

 if (VAR_1->p2p_mgmt)
  return 0;

 while (VAR_2) {
  if (!FUNC_1(VAR_1, VAR_2))
   VAR_3++;
  else
   VAR_4++;
  VAR_2 = VAR_2->next;
 }
 if (VAR_1->conf->cred && VAR_1->conf->interworking &&
     VAR_1->conf->auto_interworking)
  VAR_3++;
 if (VAR_3 == 0 && VAR_4 > 0) {
  FUNC_0(VAR_1, VAR_0, "No enabled networks (%d disabled "
   "networks)", VAR_4);
 }
 return VAR_3;
}
