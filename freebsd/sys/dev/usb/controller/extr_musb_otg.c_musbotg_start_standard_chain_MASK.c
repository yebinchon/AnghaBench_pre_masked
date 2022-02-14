
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_xfer {scalar_t__ timeout; TYPE_2__* xroot; } ;
struct TYPE_4__ {TYPE_1__* bus; } ;
struct TYPE_3__ {int intr_q; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct usb_xfer*) ;
 int FUNC_2 (int *,struct usb_xfer*) ;
 int FUNC_3 (struct usb_xfer*,int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct usb_xfer *VAR_1)
{
 FUNC_0(8, "\n");


 if (FUNC_1(VAR_1)) {

  FUNC_0(14, "enabled interrupts on endpoint\n");


  FUNC_2(&VAR_1->xroot->bus->intr_q, VAR_1);


  if (VAR_1->timeout != 0) {
   FUNC_3(VAR_1,
       &VAR_0, VAR_1->timeout);
  }
 }
}
