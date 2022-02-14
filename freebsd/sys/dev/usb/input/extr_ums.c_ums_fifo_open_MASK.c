
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_fifo {int dummy; } ;
struct ums_softc {int sc_fflags; scalar_t__ sc_evflags; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ums_softc*) ;
 scalar_t__ FUNC_2 (struct usb_fifo*,int ,int ) ;
 struct ums_softc* FUNC_3 (struct usb_fifo*) ;

__attribute__((used)) static int
FUNC_4(struct usb_fifo *VAR_6, int VAR_7)
{
 struct ums_softc *VAR_8 = FUNC_3(VAR_6);

 FUNC_0(2, "\n");


 if (VAR_8->sc_fflags & VAR_7)
  return (VAR_0);






 if (VAR_8->sc_fflags == 0)
  FUNC_1(VAR_8);


 if (VAR_7 & VAR_2) {

  if (FUNC_2(VAR_6,
      VAR_4, VAR_5)) {
   return (VAR_1);
  }
 }

 VAR_8->sc_fflags |= VAR_7 & (VAR_2 | VAR_3);
 return (0);
}
