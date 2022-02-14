
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int did_close; scalar_t__ can_cancel_immed; scalar_t__ transferring; scalar_t__ started; scalar_t__ open; } ;
struct usb_xfer {size_t stream_id; TYPE_3__* xroot; struct usb_endpoint* endpoint; TYPE_1__ flags_int; int error; } ;
struct usb_endpoint {TYPE_4__* endpoint_q; TYPE_2__* methods; } ;
struct TYPE_8__ {struct usb_xfer* curr; } ;
struct TYPE_7__ {int bus; } ;
struct TYPE_6__ {int (* close ) (struct usb_xfer*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct usb_xfer*,int ) ;
 int FUNC_4 (struct usb_xfer*) ;
 int FUNC_5 (struct usb_xfer*) ;
 int FUNC_6 (TYPE_4__*,int *) ;

void
FUNC_7(struct usb_xfer *VAR_2)
{
 struct usb_endpoint *VAR_3;

 if (VAR_2 == ((void*)0)) {

  return;
 }
 FUNC_3(VAR_2, VAR_0);



 if (!VAR_2->flags_int.open) {
  if (VAR_2->flags_int.started) {


   FUNC_1(VAR_2->xroot->bus);
   VAR_2->flags_int.started = 0;
   FUNC_2(VAR_2->xroot->bus);
  }
  return;
 }


 FUNC_1(VAR_2->xroot->bus);

 VAR_2->error = VAR_1;





 VAR_2->flags_int.open = 0;
 VAR_2->flags_int.started = 0;




 if (VAR_2->flags_int.transferring) {
  if (VAR_2->flags_int.can_cancel_immed &&
      (!VAR_2->flags_int.did_close)) {
   FUNC_0("close\n");




   (VAR_2->endpoint->methods->close) (VAR_2);

   VAR_2->flags_int.did_close = 1;
  } else {

  }
 } else {
  FUNC_0("close\n");


  (VAR_2->endpoint->methods->close) (VAR_2);
  VAR_3 = VAR_2->endpoint;





  if (VAR_3->endpoint_q[VAR_2->stream_id].curr == VAR_2) {
   FUNC_6(
       &VAR_3->endpoint_q[VAR_2->stream_id], ((void*)0));
  }
 }

 FUNC_2(VAR_2->xroot->bus);
}
