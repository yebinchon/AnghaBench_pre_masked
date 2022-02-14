
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_fifo {int dummy; } ;
struct uhid_softc {int * sc_xfer; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct uhid_softc* FUNC_0 (struct usb_fifo*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct usb_fifo *VAR_2)
{
 struct uhid_softc *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_3->sc_xfer[VAR_0]);
 FUNC_1(VAR_3->sc_xfer[VAR_1]);
}
