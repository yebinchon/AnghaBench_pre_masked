
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbphy_softc {scalar_t__ ifc_type; int dev; } ;
struct phynode {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct usbphy_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct phynode*) ;
 int FUNC_3 (struct usbphy_softc*) ;
 int FUNC_4 (struct usbphy_softc*) ;

__attribute__((used)) static int
FUNC_5(struct phynode *VAR_2, bool VAR_3)
{
 device_t VAR_4;
 struct usbphy_softc *VAR_5;
 int VAR_6 = 0;

 VAR_4 = FUNC_2(VAR_2);
 VAR_5 = FUNC_0(VAR_4);

 if (VAR_5->ifc_type != VAR_1) {
   FUNC_1(VAR_5->dev,
       "Only UTMI interface is supported.\n");
   return (VAR_0);
 }
 if (VAR_3)
  VAR_6 = FUNC_4(VAR_5);
 else
  VAR_6 = FUNC_3(VAR_5);

 return (VAR_6);
}
