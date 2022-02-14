
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_fifo {int dummy; } ;
struct uhid_snes_softc {int sc_fflags; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_fifo*) ;
 struct uhid_snes_softc* FUNC_1 (struct usb_fifo*) ;

__attribute__((used)) static void
FUNC_2(struct usb_fifo *VAR_1, int VAR_2)
{
 struct uhid_snes_softc *VAR_3 = FUNC_1(VAR_1);

 VAR_3->sc_fflags &= ~(VAR_2 & VAR_0);
 FUNC_0(VAR_1);
}
