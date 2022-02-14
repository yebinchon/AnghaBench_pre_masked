
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t usb_stream_t ;
typedef int usb_error_t ;
typedef int uint8_t ;
struct usb_xfer {int dummy; } ;
struct usb_endpoint {int is_stalled; TYPE_3__* endpoint_q; scalar_t__ toggle_next; TYPE_1__* edesc; } ;
struct usb_device {TYPE_4__* bus; } ;
struct TYPE_9__ {TYPE_2__* methods; } ;
struct TYPE_8__ {struct usb_xfer* curr; } ;
struct TYPE_7__ {int (* clear_stall ) (struct usb_device*,struct usb_endpoint*) ;int (* set_stall ) (struct usb_device*,struct usb_endpoint*,int*) ;int (* xfer_stall ) (struct usb_xfer*) ;} ;
struct TYPE_6__ {int bmAttributes; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 size_t VAR_3 ;
 int FUNC_3 (struct usb_xfer*) ;
 int FUNC_4 (struct usb_device*,struct usb_endpoint*,int*) ;
 int FUNC_5 (struct usb_device*,struct usb_endpoint*) ;
 int FUNC_6 (TYPE_3__*,struct usb_xfer*) ;

usb_error_t
FUNC_7(struct usb_device *VAR_4, struct usb_endpoint *VAR_5,
    uint8_t VAR_6)
{
 struct usb_xfer *VAR_7;
 usb_stream_t VAR_8;
 uint8_t VAR_9;
 uint8_t VAR_10;

 if (VAR_5 == ((void*)0)) {

  FUNC_0("Cannot find endpoint\n");






  return (0);
 }
 VAR_9 = (VAR_5->edesc->bmAttributes & VAR_2);

 if ((VAR_9 != VAR_0) &&
     (VAR_9 != VAR_1)) {




  FUNC_0("Invalid endpoint\n");
  return (0);
 }
 FUNC_1(VAR_4->bus);


 VAR_10 = VAR_5->is_stalled;


 if (VAR_10 && VAR_6) {

  FUNC_2(VAR_4->bus);
  FUNC_0("No change\n");
  return (0);
 }

 VAR_5->is_stalled = 1;

 if (VAR_6 || (!VAR_10)) {
  if (!VAR_10) {
   for (VAR_8 = 0; VAR_8 != VAR_3; VAR_8++) {

    VAR_7 = VAR_5->endpoint_q[VAR_8].curr;
    if (VAR_7 != ((void*)0)) {







     (VAR_4->bus->methods->xfer_stall) (VAR_7);
    }
   }
  }
  (VAR_4->bus->methods->set_stall) (VAR_4, VAR_5, &VAR_6);
 }
 if (!VAR_6) {
  VAR_5->toggle_next = 0;
  VAR_5->is_stalled = 0;

  (VAR_4->bus->methods->clear_stall) (VAR_4, VAR_5);


  for (VAR_8 = 0; VAR_8 != VAR_3; VAR_8++) {
   FUNC_6(&VAR_5->endpoint_q[VAR_8],
       VAR_5->endpoint_q[VAR_8].curr);
  }
 }
 FUNC_2(VAR_4->bus);
 return (0);
}
