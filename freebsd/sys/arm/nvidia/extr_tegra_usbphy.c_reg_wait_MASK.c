
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct usbphy_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct usbphy_softc*,int) ;

__attribute__((used)) static int
FUNC_2(struct usbphy_softc *VAR_1, uint32_t VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 1000; VAR_5++) {
  if ((FUNC_1(VAR_1, VAR_2) & VAR_3) == VAR_4)
   return (0);
  FUNC_0(10);
 }
 return (VAR_0);
}
