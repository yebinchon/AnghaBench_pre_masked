
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atse_softc {int atse_phy_addr; } ;
typedef int device_t ;


 int FUNC_0 (struct atse_softc*,int,int) ;
 struct atse_softc* FUNC_1 (int ) ;

int
FUNC_2(device_t VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 struct atse_softc *VAR_4;

 VAR_4 = FUNC_1(VAR_0);





 if (VAR_1 != VAR_4->atse_phy_addr) {
  return (0);
 }

 FUNC_0(VAR_4, VAR_2, VAR_3);
 return (0);
}
