
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wps_device_data {scalar_t__ rf_bands; } ;
struct wpabuf {int dummy; } ;


 int FUNC_0 (struct wpabuf*,scalar_t__) ;

int FUNC_1(struct wps_device_data *VAR_0, struct wpabuf *VAR_1,
         u8 VAR_2)
{
 return FUNC_0(VAR_1, VAR_2 ? VAR_2 : VAR_0->rf_bands);
}
