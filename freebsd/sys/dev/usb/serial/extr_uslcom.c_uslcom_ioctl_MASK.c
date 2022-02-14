
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct uslcom_softc {int sc_iface_no; int sc_ucom; int sc_udev; int sc_partnum; } ;
struct usb_device_request {int wLength; int wIndex; int wValue; void* bRequest; int bmRequestType; } ;
struct ucom_softc {struct uslcom_softc* sc_parent; } ;
struct thread {int dummy; } ;
typedef int latch ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int *,struct usb_device_request*,int*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct ucom_softc *VAR_10, uint32_t VAR_11, caddr_t VAR_12,
    int VAR_13, struct thread *VAR_14)
{
 struct uslcom_softc *VAR_15 = VAR_10->sc_parent;
 struct usb_device_request VAR_16;
 int VAR_17 = 0;
 uint8_t VAR_18;

 FUNC_0("cmd=0x%08x\n", VAR_11);

 switch (VAR_11) {
 case 129:
  if (VAR_15->sc_partnum < VAR_3) {
   VAR_17 = VAR_1;
   break;
  }
  VAR_16.bmRequestType = VAR_5;
  VAR_16.bRequest = VAR_7;
  FUNC_1(VAR_16.wValue, VAR_6);
  FUNC_1(VAR_16.wIndex, VAR_15->sc_iface_no);
  FUNC_1(VAR_16.wLength, sizeof(VAR_18));

  if (FUNC_2(VAR_15->sc_udev, &VAR_15->sc_ucom,
      &VAR_16, &VAR_18, 0, 1000)) {
   FUNC_0("Get LATCH failed\n");
   VAR_17 = VAR_0;
  }
  *(int *)VAR_12 = VAR_18;
  break;

 case 128:
  if (VAR_15->sc_partnum < VAR_3)
   VAR_17 = VAR_1;
  else if ((VAR_15->sc_partnum == VAR_3) ||
      (VAR_15->sc_partnum == VAR_4)) {
   VAR_16.bmRequestType = VAR_8;
   VAR_16.bRequest = VAR_7;
   FUNC_1(VAR_16.wValue, VAR_9);
   FUNC_1(VAR_16.wIndex, (*(int *)VAR_12));
   FUNC_1(VAR_16.wLength, 0);

   if (FUNC_2(VAR_15->sc_udev, &VAR_15->sc_ucom,
       &VAR_16, ((void*)0), 0, 1000)) {
    FUNC_0("Set LATCH failed\n");
    VAR_17 = VAR_0;
   }
  } else
   VAR_17 = VAR_1;
  break;

 default:
  FUNC_0("Unknown IOCTL\n");
  VAR_17 = VAR_2;
  break;
 }
 return (VAR_17);
}
