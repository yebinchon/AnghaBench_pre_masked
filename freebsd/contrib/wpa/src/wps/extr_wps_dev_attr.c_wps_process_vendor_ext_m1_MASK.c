
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_device_data {int multi_ap_ext; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;

void FUNC_1(struct wps_device_data *VAR_1, const u8 VAR_2)
{
 VAR_1->multi_ap_ext = VAR_2;
 FUNC_0(VAR_0, "WPS: Multi-AP extension value %02x",
     VAR_1->multi_ap_ext);
}
