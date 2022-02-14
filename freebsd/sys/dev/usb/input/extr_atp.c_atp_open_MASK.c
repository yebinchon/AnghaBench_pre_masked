
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_fifo {int dummy; } ;
struct atp_softc {int sc_fflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct atp_softc*) ;
 scalar_t__ FUNC_1 (struct usb_fifo*,int ,int ) ;
 struct atp_softc* FUNC_2 (struct usb_fifo*) ;

__attribute__((used)) static int
FUNC_3(struct usb_fifo *VAR_6, int VAR_7)
{
 struct atp_softc *VAR_8 = FUNC_2(VAR_6);


 if (VAR_8->sc_fflags & VAR_7)
  return (VAR_2);


 if (VAR_8->sc_fflags == 0) {
  int VAR_9;
  if ((VAR_9 = FUNC_0(VAR_8)) != 0)
   return (VAR_9);
 }

 if (VAR_7 & VAR_4) {
  if (FUNC_1(VAR_6,
      VAR_0, VAR_1)) {
   return (VAR_3);
  }
 }

 VAR_8->sc_fflags |= (VAR_7 & (VAR_4 | VAR_5));
 return (0);
}
