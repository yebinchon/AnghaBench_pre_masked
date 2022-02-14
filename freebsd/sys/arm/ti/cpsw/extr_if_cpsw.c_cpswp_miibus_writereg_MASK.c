
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cpswp_softc {int phyaccess; int swsc; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ) ;
 struct cpswp_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 struct cpswp_softc *VAR_6;
 uint32_t VAR_7;

 VAR_6 = FUNC_2(VAR_2);
 if (!FUNC_1(VAR_6->swsc, VAR_6->phyaccess)) {
  FUNC_3(VAR_2, "MDIO not ready to write\n");
  return (0);
 }


 VAR_7 = VAR_0 | VAR_1 |
     (VAR_4 & 0x1F) << 21 | (VAR_3 & 0x1F) << 16 | (VAR_5 & 0xFFFF);
 FUNC_0(VAR_6->swsc, VAR_6->phyaccess, VAR_7);

 if (!FUNC_1(VAR_6->swsc, VAR_6->phyaccess)) {
  FUNC_3(VAR_2, "MDIO timed out during write\n");
  return (0);
 }

 return (0);
}
