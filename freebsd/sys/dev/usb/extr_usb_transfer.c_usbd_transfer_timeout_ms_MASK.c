
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_timeout_t ;
struct usb_xfer {int timeout_handle; TYPE_1__* xroot; } ;
struct TYPE_2__ {int bus; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,scalar_t__,void (*) (void*),struct usb_xfer*) ;

void
FUNC_3(struct usb_xfer *VAR_2,
    void (*VAR_3) (void *VAR_4), usb_timeout_t VAR_5)
{
 FUNC_0(VAR_2->xroot->bus, VAR_0);


 FUNC_2(&VAR_2->timeout_handle,
     FUNC_1(VAR_5) + VAR_1, VAR_3, VAR_2);
}
