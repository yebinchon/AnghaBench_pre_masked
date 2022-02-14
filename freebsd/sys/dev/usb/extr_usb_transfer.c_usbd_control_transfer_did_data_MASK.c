
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ control_hdr; scalar_t__ control_rem; } ;
struct usb_xfer {TYPE_1__ flags_int; int frbuffers; } ;
struct usb_device_request {int wLength; } ;
typedef int req ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct usb_device_request*,int) ;

__attribute__((used)) static uint8_t
FUNC_2(struct usb_xfer *VAR_0)
{
 struct usb_device_request VAR_1;


 if (VAR_0->flags_int.control_hdr != 0)
  return (0);


 FUNC_1(VAR_0->frbuffers, 0, &VAR_1, sizeof(VAR_1));


 return (VAR_0->flags_int.control_rem != FUNC_0(VAR_1.wLength));
}
