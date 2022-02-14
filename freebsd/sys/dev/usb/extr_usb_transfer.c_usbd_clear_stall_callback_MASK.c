
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_xfer {int* frlengths; int nframes; int error; int frbuffers; TYPE_3__* endpoint; TYPE_1__* xroot; } ;
struct usb_device_request {int wLength; int * wIndex; int wValue; int bRequest; int bmRequestType; } ;
typedef int req ;
struct TYPE_6__ {TYPE_2__* edesc; } ;
struct TYPE_5__ {int bEndpointAddress; } ;
struct TYPE_4__ {int udev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (struct usb_xfer*,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,TYPE_3__*) ;
 int FUNC_5 (int ,int ,struct usb_device_request*,int) ;
 int FUNC_6 (struct usb_xfer*) ;

uint8_t
FUNC_7(struct usb_xfer *VAR_5,
    struct usb_xfer *VAR_6)
{
 struct usb_device_request VAR_7;

 if (VAR_6 == ((void*)0)) {

  FUNC_0("NULL input parameter\n");
  return (0);
 }
 FUNC_2(VAR_5, VAR_0);
 FUNC_2(VAR_6, VAR_0);

 switch (FUNC_1(VAR_5)) {
 case 129:






  FUNC_4(VAR_6->xroot->udev, VAR_6->endpoint);



  VAR_7.bmRequestType = VAR_4;
  VAR_7.bRequest = VAR_2;
  FUNC_3(VAR_7.wValue, VAR_1);
  VAR_7.wIndex[0] = VAR_6->endpoint->edesc->bEndpointAddress;
  VAR_7.wIndex[1] = 0;
  FUNC_3(VAR_7.wLength, 0);
  FUNC_5(VAR_5->frbuffers, 0, &VAR_7, sizeof(VAR_7));


  VAR_5->frlengths[0] = sizeof(VAR_7);
  VAR_5->nframes = 1;

  FUNC_6(VAR_5);
  return (0);

 case 128:
  break;

 default:
  if (VAR_5->error == VAR_3) {
   return (0);
  }
  break;
 }
 return (1);
}
