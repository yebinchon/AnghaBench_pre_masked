
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_er_ap {struct wps_er_ap* ap_settings; struct wps_er_ap* event_sub_url; struct wps_er_ap* control_url; struct wps_er_ap* scpd_url; struct wps_er_ap* upc; struct wps_er_ap* udn; struct wps_er_ap* serial_number; struct wps_er_ap* model_url; struct wps_er_ap* model_number; struct wps_er_ap* model_name; struct wps_er_ap* model_description; struct wps_er_ap* manufacturer_url; struct wps_er_ap* manufacturer; struct wps_er_ap* friendly_name; struct wps_er_ap* location; int * http; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct wps_er_ap*) ;

__attribute__((used)) static void FUNC_2(struct wps_er_ap *VAR_0)
{
 FUNC_0(VAR_0->http);
 VAR_0->http = ((void*)0);

 FUNC_1(VAR_0->location);
 FUNC_1(VAR_0->friendly_name);
 FUNC_1(VAR_0->manufacturer);
 FUNC_1(VAR_0->manufacturer_url);
 FUNC_1(VAR_0->model_description);
 FUNC_1(VAR_0->model_name);
 FUNC_1(VAR_0->model_number);
 FUNC_1(VAR_0->model_url);
 FUNC_1(VAR_0->serial_number);
 FUNC_1(VAR_0->udn);
 FUNC_1(VAR_0->upc);

 FUNC_1(VAR_0->scpd_url);
 FUNC_1(VAR_0->control_url);
 FUNC_1(VAR_0->event_sub_url);

 FUNC_1(VAR_0->ap_settings);

 FUNC_1(VAR_0);
}
