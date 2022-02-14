
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_fifo {int dummy; } ;
struct urio_softc {int * sc_xfer; int sc_flags; int sc_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct usb_fifo*,int ,int ) ;
 struct urio_softc* FUNC_3 (struct usb_fifo*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct usb_fifo *VAR_8, int VAR_9)
{
 struct urio_softc *VAR_10 = FUNC_3(VAR_8);

 if (VAR_9 & VAR_1) {

  FUNC_0(&VAR_10->sc_mtx);
  VAR_10->sc_flags |= VAR_3;
  FUNC_1(&VAR_10->sc_mtx);

  if (FUNC_2(VAR_8,
      FUNC_4(VAR_10->sc_xfer[VAR_6]),
      VAR_5)) {
   return (VAR_0);
  }
 }
 if (VAR_9 & VAR_2) {

  VAR_10->sc_flags |= VAR_4;

  if (FUNC_2(VAR_8,
      FUNC_4(VAR_10->sc_xfer[VAR_7]),
      VAR_5)) {
   return (VAR_0);
  }
 }
 return (0);
}
