
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
struct bhnd_usb_devinfo {struct resource_list sdi_rl; } ;
typedef int device_t ;


 struct bhnd_usb_devinfo* FUNC_0 (int ) ;

__attribute__((used)) static struct resource_list *
FUNC_1(device_t VAR_0, device_t VAR_1)
{
 struct bhnd_usb_devinfo *VAR_2;

 VAR_2 = FUNC_0(VAR_1);

 return (&VAR_2->sdi_rl);
}
