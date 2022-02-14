
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
struct usb_xfer_root {scalar_t__ setup_refcount; int bus; } ;
struct TYPE_3__ {scalar_t__ bdma_enable; } ;
struct usb_xfer {int timeout_handle; TYPE_2__* endpoint; TYPE_1__ flags_int; struct usb_xfer_root* xroot; } ;
struct TYPE_4__ {int refcount_alloc; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct usb_xfer*) ;
 int FUNC_4 (struct usb_xfer*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int,int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct usb_xfer*) ;
 int FUNC_8 (struct usb_xfer_root*,int) ;

void
FUNC_9(struct usb_xfer **VAR_2, uint16_t VAR_3)
{
 struct usb_xfer *VAR_4;
 struct usb_xfer_root *VAR_5;
 uint8_t VAR_6 = 0;

 FUNC_5(VAR_0 | VAR_1, ((void*)0),
     "usbd_transfer_unsetup can sleep!");

 while (VAR_3--) {
  VAR_4 = VAR_2[VAR_3];

  if (VAR_4 == ((void*)0))
   continue;

  VAR_5 = VAR_4->xroot;

  FUNC_3(VAR_4);
  FUNC_1(VAR_5->bus);
  VAR_2[VAR_3] = ((void*)0);

  FUNC_2(VAR_5->bus);
  FUNC_4(VAR_4);

  FUNC_7(VAR_4);
  FUNC_1(VAR_5->bus);
  VAR_4->endpoint->refcount_alloc--;
  FUNC_2(VAR_5->bus);

  FUNC_6(&VAR_4->timeout_handle);

  FUNC_1(VAR_5->bus);

  FUNC_0(VAR_5->setup_refcount != 0, ("Invalid setup "
      "reference count\n"));

  VAR_5->setup_refcount--;

  if (VAR_5->setup_refcount == 0) {
   FUNC_8(VAR_5,
       VAR_6);
  } else {
   FUNC_2(VAR_5->bus);
  }
 }
}
