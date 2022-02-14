
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_fifo {int dummy; } ;
struct ulpt_softc {scalar_t__ sc_fflags; } ;


 int FUNC_0 (struct ulpt_softc*) ;
 int FUNC_1 (struct usb_fifo*,int) ;
 struct ulpt_softc* FUNC_2 (struct usb_fifo*) ;

__attribute__((used)) static int
FUNC_3(struct usb_fifo *VAR_0, int VAR_1)
{
 struct ulpt_softc *VAR_2 = FUNC_2(VAR_0);



 if (VAR_2->sc_fflags == 0) {



  FUNC_0(VAR_2);
 }
 return (FUNC_1(VAR_0, VAR_1));
}
