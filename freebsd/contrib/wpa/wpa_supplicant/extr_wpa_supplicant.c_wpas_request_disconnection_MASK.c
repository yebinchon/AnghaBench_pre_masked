
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ prev_bssid_set; } ;
struct wpa_supplicant {int disconnected; scalar_t__ reassociate; TYPE_1__ sme; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_1 (struct wpa_supplicant*,char*,int ) ;
 int FUNC_2 (struct wpa_supplicant*) ;
 int FUNC_3 (struct wpa_supplicant*) ;
 int FUNC_4 (struct wpa_supplicant*,int ) ;
 int VAR_1 ;

void FUNC_5(struct wpa_supplicant *VAR_2)
{



 VAR_2->reassociate = 0;
 VAR_2->disconnected = 1;
 FUNC_3(VAR_2);
 FUNC_2(VAR_2);
 FUNC_4(VAR_2, VAR_0);
 FUNC_0(VAR_1, VAR_2, ((void*)0));
 FUNC_1(VAR_2, "connect", 0);
 FUNC_1(VAR_2, "sme-connect", 0);
}
