
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ send_confirm; int state; } ;
struct TYPE_4__ {scalar_t__ sae_group_index; TYPE_1__ sae; } ;
struct wpa_supplicant {TYPE_2__ sme; scalar_t__ connect_work; } ;
struct wpa_ssid {int dummy; } ;
struct wpa_connect_work {int sme; struct wpa_ssid* ssid; struct wpa_bss* bss; } ;
struct wpa_bss {int freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wpa_connect_work* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct wpa_supplicant*,int ,char*,int,int ,struct wpa_connect_work*) ;
 int FUNC_2 (struct wpa_supplicant*,char*,int ) ;
 scalar_t__ FUNC_3 (struct wpa_supplicant*,char*) ;
 int VAR_2 ;
 int FUNC_4 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_5 (struct wpa_supplicant*) ;
 int FUNC_6 (struct wpa_connect_work*) ;

void FUNC_7(struct wpa_supplicant *VAR_3,
        struct wpa_bss *VAR_4, struct wpa_ssid *VAR_5)
{
 struct wpa_connect_work *VAR_6;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
  return;
 if (VAR_3->connect_work) {
  FUNC_4(VAR_3, VAR_0, "SME: Reject sme_authenticate() call since connect_work exist");
  return;
 }

 if (FUNC_3(VAR_3, "sme-connect")) {





  FUNC_4(VAR_3, VAR_0,
   "SME: Remove previous pending sme-connect");
  FUNC_2(VAR_3, "sme-connect", 0);
 }

 FUNC_5(VAR_3);

 VAR_6 = FUNC_0(sizeof(*VAR_6));
 if (VAR_6 == ((void*)0))
  return;
 VAR_6->bss = VAR_4;
 VAR_6->ssid = VAR_5;
 VAR_6->sme = 1;







 if (FUNC_1(VAR_3, VAR_4->freq, "sme-connect", 1,
      VAR_2, VAR_6) < 0)
  FUNC_6(VAR_6);
}
