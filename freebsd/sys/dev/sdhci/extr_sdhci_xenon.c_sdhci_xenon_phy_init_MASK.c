
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sdhci_xenon_softc {int mem_res; scalar_t__ slow_mode; } ;
struct mmc_ios {int timing; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;





 int FUNC_2 (int ,int ,int) ;
 struct sdhci_xenon_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_5, struct mmc_ios *VAR_6)
{
 int VAR_7;
 struct sdhci_xenon_softc *VAR_8;
 uint32_t VAR_9;

  VAR_8 = FUNC_3(VAR_5);
 VAR_9 = FUNC_1(VAR_8->mem_res, VAR_1);
 VAR_9 |= VAR_3;
 switch (VAR_6->timing) {
 case 131:
 case 132:
 case 130:
 case 129:
 case 128:
  VAR_9 |= VAR_4;
  break;
 default:
  VAR_9 &= ~VAR_4;
 }
 if (VAR_8->slow_mode)
  VAR_9 |= VAR_4;
 FUNC_2(VAR_8->mem_res, VAR_1, VAR_9);

 VAR_9 = FUNC_1(VAR_8->mem_res, VAR_1);
 VAR_9 |= VAR_2;
 FUNC_2(VAR_8->mem_res, VAR_1, VAR_9);


 for (VAR_7 = 100; VAR_7 > 0; VAR_7--) {
  FUNC_0(100);

  VAR_9 = FUNC_1(VAR_8->mem_res, VAR_1);
  if ((VAR_9 & VAR_2) == 0)
   break;
 }

 if (VAR_7 == 0) {
  FUNC_4(VAR_5, "eMMC PHY failed to initialize\n");
  return (VAR_0);
 }

 return (0);
}
