
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device_id {int match_flags; scalar_t__ idVendor; scalar_t__ idProduct; scalar_t__ bcdDevice_lo; scalar_t__ bcdDevice_hi; int bDeviceClass; scalar_t__ bDeviceSubClass; scalar_t__ bDeviceProtocol; scalar_t__ bInterfaceClass; scalar_t__ bInterfaceSubClass; scalar_t__ bInterfaceProtocol; } ;
struct TYPE_2__ {scalar_t__ idVendor; scalar_t__ idProduct; scalar_t__ bcdDevice; int bDeviceClass; scalar_t__ bDeviceSubClass; scalar_t__ bDeviceProtocol; scalar_t__ bInterfaceClass; scalar_t__ bInterfaceSubClass; scalar_t__ bInterfaceProtocol; } ;
struct usb_attach_arg {TYPE_1__ info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static const struct usb_device_id *
FUNC_0(const struct usb_device_id *VAR_10, struct usb_attach_arg *VAR_11)
{
 if (VAR_10 == ((void*)0)) {
  goto done;
 }





 for (; VAR_10->match_flags; VAR_10++) {

  if ((VAR_10->match_flags & VAR_9) &&
      (VAR_10->idVendor != VAR_11->info.idVendor)) {
   continue;
  }
  if ((VAR_10->match_flags & VAR_8) &&
      (VAR_10->idProduct != VAR_11->info.idProduct)) {
   continue;
  }
  if ((VAR_10->match_flags & VAR_2) &&
      (VAR_10->bcdDevice_lo > VAR_11->info.bcdDevice)) {
   continue;
  }
  if ((VAR_10->match_flags & VAR_1) &&
      (VAR_10->bcdDevice_hi < VAR_11->info.bcdDevice)) {
   continue;
  }
  if ((VAR_10->match_flags & VAR_0) &&
      (VAR_10->bDeviceClass != VAR_11->info.bDeviceClass)) {
   continue;
  }
  if ((VAR_10->match_flags & VAR_4) &&
      (VAR_10->bDeviceSubClass != VAR_11->info.bDeviceSubClass)) {
   continue;
  }
  if ((VAR_10->match_flags & VAR_3) &&
      (VAR_10->bDeviceProtocol != VAR_11->info.bDeviceProtocol)) {
   continue;
  }
  if ((VAR_11->info.bDeviceClass == 0xFF) &&
      !(VAR_10->match_flags & VAR_9) &&
      (VAR_10->match_flags & (VAR_5 |
      VAR_7 |
      VAR_6))) {
   continue;
  }
  if ((VAR_10->match_flags & VAR_5) &&
      (VAR_10->bInterfaceClass != VAR_11->info.bInterfaceClass)) {
   continue;
  }
  if ((VAR_10->match_flags & VAR_7) &&
      (VAR_10->bInterfaceSubClass != VAR_11->info.bInterfaceSubClass)) {
   continue;
  }
  if ((VAR_10->match_flags & VAR_6) &&
      (VAR_10->bInterfaceProtocol != VAR_11->info.bInterfaceProtocol)) {
   continue;
  }

  return (VAR_10);
 }

done:
 return (((void*)0));
}
