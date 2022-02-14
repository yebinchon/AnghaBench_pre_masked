
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_fifo {int dummy; } ;
struct ums_softc {int sc_fflags; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct usb_fifo*) ;
 struct ums_softc* FUNC_2 (struct usb_fifo*) ;

__attribute__((used)) static void
FUNC_3(struct usb_fifo *VAR_2, int VAR_3)
{
 struct ums_softc *VAR_4 = FUNC_2(VAR_2);

 FUNC_0(2, "\n");

 if (VAR_3 & VAR_0)
  FUNC_1(VAR_2);

 VAR_4->sc_fflags &= ~(VAR_3 & (VAR_0 | VAR_1));
}
