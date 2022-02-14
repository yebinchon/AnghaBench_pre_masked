
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_xfer {TYPE_4__* endpoint; int max_frame_size; TYPE_1__* xroot; } ;
struct TYPE_6__ {scalar_t__ usb_mode; } ;
struct usb_device {TYPE_2__ flags; } ;
struct TYPE_8__ {int refcount_bw; int usb_uframe; int usb_smask; int usb_cmask; TYPE_3__* edesc; } ;
struct TYPE_7__ {int bmAttributes; } ;
struct TYPE_5__ {struct usb_device* udev; } ;


 int FUNC_0 (int,char*,int,int) ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct usb_device*,int ,int ,int) ;
 int FUNC_2 (struct usb_device*) ;
 int FUNC_3 (struct usb_xfer*) ;

void
FUNC_4(struct usb_xfer *VAR_5)
{
 struct usb_device *VAR_6;
 uint8_t VAR_7;
 uint8_t VAR_8;
 uint8_t VAR_9;

 VAR_6 = VAR_5->xroot->udev;

 if (VAR_6->flags.usb_mode != VAR_2)
  return;

 VAR_5->endpoint->refcount_bw++;
 if (VAR_5->endpoint->refcount_bw != 1)
  return;

 VAR_9 = FUNC_2(VAR_6);

 switch (VAR_5->endpoint->edesc->bmAttributes & VAR_0) {
 case 129:


  VAR_8 = 0x01;
  VAR_7 = FUNC_1(VAR_6,
      VAR_5->max_frame_size, VAR_1, VAR_8);

  VAR_5->endpoint->usb_uframe = VAR_7;
  VAR_5->endpoint->usb_smask = VAR_8 << VAR_7;

  if ((VAR_9 != VAR_3) &&
      (VAR_9 != VAR_4)) {
   VAR_5->endpoint->usb_cmask = 0x00 ;
  } else {
   VAR_5->endpoint->usb_cmask = (-(0x04 << VAR_7)) & 0xFE;
  }
  break;

 case 128:
  switch (FUNC_3(VAR_5)) {
  case 0:
   VAR_8 = 0xFF;
   break;
  case 1:
   VAR_8 = 0x55;
   break;
  case 2:
   VAR_8 = 0x11;
   break;
  default:
   VAR_8 = 0x01;
   break;
  }



  VAR_7 = FUNC_1(VAR_6,
      VAR_5->max_frame_size, VAR_1, VAR_8);

  VAR_5->endpoint->usb_uframe = VAR_7;
  VAR_5->endpoint->usb_cmask = 0;
  VAR_5->endpoint->usb_smask = VAR_8 << VAR_7;
  break;

 default:
  VAR_5->endpoint->usb_uframe = 0;
  VAR_5->endpoint->usb_cmask = 0;
  VAR_5->endpoint->usb_smask = 0;
  break;
 }

 FUNC_0(11, "slot=%d, mask=0x%02x\n",
     VAR_5->endpoint->usb_uframe,
     VAR_5->endpoint->usb_smask >> VAR_5->endpoint->usb_uframe);
}
