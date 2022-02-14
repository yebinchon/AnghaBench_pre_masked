
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct usb_fifo {int dummy; } ;
struct usb_device_descriptor {int dummy; } ;
struct ubtbcmfw_softc {int sc_udev; } ;


 int VAR_0 ;

 int FUNC_0 (void*,int ,int) ;
 struct ubtbcmfw_softc* FUNC_1 (struct usb_fifo*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct usb_fifo *VAR_1, u_long VAR_2, void *VAR_3,
    int VAR_4)
{
 struct ubtbcmfw_softc *VAR_5 = FUNC_1(VAR_1);
 int VAR_6 = 0;

 switch (VAR_2) {
 case 128:
  FUNC_0(VAR_3, FUNC_2(VAR_5->sc_udev),
   sizeof(struct usb_device_descriptor));
  break;

 default:
  VAR_6 = VAR_0;
  break;
 }

 return (VAR_6);
}
