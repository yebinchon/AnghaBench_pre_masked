
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {scalar_t__ wps_fragment_size; TYPE_1__* go_params; scalar_t__ ap_iface; } ;
struct TYPE_4__ {scalar_t__ fragment_size; } ;
struct wpa_ssid {int temporary; int p2p_group; int pbss; int multi_ap_backhaul_sta; TYPE_2__ eap; scalar_t__ ssid_len; scalar_t__ ssid; } ;
typedef int phase1 ;
struct TYPE_3__ {int freq; int ssid; scalar_t__ ssid_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,struct wpa_supplicant*,int *) ;
 int FUNC_1 (scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (char*,int,char*,char*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct wpa_ssid*,char*,char*) ;
 int FUNC_5 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct wpa_supplicant*,int ,int *) ;
 int FUNC_8 (struct wpa_supplicant*) ;
 struct wpa_ssid* FUNC_9 (struct wpa_supplicant*,int ,int *,int const*) ;
 int FUNC_10 (struct wpa_supplicant*,struct wpa_ssid*,int const*,int ) ;
 int VAR_3 ;

int FUNC_11(struct wpa_supplicant *VAR_4, const u8 *VAR_5,
         int VAR_6, int VAR_7)
{
 struct wpa_ssid *VAR_8;
 char VAR_9[32];
 FUNC_8(VAR_4);
 VAR_8 = FUNC_9(VAR_4, 0, ((void*)0), VAR_5);
 if (VAR_8 == ((void*)0))
  return -1;
 VAR_8->temporary = 1;
 VAR_8->p2p_group = VAR_6;





 if (!VAR_6)
  VAR_8->pbss = 2;
 FUNC_2(VAR_9, sizeof(VAR_9), "pbc=1%s",
      VAR_7 ? " multi_ap=1" : "");
 if (FUNC_4(VAR_8, "phase1", VAR_9) < 0)
  return -1;
 if (VAR_4->wps_fragment_size)
  VAR_8->eap.fragment_size = VAR_4->wps_fragment_size;
 if (VAR_7)
  VAR_8->multi_ap_backhaul_sta = 1;
 FUNC_7(VAR_4, VAR_1, ((void*)0));
 FUNC_0(VAR_2, 0, VAR_3,
          VAR_4, ((void*)0));
 FUNC_10(VAR_4, VAR_8, VAR_5, 0);
 return 0;
}
