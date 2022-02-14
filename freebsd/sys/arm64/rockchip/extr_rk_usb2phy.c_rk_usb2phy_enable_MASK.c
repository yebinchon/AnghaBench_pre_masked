
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_usb2phy_softc {scalar_t__ phy_supply; } ;
struct phynode {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 intptr_t VAR_2 ;
 struct rk_usb2phy_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (struct phynode*) ;
 intptr_t FUNC_3 (struct phynode*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct phynode *VAR_3, bool VAR_4)
{
 struct rk_usb2phy_softc *VAR_5;
 device_t VAR_6;
 intptr_t VAR_7;
 int VAR_8;

 VAR_6 = FUNC_2(VAR_3);
 VAR_7 = FUNC_3(VAR_3);
 VAR_5 = FUNC_0(VAR_6);

 if (VAR_7 != VAR_2)
  return (VAR_1);

 if (VAR_5->phy_supply) {
  if (VAR_4)
   VAR_8 = FUNC_5(VAR_5->phy_supply);
  else
   VAR_8 = FUNC_4(VAR_5->phy_supply);
  if (VAR_8 != 0) {
   FUNC_1(VAR_6, "Cannot %sable the regulator\n",
       VAR_4 ? "En" : "Dis");
   goto fail;
  }
 }

 return (0);
fail:
 return (VAR_0);
}
