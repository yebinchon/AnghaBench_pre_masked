
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_event_er_enrollee {int serial_number; int model_number; int model_name; int manufacturer; int dev_name; int pri_dev_type; int dev_passwd_id; int config_methods; int m1_received; int mac_addr; int uuid; } ;
union wps_event_data {struct wps_event_er_enrollee enrollee; } ;
struct wps_er_sta {int serial_number; int model_number; int model_name; int manufacturer; int dev_name; int pri_dev_type; int dev_passwd_id; int config_methods; int m1_received; int addr; int uuid; } ;
struct wps_context {int cb_ctx; int (* event_cb ) (int ,int,union wps_event_data*) ;} ;
typedef enum wps_event { ____Placeholder_wps_event } wps_event ;
typedef int data ;


 int FUNC_0 (union wps_event_data*,int ,int) ;
 int FUNC_1 (int ,int,union wps_event_data*) ;

__attribute__((used)) static void FUNC_2(struct wps_context *VAR_0, struct wps_er_sta *VAR_1,
        enum wps_event VAR_2)
{
 union wps_event_data VAR_3;
 struct wps_event_er_enrollee *VAR_4 = &VAR_3.enrollee;

 if (VAR_0->event_cb == ((void*)0))
  return;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_4->uuid = VAR_1->uuid;
 VAR_4->mac_addr = VAR_1->addr;
 VAR_4->m1_received = VAR_1->m1_received;
 VAR_4->config_methods = VAR_1->config_methods;
 VAR_4->dev_passwd_id = VAR_1->dev_passwd_id;
 VAR_4->pri_dev_type = VAR_1->pri_dev_type;
 VAR_4->dev_name = VAR_1->dev_name;
 VAR_4->manufacturer = VAR_1->manufacturer;
 VAR_4->model_name = VAR_1->model_name;
 VAR_4->model_number = VAR_1->model_number;
 VAR_4->serial_number = VAR_1->serial_number;
 VAR_0->event_cb(VAR_0->cb_ctx, VAR_2, &VAR_3);
}
