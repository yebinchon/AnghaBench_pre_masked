
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int ue_dev; } ;
struct mii_data {int dummy; } ;
struct axe_softc {int sc_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct axe_softc*,int ) ;
 struct mii_data* FUNC_1 (struct axe_softc*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct usb_ether*) ;
 int FUNC_4 (struct mii_data*) ;
 struct axe_softc* FUNC_5 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_6(struct usb_ether *VAR_2)
{
 struct axe_softc *VAR_3 = FUNC_5(VAR_2);
 struct mii_data *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_3, VAR_1);

 FUNC_4(VAR_4);
 if ((VAR_3->sc_flags & VAR_0) == 0) {
  FUNC_2(VAR_2->ue_dev);
  if ((VAR_3->sc_flags & VAR_0) != 0)
   FUNC_3(VAR_2);
 }
}
