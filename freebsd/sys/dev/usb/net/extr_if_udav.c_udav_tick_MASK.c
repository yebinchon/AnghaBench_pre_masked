
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {struct udav_softc* ue_sc; } ;
struct udav_softc {int sc_flags; } ;
struct mii_data {int mii_media_status; int mii_media_active; } ;


 struct mii_data* FUNC_0 (struct udav_softc*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct udav_softc*,int ) ;
 int FUNC_3 (struct mii_data*) ;
 int FUNC_4 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_5(struct usb_ether *VAR_4)
{
 struct udav_softc *VAR_5 = VAR_4->ue_sc;
 struct mii_data *VAR_6 = FUNC_0(VAR_5);

 FUNC_2(VAR_5, VAR_2);

 FUNC_3(VAR_6);
 if ((VAR_5->sc_flags & VAR_3) == 0
     && VAR_6->mii_media_status & VAR_0 &&
     FUNC_1(VAR_6->mii_media_active) != VAR_1) {
  VAR_5->sc_flags |= VAR_3;
  FUNC_4(VAR_4);
 }
}
