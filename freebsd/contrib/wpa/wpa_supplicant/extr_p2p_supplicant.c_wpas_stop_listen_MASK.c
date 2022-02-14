
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int p2p_cli_probe; scalar_t__ roc_waiting_drv_freq; scalar_t__ off_channel_freq; } ;


 int FUNC_0 (struct wpa_supplicant*) ;
 int FUNC_1 (struct wpa_supplicant*,int ) ;
 int FUNC_2 (struct wpa_supplicant*,int *,int *,int *) ;
 int FUNC_3 (struct wpa_supplicant*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct wpa_supplicant *VAR_1 = VAR_0;
 if (VAR_1->off_channel_freq || VAR_1->roc_waiting_drv_freq) {
  FUNC_0(VAR_1);
  VAR_1->off_channel_freq = 0;
  VAR_1->roc_waiting_drv_freq = 0;
 }
 FUNC_2(VAR_1, ((void*)0), ((void*)0), ((void*)0));





 if (!VAR_1->p2p_cli_probe)
  FUNC_1(VAR_1, 0);

 FUNC_3(VAR_1);
}
