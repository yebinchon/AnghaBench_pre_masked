
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wpa_supplicant {TYPE_2__* wps; int * wps_er; } ;
struct TYPE_4__ {int vendor_ext_m1; } ;
struct TYPE_5__ {struct TYPE_5__* network_key; TYPE_1__ dev; int dh_privkey; int dh_pubkey; int registrar; } ;


 int FUNC_0 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct wpa_supplicant*) ;
 int FUNC_4 (struct wpa_supplicant*) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct wpa_supplicant *VAR_4)
{
 FUNC_3(VAR_4);
 FUNC_0(VAR_3, VAR_4, ((void*)0));
 FUNC_0(VAR_1, VAR_4, ((void*)0));
 FUNC_0(VAR_2, VAR_4, ((void*)0));
 FUNC_4(VAR_4);





 if (VAR_4->wps == ((void*)0))
  return;







 FUNC_7(VAR_4->wps->registrar);
 FUNC_2(VAR_4->wps->dh_pubkey);
 FUNC_2(VAR_4->wps->dh_privkey);
 FUNC_2(VAR_4->wps->dev.vendor_ext_m1);
 FUNC_1(VAR_4->wps->network_key);
 FUNC_1(VAR_4->wps);
 VAR_4->wps = ((void*)0);
}
