
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int ue_dev; } ;
struct muge_softc {int sc_flags; int sc_ue; } ;
struct mii_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct muge_softc*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mii_data*) ;
 int FUNC_3 (struct usb_ether*) ;
 struct mii_data* FUNC_4 (int *) ;
 struct muge_softc* FUNC_5 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_6(struct usb_ether *VAR_2)
{

 struct muge_softc *VAR_3 = FUNC_5(VAR_2);
 struct mii_data *VAR_4 = FUNC_4(&VAR_3->sc_ue);

 FUNC_0(VAR_3, VAR_0);

 FUNC_2(VAR_4);
 if ((VAR_3->sc_flags & VAR_1) == 0) {
  FUNC_1(VAR_2->ue_dev);
  if ((VAR_3->sc_flags & VAR_1) != 0)
   FUNC_3(VAR_2);
 }
}
