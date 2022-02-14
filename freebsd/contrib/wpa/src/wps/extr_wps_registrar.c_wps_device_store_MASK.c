
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_registrar_device {int uuid; int dev; struct wps_registrar_device* next; } ;
struct wps_registrar {struct wps_registrar_device* devices; } ;
struct wps_device_data {int mac_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*,int ) ;
 struct wps_registrar_device* FUNC_1 (int) ;
 int FUNC_2 (int *,struct wps_device_data*) ;
 struct wps_registrar_device* FUNC_3 (struct wps_registrar*,int ) ;

int FUNC_4(struct wps_registrar *VAR_1,
       struct wps_device_data *VAR_2, const u8 *VAR_3)
{
 struct wps_registrar_device *VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_2->mac_addr);
 if (VAR_4 == ((void*)0)) {
  VAR_4 = FUNC_1(sizeof(*VAR_4));
  if (VAR_4 == ((void*)0))
   return -1;
  VAR_4->next = VAR_1->devices;
  VAR_1->devices = VAR_4;
 }

 FUNC_2(&VAR_4->dev, VAR_2);
 FUNC_0(VAR_4->uuid, VAR_3, VAR_0);

 return 0;
}
