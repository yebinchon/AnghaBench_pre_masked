
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smc_softc {int smc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int VAR_4 ;
 int FUNC_1 (struct smc_softc*) ;
 int FUNC_2 (int ) ;
 struct smc_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct smc_softc*,int ,int,int) ;
 int FUNC_5 (struct smc_softc*,int ) ;
 int FUNC_6 (struct smc_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(device_t VAR_5, uint32_t VAR_6)
{
 struct smc_softc *VAR_7;

 VAR_7 = FUNC_3(VAR_5);

 FUNC_1(VAR_7);
 FUNC_0((FUNC_5(VAR_7, VAR_0) & VAR_1) == 3,
     ("%s: smc_mii_bitbang_write called with bank %d (!= 3)",
     FUNC_2(VAR_7->smc_dev),
     FUNC_5(VAR_7, VAR_0) & VAR_1));

 FUNC_6(VAR_7, VAR_4, VAR_6);
 FUNC_4(VAR_7, VAR_4, 2,
     VAR_2 | VAR_3);
}
