
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_fifo {int dummy; } ;
struct ulpt_softc {int sc_fflags; struct usb_fifo** sc_fifo_open; int * sc_xfer; int sc_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct usb_fifo*,int ,int ) ;
 struct ulpt_softc* FUNC_3 (struct usb_fifo*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct usb_fifo *VAR_9, int VAR_10)
{
 struct ulpt_softc *VAR_11 = FUNC_3(VAR_9);

 if (VAR_11->sc_fflags & VAR_10) {
  return (VAR_0);
 }
 if (VAR_10 & VAR_2) {

  FUNC_0(&VAR_11->sc_mtx);
  FUNC_5(VAR_11->sc_xfer[VAR_4]);
  FUNC_1(&VAR_11->sc_mtx);
  if (FUNC_2(VAR_9,
      FUNC_4(VAR_11->sc_xfer[VAR_4]),
      VAR_6)) {
   return (VAR_1);
  }

  VAR_11->sc_fifo_open[VAR_7] = VAR_9;
 }
 if (VAR_10 & VAR_3) {

  FUNC_0(&VAR_11->sc_mtx);
  FUNC_5(VAR_11->sc_xfer[VAR_5]);
  FUNC_1(&VAR_11->sc_mtx);
  if (FUNC_2(VAR_9,
      FUNC_4(VAR_11->sc_xfer[VAR_5]),
      VAR_6)) {
   return (VAR_1);
  }

  VAR_11->sc_fifo_open[VAR_8] = VAR_9;
 }
 VAR_11->sc_fflags |= VAR_10 & (VAR_2 | VAR_3);
 return (0);
}
