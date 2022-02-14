
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct libusb_device {int dev_poll; int ctx; } ;
struct libusb20_device {int dummy; } ;
struct TYPE_2__ {int bConfigurationValue; } ;
struct libusb20_config {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct libusb20_config*) ;
 int FUNC_1 (int ,int *,struct libusb20_device*,int ,int) ;
 int FUNC_2 (struct libusb_device*) ;
 int FUNC_3 (int ,int *) ;
 struct libusb20_config* FUNC_4 (struct libusb20_device*,int) ;
 int FUNC_5 (struct libusb20_device*) ;
 int FUNC_6 (struct libusb20_device*,int) ;
 struct libusb_device* FUNC_7 (struct libusb20_device*) ;

int
FUNC_8(struct libusb20_device *VAR_5, int VAR_6)
{
 struct libusb20_config *VAR_7;
 struct libusb_device *VAR_8;
 int VAR_9;
 uint8_t VAR_10;

 VAR_8 = FUNC_7(VAR_5);
 if (VAR_8 == ((void*)0))
  return (VAR_0);

 if (VAR_6 < 1) {

  VAR_10 = 255;
 } else {
  for (VAR_10 = 0; VAR_10 != 255; VAR_10++) {
   uint8_t VAR_11;

   VAR_7 = FUNC_4(VAR_5, VAR_10);
   if (VAR_7 == ((void*)0))
    return (VAR_0);
   VAR_11 = (VAR_7->desc.bConfigurationValue
       == VAR_6);
   FUNC_0(VAR_7);

   if (VAR_11)
    goto set_config;
  }
  return (VAR_0);
 }

set_config:

 FUNC_2(VAR_8);

 FUNC_3(VAR_8->ctx, &VAR_8->dev_poll);

 VAR_9 = FUNC_6(VAR_5, VAR_10);

 FUNC_1(VAR_8->ctx, &VAR_8->dev_poll, VAR_5, FUNC_5(VAR_5), VAR_1 |
     VAR_2 | VAR_3 | VAR_4);

 return (VAR_9 ? VAR_0 : 0);
}
