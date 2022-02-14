
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy_softc {int * res; int bsh; int bst; int dev; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 struct usb_phy_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct usb_phy_softc*) ;
 int VAR_1 ;
 int FUNC_7 () ;
 int FUNC_8 (struct usb_phy_softc*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_2)
{
 struct usb_phy_softc *VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 VAR_3->dev = VAR_2;

 if (FUNC_1(VAR_2, VAR_1, VAR_3->res)) {
  FUNC_3(VAR_2, "could not allocate resources\n");
  return (VAR_0);
 }


 VAR_3->bst = FUNC_5(VAR_3->res[0]);
 VAR_3->bsh = FUNC_4(VAR_3->res[0]);

 FUNC_8(VAR_3);

 FUNC_7();

 FUNC_0(100);

 FUNC_6(VAR_3);

 return (0);
}
