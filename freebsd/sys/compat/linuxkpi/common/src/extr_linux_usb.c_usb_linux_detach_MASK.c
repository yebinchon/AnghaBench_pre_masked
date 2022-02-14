
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * le_prev; } ;
struct usb_linux_softc {int sc_ui; int sc_fbsd_udev; struct usb_driver* sc_udrv; TYPE_1__ sc_attached_list; } ;
struct usb_driver {int (* disconnect ) (int ) ;} ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct usb_linux_softc*,int ) ;
 struct usb_linux_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 struct usb_linux_softc *VAR_3 = FUNC_1(VAR_2);
 struct usb_driver *VAR_4 = ((void*)0);

 FUNC_2(&VAR_0);
 if (VAR_3->sc_attached_list.le_prev) {
  FUNC_0(VAR_3, VAR_1);
  VAR_3->sc_attached_list.le_prev = ((void*)0);
  VAR_4 = VAR_3->sc_udrv;
  VAR_3->sc_udrv = ((void*)0);
 }
 FUNC_3(&VAR_0);

 if (VAR_4 && VAR_4->disconnect) {
  (VAR_4->disconnect) (VAR_3->sc_ui);
 }





 FUNC_5(VAR_3->sc_fbsd_udev, VAR_3->sc_ui);
 return (0);
}
