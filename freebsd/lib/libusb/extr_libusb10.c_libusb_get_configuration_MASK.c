
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct libusb20_device {int dummy; } ;
struct TYPE_2__ {int bConfigurationValue; } ;
struct libusb20_config {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct libusb20_config*) ;
 struct libusb20_config* FUNC_1 (struct libusb20_device*,int ) ;
 int FUNC_2 (struct libusb20_device*) ;

int
FUNC_3(struct libusb20_device *VAR_2, int *VAR_3)
{
 struct libusb20_config *VAR_4;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return (VAR_0);

 VAR_4 = FUNC_1(VAR_2, FUNC_2(VAR_2));
 if (VAR_4 == ((void*)0))
  return (VAR_1);

 *VAR_3 = VAR_4->desc.bConfigurationValue;

 FUNC_0(VAR_4);

 return (0);
}
