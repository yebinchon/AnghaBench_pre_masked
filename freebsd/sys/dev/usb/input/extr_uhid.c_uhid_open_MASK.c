
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_fifo {int dummy; } ;
struct uhid_softc {scalar_t__ sc_osize; scalar_t__ sc_isize; int sc_mtx; int sc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct usb_fifo*,scalar_t__,int ) ;
 struct uhid_softc* FUNC_3 (struct usb_fifo*) ;

__attribute__((used)) static int
FUNC_4(struct usb_fifo *VAR_5, int VAR_6)
{
 struct uhid_softc *VAR_7 = FUNC_3(VAR_5);





 if (VAR_6 & VAR_1) {

  FUNC_0(&VAR_7->sc_mtx);
  VAR_7->sc_flags &= ~VAR_3;
  FUNC_1(&VAR_7->sc_mtx);

  if (FUNC_2(VAR_5,
      VAR_7->sc_isize + 1, VAR_4)) {
   return (VAR_0);
  }
 }
 if (VAR_6 & VAR_2) {
  if (FUNC_2(VAR_5,
      VAR_7->sc_osize + 1, VAR_4)) {
   return (VAR_0);
  }
 }
 return (0);
}
