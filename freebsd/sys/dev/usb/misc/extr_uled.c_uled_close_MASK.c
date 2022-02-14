
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_fifo {int dummy; } ;
struct uled_softc {int sc_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct uled_softc* FUNC_0 (struct usb_fifo*) ;

__attribute__((used)) static void
FUNC_1(struct usb_fifo *VAR_2, int VAR_3)
{
 if (VAR_3 & VAR_0) {
  struct uled_softc *VAR_4;

  VAR_4 = FUNC_0(VAR_2);
  VAR_4->sc_state &= ~VAR_1;
 }
}
