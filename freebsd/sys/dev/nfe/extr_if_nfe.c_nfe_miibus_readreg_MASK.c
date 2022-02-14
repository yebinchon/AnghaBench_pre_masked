
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nfe_softc {int mii_phyaddr; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nfe_softc*,int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct nfe_softc*,int ) ;
 int VAR_6 ;
 int FUNC_3 (struct nfe_softc*,int ,int) ;
 struct nfe_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_7, int VAR_8, int VAR_9)
{
 struct nfe_softc *VAR_10 = FUNC_4(VAR_7);
 uint32_t VAR_11;
 int VAR_12;

 FUNC_3(VAR_10, VAR_5, 0xf);

 if (FUNC_2(VAR_10, VAR_2) & VAR_1) {
  FUNC_3(VAR_10, VAR_2, VAR_1);
  FUNC_0(100);
 }

 FUNC_3(VAR_10, VAR_2, (VAR_8 << VAR_0) | VAR_9);

 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  FUNC_0(100);
  if (!(FUNC_2(VAR_10, VAR_2) & VAR_1))
   break;
 }
 if (VAR_12 == VAR_6) {
  FUNC_1(VAR_10, 2, "timeout waiting for PHY\n");
  return 0;
 }

 if (FUNC_2(VAR_10, VAR_5) & VAR_4) {
  FUNC_1(VAR_10, 2, "could not read PHY\n");
  return 0;
 }

 VAR_11 = FUNC_2(VAR_10, VAR_3);
 if (VAR_11 != 0xffffffff && VAR_11 != 0)
  VAR_10->mii_phyaddr = VAR_8;

 FUNC_1(VAR_10, 2, "mii read phy %d reg 0x%x ret 0x%x\n", VAR_8, VAR_9, VAR_11);

 return (VAR_11);
}
