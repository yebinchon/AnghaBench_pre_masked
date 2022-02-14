
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct libusb_config_descriptor {scalar_t__ bConfigurationValue; } ;
struct libusb20_device {int dummy; } ;
struct LIBUSB20_DEVICE_DESC_DECODED {int bNumConfigurations; } ;
struct TYPE_4__ {struct libusb20_device* os_priv; } ;
typedef TYPE_1__ libusb_device ;


 int VAR_0 ;
 int VAR_1 ;
 struct LIBUSB20_DEVICE_DESC_DECODED* FUNC_0 (struct libusb20_device*) ;
 int FUNC_1 (struct libusb_config_descriptor*) ;
 int FUNC_2 (TYPE_1__*,int,struct libusb_config_descriptor**) ;

int
FUNC_3(libusb_device *VAR_2,
    uint8_t VAR_3, struct libusb_config_descriptor **VAR_4)
{
 struct LIBUSB20_DEVICE_DESC_DECODED *VAR_5;
 struct libusb20_device *VAR_6;
 int VAR_7;
 int VAR_8;

 if (VAR_2 == ((void*)0) || VAR_4 == ((void*)0))
  return (VAR_0);

 VAR_6 = VAR_2->os_priv;
 VAR_5 = FUNC_0(VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_5->bNumConfigurations; VAR_7++) {
  VAR_8 = FUNC_2(VAR_2, VAR_7, VAR_4);
  if (VAR_8)
   return (VAR_8);

  if ((*VAR_4)->bConfigurationValue == VAR_3)
   return (0);

  FUNC_1(*VAR_4);
 }

 *VAR_4 = ((void*)0);

 return (VAR_1);
}
