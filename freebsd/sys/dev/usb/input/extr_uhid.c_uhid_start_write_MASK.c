
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_fifo {int dummy; } ;
struct uhid_softc {int sc_flags; int ** sc_xfer; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct uhid_softc* FUNC_0 (struct usb_fifo*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct usb_fifo *VAR_3)
{
 struct uhid_softc *VAR_4 = FUNC_0(VAR_3);

 if ((VAR_4->sc_flags & VAR_1) ||
     VAR_4->sc_xfer[VAR_2] == ((void*)0)) {
  FUNC_1(VAR_4->sc_xfer[VAR_0]);
 } else {
  FUNC_1(VAR_4->sc_xfer[VAR_2]);
 }
}
