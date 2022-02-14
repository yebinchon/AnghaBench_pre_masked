
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t usb_stream_t ;
typedef int usb_error_t ;
typedef int uint8_t ;
struct usb_xfer {int nframes; int frbuffers; TYPE_1__* xroot; } ;
struct usb_endpoint {TYPE_2__* edesc; int is_stalled; TYPE_3__* endpoint_q; int toggle_next; } ;
struct usb_device_request {int wLength; int * wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct usb_device {int endpoints_max; int bus; struct usb_endpoint* ep_curr; int clear_stall_errors; struct usb_endpoint* endpoints; } ;
typedef int req ;
struct TYPE_6__ {int curr; } ;
struct TYPE_5__ {int bEndpointAddress; } ;
struct TYPE_4__ {struct usb_device* udev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct usb_xfer*) ;
 size_t VAR_5 ;


 int FUNC_4 (int ,int ) ;
 int VAR_6 ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int VAR_7 ;
 int FUNC_6 (struct usb_device*,struct usb_endpoint*) ;
 int FUNC_7 (int ,int ,struct usb_device_request*,int) ;
 int FUNC_8 (struct usb_device*) ;
 int FUNC_9 (struct usb_xfer*) ;
 int FUNC_10 (struct usb_xfer*,int ,int) ;

void
FUNC_11(struct usb_xfer *VAR_8, usb_error_t VAR_9)
{
 struct usb_device_request VAR_10;
 struct usb_device *VAR_11;
 struct usb_endpoint *VAR_12;
 struct usb_endpoint *VAR_13;
 struct usb_endpoint *VAR_14;
 usb_stream_t VAR_15;
 uint8_t VAR_16;

 VAR_11 = VAR_8->xroot->udev;

 FUNC_1(VAR_11->bus);



 VAR_12 = VAR_11->ep_curr;
 VAR_13 = VAR_11->endpoints + VAR_11->endpoints_max;
 VAR_14 = VAR_11->endpoints;
 VAR_16 = VAR_11->endpoints_max;

 switch (FUNC_3(VAR_8)) {
 case 128:
tr_transferred:

  VAR_11->clear_stall_errors = 0;

  if (VAR_12 == ((void*)0))
   goto tr_setup;
  if (VAR_12->edesc &&
      VAR_12->is_stalled) {
   VAR_12->toggle_next = 0;
   VAR_12->is_stalled = 0;

   FUNC_6(VAR_11, VAR_12);
   for (VAR_15 = 0; VAR_15 != VAR_5; VAR_15++) {

    FUNC_5(&VAR_12->endpoint_q[VAR_15],
        VAR_12->endpoint_q[VAR_15].curr);
   }
  }
  VAR_12++;

 case 129:
tr_setup:
  if (VAR_16 == 0)
   break;
  if ((VAR_12 < VAR_14) || (VAR_12 >= VAR_13))
   VAR_12 = VAR_14;
  if (VAR_12->edesc &&
      VAR_12->is_stalled) {



   VAR_10.bmRequestType = VAR_6;
   VAR_10.bRequest = VAR_1;
   FUNC_4(VAR_10.wValue, VAR_0);
   VAR_10.wIndex[0] = VAR_12->edesc->bEndpointAddress;
   VAR_10.wIndex[1] = 0;
   FUNC_4(VAR_10.wLength, 0);



   FUNC_7(VAR_8->frbuffers, 0, &VAR_10, sizeof(VAR_10));


   FUNC_10(VAR_8, 0, sizeof(VAR_10));
   VAR_8->nframes = 1;
   FUNC_2(VAR_11->bus);

   FUNC_9(VAR_8);

   FUNC_1(VAR_11->bus);
   break;
  }
  VAR_12++;
  VAR_16--;
  goto tr_setup;

 default:
  if (VAR_9 == VAR_3)
   break;

  FUNC_0("Clear stall failed.\n");





  if (VAR_7)
   goto tr_transferred;
  if (VAR_11->clear_stall_errors == VAR_2)
   goto tr_setup;

  if (VAR_9 == VAR_4) {
   VAR_11->clear_stall_errors = VAR_2;
   FUNC_0("Trying to re-enumerate.\n");
   FUNC_8(VAR_11);
  } else {
   VAR_11->clear_stall_errors++;
   if (VAR_11->clear_stall_errors == VAR_2) {
    FUNC_0("Trying to re-enumerate.\n");
    FUNC_8(VAR_11);
   }
  }
  goto tr_setup;
 }


 VAR_11->ep_curr = VAR_12;
 FUNC_2(VAR_11->bus);
}
