
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cpswp_softc {int phyaccess; int swsc; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ) ;
 struct cpswp_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2, int VAR_3, int VAR_4)
{
 struct cpswp_softc *VAR_5;
 uint32_t VAR_6, VAR_7;

 VAR_5 = FUNC_3(VAR_2);
 if (!FUNC_2(VAR_5->swsc, VAR_5->phyaccess)) {
  FUNC_4(VAR_2, "MDIO not ready to read\n");
  return (0);
 }


 VAR_6 = VAR_1 | (VAR_4 & 0x1F) << 21 | (VAR_3 & 0x1F) << 16;
 FUNC_1(VAR_5->swsc, VAR_5->phyaccess, VAR_6);

 if (!FUNC_2(VAR_5->swsc, VAR_5->phyaccess)) {
  FUNC_4(VAR_2, "MDIO timed out during read\n");
  return (0);
 }

 VAR_7 = FUNC_0(VAR_5->swsc, VAR_5->phyaccess);
 if ((VAR_7 & VAR_0) == 0) {
  FUNC_4(VAR_2, "Failed to read from PHY.\n");
  VAR_7 = 0;
 }
 return (VAR_7 & 0xFFFF);
}
