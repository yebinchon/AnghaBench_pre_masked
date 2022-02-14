
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct libusb20_device {scalar_t__ bus_number; scalar_t__ device_address; int session_data; int ddesc; } ;
struct TYPE_4__ {struct libusb20_device* os_priv; } ;
typedef TYPE_1__ libusb_device ;


 scalar_t__ FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_1(libusb_device *VAR_0, libusb_device *VAR_1)
{
 struct libusb20_device *VAR_2 = VAR_0->os_priv;
 struct libusb20_device *VAR_3 = VAR_1->os_priv;

 if (VAR_2->bus_number != VAR_3->bus_number)
  return (0);
 if (VAR_2->device_address != VAR_3->device_address)
  return (0);
 if (FUNC_0(&VAR_2->ddesc, &VAR_3->ddesc, sizeof(VAR_2->ddesc)))
  return (0);
 if (FUNC_0(&VAR_2->session_data, &VAR_3->session_data, sizeof(VAR_2->session_data)))
  return (0);
 return (1);
}
