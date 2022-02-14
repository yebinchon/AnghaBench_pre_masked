
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int libusb_hotplug_event ;
typedef TYPE_1__* libusb_hotplug_callback_handle ;
struct TYPE_8__ {int os_priv; } ;
typedef TYPE_2__ libusb_device ;
typedef int libusb_context ;
struct TYPE_9__ {scalar_t__ idVendor; scalar_t__ idProduct; scalar_t__ bDeviceClass; } ;
struct TYPE_7__ {int events; scalar_t__ vendor; scalar_t__ product; scalar_t__ devclass; int (* fn ) (int *,TYPE_2__*,int,int ) ;int user_data; } ;


 scalar_t__ VAR_0 ;
 TYPE_6__* FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_2__*,int,int ) ;

__attribute__((used)) static int
FUNC_2(libusb_context *VAR_1, libusb_hotplug_callback_handle VAR_2,
    libusb_device *VAR_3, libusb_hotplug_event VAR_4)
{
 if (!(VAR_2->events & VAR_4))
  return (0);
 if (VAR_2->vendor != VAR_0 &&
     VAR_2->vendor != FUNC_0(VAR_3->os_priv)->idVendor)
  return (0);
 if (VAR_2->product != VAR_0 &&
     VAR_2->product != FUNC_0(VAR_3->os_priv)->idProduct)
  return (0);
 if (VAR_2->devclass != VAR_0 &&
     VAR_2->devclass != FUNC_0(VAR_3->os_priv)->bDeviceClass)
  return (0);
 return (VAR_2->fn(VAR_1, VAR_3, VAR_4, VAR_2->user_data));
}
