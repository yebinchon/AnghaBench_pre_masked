
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct mos_softc {int mos_link; } ;
struct mii_data {int mii_media_status; int mii_media_active; } ;


 struct mii_data* FUNC_0 (struct mos_softc*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct mos_softc*,int ) ;
 int FUNC_4 (struct mii_data*) ;
 int FUNC_5 (struct usb_ether*) ;
 struct mos_softc* FUNC_6 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_7(struct usb_ether *VAR_3)
{
 struct mos_softc *VAR_4 = FUNC_6(VAR_3);
 struct mii_data *VAR_5 = FUNC_0(VAR_4);

 FUNC_3(VAR_4, VAR_2);

 FUNC_4(VAR_5);
 if (!VAR_4->mos_link && VAR_5->mii_media_status & VAR_0 &&
     FUNC_1(VAR_5->mii_media_active) != VAR_1) {
  FUNC_2("got link");
  VAR_4->mos_link++;
  FUNC_5(VAR_3);
 }
}
