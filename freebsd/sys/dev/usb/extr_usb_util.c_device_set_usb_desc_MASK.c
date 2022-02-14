
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
typedef scalar_t__ uint8_t ;
struct usb_interface {TYPE_2__* idesc; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct usb_device {TYPE_3__* bus; TYPE_1__ scratch; } ;
struct usb_attach_arg {struct usb_interface* iface; struct usb_device* device; } ;
typedef int * device_t ;
struct TYPE_6__ {int bdev; } ;
struct TYPE_5__ {scalar_t__ iInterface; } ;


 scalar_t__ VAR_0 ;
 struct usb_attach_arg* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,char*,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct usb_device*,char*,int) ;
 scalar_t__ FUNC_5 (struct usb_device*) ;
 int FUNC_6 (struct usb_device*) ;
 scalar_t__ FUNC_7 (struct usb_device*,int *,char*,int,scalar_t__) ;

void
FUNC_8(device_t VAR_1)
{
 struct usb_attach_arg *VAR_2;
 struct usb_device *VAR_3;
 struct usb_interface *VAR_4;
 char *VAR_5;
 usb_error_t VAR_6;
 uint8_t VAR_7;

 if (VAR_1 == ((void*)0)) {

  return;
 }
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 == ((void*)0)) {

  return;
 }
 VAR_3 = VAR_2->device;
 VAR_4 = VAR_2->iface;

 if ((VAR_4 == ((void*)0)) ||
     (VAR_4->idesc == ((void*)0)) ||
     (VAR_4->idesc->iInterface == 0)) {
  VAR_6 = VAR_0;
 } else {
  VAR_6 = 0;
 }


 VAR_7 = FUNC_5(VAR_3);

 VAR_5 = (char *)VAR_3->scratch.data;

 if (VAR_6 == 0) {

  VAR_6 = FUNC_7(VAR_3, ((void*)0), VAR_5,
      sizeof(VAR_3->scratch.data),
      VAR_4->idesc->iInterface);
 }
 if (VAR_6 != 0) {

  FUNC_4(VAR_3, VAR_5,
      sizeof(VAR_3->scratch.data));
 }

 if (VAR_7)
  FUNC_6(VAR_3);

 FUNC_3(VAR_1, VAR_5);
 FUNC_2(VAR_1, "<%s> on %s\n", VAR_5,
     FUNC_1(VAR_3->bus->bdev));
}
