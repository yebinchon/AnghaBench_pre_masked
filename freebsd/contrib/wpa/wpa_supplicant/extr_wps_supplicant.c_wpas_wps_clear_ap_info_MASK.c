
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ wps_ap_iter; scalar_t__ num_wps_ap; int * wps_ap; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct wpa_supplicant *VAR_0)
{
 FUNC_0(VAR_0->wps_ap);
 VAR_0->wps_ap = ((void*)0);
 VAR_0->num_wps_ap = 0;
 VAR_0->wps_ap_iter = 0;
}
