
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_fifo {int dummy; } ;
struct uled_softc {int sc_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uled_softc*) ;
 struct uled_softc* FUNC_1 (struct usb_fifo*) ;

__attribute__((used)) static int
FUNC_2(struct usb_fifo *VAR_3, int VAR_4)
{
 if (VAR_4 & VAR_1) {
  struct uled_softc *VAR_5;
  int VAR_6;

  VAR_5 = FUNC_1(VAR_3);
  if (VAR_5->sc_state & VAR_2)
   return (VAR_0);
  if ((VAR_6 = FUNC_0(VAR_5)) != 0)
   return (VAR_6);
 }
 return (0);
}
