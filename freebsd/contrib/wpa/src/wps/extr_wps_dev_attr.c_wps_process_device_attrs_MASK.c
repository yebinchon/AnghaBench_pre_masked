
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_parse_attr {int dev_name_len; int dev_name; int primary_dev_type; int serial_number_len; int serial_number; int model_number_len; int model_number; int model_name_len; int model_name; int manufacturer_len; int manufacturer; } ;
struct wps_device_data {int dummy; } ;


 scalar_t__ FUNC_0 (struct wps_device_data*,int ,int ) ;
 scalar_t__ FUNC_1 (struct wps_device_data*,int ,int ) ;
 scalar_t__ FUNC_2 (struct wps_device_data*,int ,int ) ;
 scalar_t__ FUNC_3 (struct wps_device_data*,int ,int ) ;
 scalar_t__ FUNC_4 (struct wps_device_data*,int ) ;
 scalar_t__ FUNC_5 (struct wps_device_data*,int ,int ) ;

int FUNC_6(struct wps_device_data *VAR_0,
        struct wps_parse_attr *VAR_1)
{
 if (FUNC_1(VAR_0, VAR_1->manufacturer,
         VAR_1->manufacturer_len) ||
     FUNC_2(VAR_0, VAR_1->model_name,
       VAR_1->model_name_len) ||
     FUNC_3(VAR_0, VAR_1->model_number,
         VAR_1->model_number_len) ||
     FUNC_5(VAR_0, VAR_1->serial_number,
          VAR_1->serial_number_len) ||
     FUNC_4(VAR_0, VAR_1->primary_dev_type) ||
     FUNC_0(VAR_0, VAR_1->dev_name, VAR_1->dev_name_len))
  return -1;
 return 0;
}
