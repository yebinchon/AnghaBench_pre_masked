
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* ifmsh; } ;
struct rx_mgmt {int frame_len; int frame; int ssi_signal; int datarate; } ;
struct hostapd_frame_info {int ssi_signal; int datarate; } ;
typedef int fi ;
struct TYPE_2__ {int * bss; } ;


 int FUNC_0 (int ,int ,int ,struct hostapd_frame_info*) ;
 int FUNC_1 (struct hostapd_frame_info*,int ,int) ;

void FUNC_2(struct wpa_supplicant *VAR_0, struct rx_mgmt *VAR_1)
{
 struct hostapd_frame_info VAR_2;

 FUNC_1(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.datarate = VAR_1->datarate;
 VAR_2.ssi_signal = VAR_1->ssi_signal;
 FUNC_0(VAR_0->ifmsh->bss[0], VAR_1->frame,
   VAR_1->frame_len, &VAR_2);
}
