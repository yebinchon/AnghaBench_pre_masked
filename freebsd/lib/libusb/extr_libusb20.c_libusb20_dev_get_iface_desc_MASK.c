
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct libusb20_device {TYPE_1__* beMethods; } ;
struct TYPE_2__ {int (* dev_get_iface_desc ) (struct libusb20_device*,scalar_t__,char*,scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct libusb20_device*,scalar_t__,char*,scalar_t__) ;

int
FUNC_1(struct libusb20_device *VAR_1,
    uint8_t VAR_2, char *VAR_3, uint8_t VAR_4)
{
 if ((VAR_3 == ((void*)0)) || (VAR_4 == 0))
  return (VAR_0);

 VAR_3[0] = 0;

 return (VAR_1->beMethods->dev_get_iface_desc(
     VAR_1, VAR_2, VAR_3, VAR_4));
}
