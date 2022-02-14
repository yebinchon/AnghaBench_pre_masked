
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct smc_softc {int smc_miibus; } ;
struct mii_data {int mii_media_active; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct smc_softc*) ;
 int FUNC_2 (struct smc_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct smc_softc*,int ) ;
 int FUNC_5 (struct smc_softc*,int ) ;
 int FUNC_6 (struct smc_softc*,int ,int ) ;

void
FUNC_7(device_t VAR_3)
{
 struct smc_softc *VAR_4;
 struct mii_data *VAR_5;
 uint16_t VAR_6;

 VAR_4 = FUNC_3(VAR_3);
 VAR_5 = FUNC_3(VAR_4->smc_miibus);

 FUNC_1(VAR_4);

 FUNC_5(VAR_4, 0);
 VAR_6 = FUNC_4(VAR_4, VAR_1);

 if ((FUNC_0(VAR_5->mii_media_active) & VAR_0) != 0)
  VAR_6 |= VAR_2;
 else
  VAR_6 &= ~VAR_2;

 FUNC_6(VAR_4, VAR_1, VAR_6);

 FUNC_2(VAR_4);
}
