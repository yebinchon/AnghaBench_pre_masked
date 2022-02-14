
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_linux_softc {int sc_ui; } ;
struct usb_driver {int (* resume ) (int ) ;} ;
typedef int device_t ;


 struct usb_linux_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct usb_driver* FUNC_2 (struct usb_linux_softc*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
 struct usb_linux_softc *VAR_1 = FUNC_0(VAR_0);
 struct usb_driver *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 if (VAR_2 && VAR_2->resume) {
  VAR_3 = (VAR_2->resume) (VAR_1->sc_ui);
 }
 return (0);
}
