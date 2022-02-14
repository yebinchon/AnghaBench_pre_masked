
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsp_softc {int sc_pollrate; int ** sc_xfer; } ;
struct usb_fifo {int dummy; } ;


 size_t VAR_0 ;
 struct wsp_softc* FUNC_0 (struct usb_fifo*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void
FUNC_4(struct usb_fifo *VAR_1)
{
 struct wsp_softc *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;


 VAR_3 = VAR_2->sc_pollrate;

 if (VAR_3 > 1000)
  VAR_3 = 1000;

 if ((VAR_3 > 0) && (VAR_2->sc_xfer[VAR_0] != ((void*)0))) {

  FUNC_2(VAR_2->sc_xfer[VAR_0]);

  FUNC_3(VAR_2->sc_xfer[VAR_0], 1000 / VAR_3);

  VAR_2->sc_pollrate = 0;
 }
 FUNC_1(VAR_2->sc_xfer[VAR_0]);
}
