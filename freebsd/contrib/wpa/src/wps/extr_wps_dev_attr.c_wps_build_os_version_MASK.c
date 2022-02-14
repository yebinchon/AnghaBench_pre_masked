
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_device_data {int os_version; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wpabuf*,int) ;
 int FUNC_2 (struct wpabuf*,int) ;

int FUNC_3(struct wps_device_data *VAR_2, struct wpabuf *VAR_3)
{
 FUNC_0(VAR_1, "WPS:  * OS Version");
 FUNC_1(VAR_3, VAR_0);
 FUNC_1(VAR_3, 4);
 FUNC_2(VAR_3, 0x80000000 | VAR_2->os_version);
 return 0;
}
