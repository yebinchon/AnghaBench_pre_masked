
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int control_rem; } ;
struct usb_xfer {int endpointno; TYPE_1__ flags_int; int frbuffers; } ;
struct usb_device_request {int bmRequestType; int wLength; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,struct usb_device_request*,int) ;

__attribute__((used)) static void
FUNC_2(struct usb_xfer *VAR_3)
{
 struct usb_device_request VAR_4;



 FUNC_1(VAR_3->frbuffers, 0, &VAR_4, sizeof(VAR_4));



 VAR_3->flags_int.control_rem = FUNC_0(VAR_4.wLength);



 VAR_3->endpointno &= ~(VAR_0 | VAR_1);
 VAR_3->endpointno |=
     (VAR_4.bmRequestType & VAR_2) ? VAR_0 : VAR_1;
}
