
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_fifo {int dummy; } ;
struct uhid_snes_softc {int * sc_transfer; } ;


 size_t VAR_0 ;
 struct uhid_snes_softc* FUNC_0 (struct usb_fifo*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct usb_fifo *VAR_1)
{
 struct uhid_snes_softc *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2->sc_transfer[VAR_0]);
}
