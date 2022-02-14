
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int auto_detach; } ;
typedef TYPE_1__ libusb_device_handle ;



int
FUNC_0(libusb_device_handle *VAR_0, int VAR_1)
{
 VAR_0->auto_detach = (VAR_1 ? 1 : 0);
 return (0);
}
