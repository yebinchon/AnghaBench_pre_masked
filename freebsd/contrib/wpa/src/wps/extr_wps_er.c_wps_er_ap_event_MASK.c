
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_event_er_ap {int mac_addr; int wps_state; int pri_dev_type; int upc; int serial_number; int model_url; int model_number; int model_name; int model_description; int manufacturer_url; int manufacturer; int friendly_name; int uuid; } ;
union wps_event_data {struct wps_event_er_ap ap; } ;
struct wps_er_ap {int mac_addr; int wps_state; int pri_dev_type; int upc; int serial_number; int model_url; int model_number; int model_name; int model_description; int manufacturer_url; int manufacturer; int friendly_name; int uuid; } ;
struct wps_context {int cb_ctx; int (* event_cb ) (int ,int,union wps_event_data*) ;} ;
typedef enum wps_event { ____Placeholder_wps_event } wps_event ;
typedef int data ;


 int FUNC_0 (union wps_event_data*,int ,int) ;
 int FUNC_1 (int ,int,union wps_event_data*) ;

__attribute__((used)) static void FUNC_2(struct wps_context *VAR_0, struct wps_er_ap *VAR_1,
       enum wps_event VAR_2)
{
 union wps_event_data VAR_3;
 struct wps_event_er_ap *VAR_4 = &VAR_3.ap;

 if (VAR_0->event_cb == ((void*)0))
  return;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_4->uuid = VAR_1->uuid;
 VAR_4->friendly_name = VAR_1->friendly_name;
 VAR_4->manufacturer = VAR_1->manufacturer;
 VAR_4->manufacturer_url = VAR_1->manufacturer_url;
 VAR_4->model_description = VAR_1->model_description;
 VAR_4->model_name = VAR_1->model_name;
 VAR_4->model_number = VAR_1->model_number;
 VAR_4->model_url = VAR_1->model_url;
 VAR_4->serial_number = VAR_1->serial_number;
 VAR_4->upc = VAR_1->upc;
 VAR_4->pri_dev_type = VAR_1->pri_dev_type;
 VAR_4->wps_state = VAR_1->wps_state;
 VAR_4->mac_addr = VAR_1->mac_addr;
 VAR_0->event_cb(VAR_0->cb_ctx, VAR_2, &VAR_3);
}
