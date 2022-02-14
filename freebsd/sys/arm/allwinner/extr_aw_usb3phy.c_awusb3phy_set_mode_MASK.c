
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phynode {int dummy; } ;
struct awusb3phy_softc {int mode; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct awusb3phy_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct phynode*) ;
 intptr_t FUNC_2 (struct phynode*) ;

__attribute__((used)) static int
FUNC_3(struct phynode *VAR_2, int VAR_3)
{
 device_t VAR_4;
 intptr_t VAR_5;
 struct awusb3phy_softc *VAR_6;

 VAR_4 = FUNC_1(VAR_2);
 VAR_5 = FUNC_2(VAR_2);
 VAR_6 = FUNC_0(VAR_4);

 if (VAR_3 != VAR_1)
  return (VAR_0);

 VAR_6->mode = VAR_3;

 return (0);
}
