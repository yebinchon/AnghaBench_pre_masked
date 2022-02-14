
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_device_data {int * vendor_ext_m1; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wpabuf*,int ) ;
 int FUNC_4 (struct wpabuf*,int *) ;

int FUNC_5(struct wps_device_data *VAR_2, struct wpabuf *VAR_3)
{
 if (VAR_2->vendor_ext_m1 != ((void*)0)) {
  FUNC_0(VAR_1, "WPS:  * Vendor Extension M1",
       FUNC_1(VAR_2->vendor_ext_m1),
       FUNC_2(VAR_2->vendor_ext_m1));
  FUNC_3(VAR_3, VAR_0);
  FUNC_3(VAR_3, FUNC_2(VAR_2->vendor_ext_m1));
  FUNC_4(VAR_3, VAR_2->vendor_ext_m1);
 }
 return 0;
}
