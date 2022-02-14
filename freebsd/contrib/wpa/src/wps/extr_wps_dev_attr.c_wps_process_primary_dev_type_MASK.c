
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_device_data {int pri_dev_type; } ;
typedef int devtype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct wps_device_data *VAR_3,
     const u8 *VAR_4)
{

 char VAR_5[VAR_1];


 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_0, "WPS: No Primary Device Type received");
  return -1;
 }

 FUNC_0(VAR_3->pri_dev_type, VAR_4, VAR_2);
 FUNC_1(VAR_0, "WPS: Primary Device Type: %s",
     FUNC_2(VAR_3->pri_dev_type, VAR_5,
     sizeof(VAR_5)));

 return 0;
}
