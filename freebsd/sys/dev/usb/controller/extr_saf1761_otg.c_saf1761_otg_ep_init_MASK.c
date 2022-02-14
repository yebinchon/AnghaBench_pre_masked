
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct usb_endpoint_descriptor {int bmAttributes; int wMaxPacketSize; int bEndpointAddress; } ;
struct usb_endpoint {int * methods; } ;
struct TYPE_2__ {scalar_t__ usb_mode; } ;
struct usb_device {scalar_t__ speed; TYPE_1__ flags; int * parent_hub; int address; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,char*,struct usb_endpoint*,int ,int ,scalar_t__) ;
 int VAR_0 ;

 int VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_3(struct usb_device *VAR_8, struct usb_endpoint_descriptor *VAR_9,
    struct usb_endpoint *VAR_10)
{
 uint16_t VAR_11;

 FUNC_1(2, "endpoint=%p, addr=%d, endpt=%d, mode=%d\n",
     VAR_10, VAR_8->address,
     VAR_9->bEndpointAddress, VAR_8->flags.usb_mode);

 if (VAR_8->parent_hub == ((void*)0)) {

  return;
 }


 VAR_11 = FUNC_2(VAR_9->wMaxPacketSize);
 if (VAR_8->speed == VAR_4) {
  if ((VAR_11 >> 11) & 3) {
   FUNC_0("A packet multiplier different from "
       "1 is not supported\n");
   return;
  }
 }
 if (VAR_11 > VAR_0) {
  FUNC_0("Packet size %d bigger than %d\n",
      (int)VAR_11, VAR_0);
  return;
 }
 if (VAR_8->flags.usb_mode == VAR_2) {
  if (VAR_8->speed != VAR_3 &&
      VAR_8->speed != VAR_4) {

   return;
  }
  switch (VAR_9->bmAttributes & VAR_1) {
  case 128:
   VAR_10->methods = &VAR_5;
   break;
  default:
   VAR_10->methods = &VAR_7;
   break;
  }
 } else {
  switch (VAR_9->bmAttributes & VAR_1) {
  case 128:
   VAR_10->methods = &VAR_6;
   break;
  default:
   VAR_10->methods = &VAR_7;
   break;
  }
 }
}
