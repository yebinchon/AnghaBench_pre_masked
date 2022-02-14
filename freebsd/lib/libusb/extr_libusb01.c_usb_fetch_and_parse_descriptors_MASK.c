
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int usb_dev_handle ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int bNumConfigurations; } ;
struct usb_device {int * config; TYPE_1__ descriptor; } ;
struct usb_config_descriptor {int dummy; } ;
struct libusb20_device {TYPE_2__* methods; } ;
struct TYPE_4__ {int (* get_config_desc_full ) (struct libusb20_device*,int**,int *,int) ;} ;


 int FUNC_0 (int*) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct libusb20_device*,int**,int *,int) ;
 int FUNC_4 (struct usb_device*) ;
 struct usb_device* FUNC_5 (int *) ;
 int FUNC_6 (int *,int*) ;

void
FUNC_7(usb_dev_handle * VAR_0)
{
 struct usb_device *VAR_1;
 struct libusb20_device *VAR_2;
 uint8_t *VAR_3;
 int VAR_4;
 uint32_t VAR_5;
 uint16_t VAR_6;
 uint8_t VAR_7;

 if (VAR_0 == ((void*)0)) {

  return;
 }
 VAR_1 = FUNC_5(VAR_0);
 VAR_2 = (void *)VAR_0;

 if (VAR_1->descriptor.bNumConfigurations == 0) {

  return;
 }
 VAR_5 = VAR_1->descriptor.bNumConfigurations *
     sizeof(struct usb_config_descriptor);

 VAR_1->config = FUNC_1(VAR_5);
 if (VAR_1->config == ((void*)0)) {

  return;
 }
 FUNC_2(VAR_1->config, 0, VAR_5);

 for (VAR_7 = 0; VAR_7 != VAR_1->descriptor.bNumConfigurations; VAR_7++) {

  VAR_4 = (VAR_2->methods->get_config_desc_full) (
      VAR_2, &VAR_3, &VAR_6, VAR_7);

  if (VAR_4) {
   FUNC_4(VAR_1);
   return;
  }
  FUNC_6(VAR_1->config + VAR_7, VAR_3);


  FUNC_0(VAR_3);
 }
 return;
}
