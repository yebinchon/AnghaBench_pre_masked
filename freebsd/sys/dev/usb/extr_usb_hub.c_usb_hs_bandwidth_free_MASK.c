
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
struct TYPE_8__ {scalar_t__ refcount_bw; int usb_uframe; int usb_smask; int usb_cmask; TYPE_3__* edesc; } ;
struct TYPE_7__ {int bmAttributes; } ;
struct TYPE_5__ {struct usb_device* udev; } ;


 int FUNC_0 (int,char*,int,int) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct usb_device*,int ,int,int) ;

void
FUNC_2(struct usb_xfer *VAR_2)
{
 struct usb_device *VAR_3;
 uint8_t VAR_4;
 uint8_t VAR_5;

 VAR_3 = VAR_2->xroot->udev;

 if (VAR_3->flags.usb_mode != VAR_1)
  return;

 VAR_2->endpoint->refcount_bw--;
 if (VAR_2->endpoint->refcount_bw != 0)
  return;

 switch (VAR_2->endpoint->edesc->bmAttributes & VAR_0) {
 case 129:
 case 128:

  VAR_4 = VAR_2->endpoint->usb_uframe;
  VAR_5 = VAR_2->endpoint->usb_smask;


  FUNC_1(VAR_3,
      -VAR_2->max_frame_size, VAR_4, VAR_5 >> VAR_4);

  FUNC_0(11, "slot=%d, mask=0x%02x\n",
      VAR_4, VAR_5 >> VAR_4);

  VAR_2->endpoint->usb_uframe = 0;
  VAR_2->endpoint->usb_cmask = 0;
  VAR_2->endpoint->usb_smask = 0;
  break;

 default:
  break;
 }
}
