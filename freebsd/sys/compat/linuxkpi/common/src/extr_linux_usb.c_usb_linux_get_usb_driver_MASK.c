
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_linux_softc {struct usb_driver* sc_udrv; } ;
struct usb_driver {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct usb_driver *
FUNC_2(struct usb_linux_softc *VAR_1)
{
 struct usb_driver *VAR_2;

 FUNC_0(&VAR_0);
 VAR_2 = VAR_1->sc_udrv;
 FUNC_1(&VAR_0);
 return (VAR_2);
}
