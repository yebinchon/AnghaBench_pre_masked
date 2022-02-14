
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct aue_softc {int sc_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct aue_softc*,int ) ;
 struct mii_data* FUNC_1 (struct aue_softc*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (struct usb_ether*) ;
 int FUNC_4 (struct mii_data*) ;
 struct aue_softc* FUNC_5 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_6(struct usb_ether *VAR_4)
{
 struct aue_softc *VAR_5 = FUNC_5(VAR_4);
 struct mii_data *VAR_6 = FUNC_1(VAR_5);

 FUNC_0(VAR_5, VAR_3);

 FUNC_4(VAR_6);
 if ((VAR_5->sc_flags & VAR_0) == 0
     && VAR_6->mii_media_status & VAR_1 &&
     FUNC_2(VAR_6->mii_media_active) != VAR_2) {
  VAR_5->sc_flags |= VAR_0;
  FUNC_3(VAR_4);
 }
}
