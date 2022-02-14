
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {unsigned int off_channel_freq; scalar_t__ roc_waiting_drv_freq; } ;


 int FUNC_0 (struct wpa_supplicant*,int *) ;

void FUNC_1(struct wpa_supplicant *VAR_0,
         unsigned int VAR_1, unsigned int VAR_2)
{
 VAR_0->roc_waiting_drv_freq = 0;
 VAR_0->off_channel_freq = VAR_1;
 FUNC_0(VAR_0, ((void*)0));
}
