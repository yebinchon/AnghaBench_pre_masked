
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t usb_stream_t ;
struct TYPE_3__ {int bandwidth_reclaimed; } ;
struct usb_xfer {TYPE_1__ flags_int; } ;
struct usb_endpoint {TYPE_2__* endpoint_q; } ;
struct TYPE_4__ {int head; struct usb_xfer* curr; } ;


 struct usb_xfer* FUNC_0 (int *) ;
 int FUNC_1 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_2(struct usb_endpoint *VAR_0,
    usb_stream_t VAR_1, struct usb_xfer *VAR_2)
{
 struct usb_xfer *VAR_3;


 VAR_3 = VAR_0->endpoint_q[VAR_1].curr;
 if (VAR_3 == ((void*)0))
  return;






 if (!VAR_3->flags_int.bandwidth_reclaimed)
  return;

 VAR_3 = FUNC_0(&VAR_0->endpoint_q[VAR_1].head);
 if (VAR_3 == ((void*)0)) {





  VAR_3 = VAR_2;

  if (VAR_3 == ((void*)0))
   return;
 }


 FUNC_1(VAR_3);
}
