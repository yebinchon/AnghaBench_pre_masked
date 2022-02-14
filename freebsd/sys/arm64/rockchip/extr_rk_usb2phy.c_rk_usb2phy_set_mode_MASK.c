
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_usb2phy_softc {int mode; } ;
struct phynode {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 intptr_t VAR_1 ;
 struct rk_usb2phy_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct phynode*) ;
 intptr_t FUNC_2 (struct phynode*) ;

__attribute__((used)) static int
FUNC_3(struct phynode *VAR_2, int VAR_3)
{
 struct rk_usb2phy_softc *VAR_4;
 intptr_t VAR_5;
 device_t VAR_6;

 VAR_6 = FUNC_1(VAR_2);
 VAR_5 = FUNC_2(VAR_2);
 VAR_4 = FUNC_0(VAR_6);

 if (VAR_5 != VAR_1)
  return (VAR_0);

 VAR_4->mode = VAR_3;

 return (0);
}
