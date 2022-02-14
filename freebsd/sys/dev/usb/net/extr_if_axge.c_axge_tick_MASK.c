
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct mii_data {int dummy; } ;
struct axge_softc {int dummy; } ;


 int FUNC_0 (struct axge_softc*,int ) ;
 struct mii_data* FUNC_1 (struct axge_softc*) ;
 int VAR_0 ;
 int FUNC_2 (struct mii_data*) ;
 struct axge_softc* FUNC_3 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_4(struct usb_ether *VAR_1)
{
 struct axge_softc *VAR_2;
 struct mii_data *VAR_3;

 VAR_2 = FUNC_3(VAR_1);
 VAR_3 = FUNC_1(VAR_2);
 FUNC_0(VAR_2, VAR_0);

 FUNC_2(VAR_3);
}
