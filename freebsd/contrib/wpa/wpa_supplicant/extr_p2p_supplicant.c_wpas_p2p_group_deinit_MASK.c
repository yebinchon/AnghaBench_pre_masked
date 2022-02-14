
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int * connect_without_scan; int * ap_configured_cb_data; int * ap_configured_cb_ctx; int * ap_configured_cb; int * p2p_group; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct wpa_supplicant *VAR_0)
{
 FUNC_0(VAR_0->p2p_group);
 VAR_0->p2p_group = ((void*)0);

 VAR_0->ap_configured_cb = ((void*)0);
 VAR_0->ap_configured_cb_ctx = ((void*)0);
 VAR_0->ap_configured_cb_data = ((void*)0);
 VAR_0->connect_without_scan = ((void*)0);
}
