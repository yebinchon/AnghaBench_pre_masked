
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_device_data {int os_version; } ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,char*,...) ;

int FUNC_2(struct wps_device_data *VAR_1, const u8 *VAR_2)
{
 if (VAR_2 == ((void*)0)) {
  FUNC_1(VAR_0, "WPS: No OS Version received");
  return -1;
 }

 VAR_1->os_version = FUNC_0(VAR_2);
 FUNC_1(VAR_0, "WPS: OS Version %08x", VAR_1->os_version);

 return 0;
}
