
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sdhci_xenon_softc {int znr; int zpr; int mem_res; } ;
struct mmc_ios {int timing; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (int ,int ) ;


 int VAR_31 ;

 int FUNC_1 (int ,int ,int) ;
 struct sdhci_xenon_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,struct mmc_ios*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_32, struct mmc_ios *VAR_33)
{
 struct sdhci_xenon_softc *VAR_34;
 uint32_t VAR_35;

  VAR_34 = FUNC_2(VAR_32);

 VAR_35 = FUNC_0(VAR_34->mem_res, VAR_14);
 VAR_35 |= (VAR_22 | VAR_21 |
  VAR_23 | VAR_25);

 VAR_35 |= VAR_20;
 FUNC_1(VAR_34->mem_res, VAR_14, VAR_35);


 VAR_35 = FUNC_0(VAR_34->mem_res, VAR_15);
 VAR_35 |= (VAR_7 | VAR_9);
 VAR_35 &= ~(VAR_6 | VAR_8);
 FUNC_1(VAR_34->mem_res, VAR_15, VAR_35);

 if (VAR_33->timing == VAR_31)
  return (FUNC_3(VAR_32, VAR_33));


 VAR_35 = FUNC_0(VAR_34->mem_res, VAR_17);
 VAR_35 &= ~VAR_27;
 FUNC_1(VAR_34->mem_res, VAR_17, VAR_35);






 VAR_35 = FUNC_0(VAR_34->mem_res, VAR_16);
 VAR_35 &= ~((VAR_28 << VAR_29) | VAR_30);
 VAR_35 |= ((VAR_34->znr << VAR_29) | VAR_34->zpr);
 FUNC_1(VAR_34->mem_res, VAR_16, VAR_35);


 VAR_35 = FUNC_0(VAR_34->mem_res, VAR_1);
 VAR_35 &= ~VAR_0;
 FUNC_1(VAR_34->mem_res, VAR_1, VAR_35);

 VAR_35 = FUNC_0(VAR_34->mem_res, VAR_12);
 switch (VAR_33->timing) {
 case 129:
  VAR_35 |= (VAR_4 << VAR_5) |
      VAR_2;
  VAR_35 &= ~VAR_3;
  break;
 case 128:
 case 130:
  VAR_35 |= (VAR_4 << VAR_5) |
      VAR_2 | VAR_3;
  break;
 default:
  VAR_35 &= ~((VAR_4 << VAR_5) |
      VAR_2);
  VAR_35 |= VAR_3;
 }
 FUNC_1(VAR_34->mem_res, VAR_12, VAR_35);


 VAR_35 = FUNC_0(VAR_34->mem_res, VAR_1);
 VAR_35 |= VAR_0;
 FUNC_1(VAR_34->mem_res, VAR_1, VAR_35);

 if (VAR_33->timing == 129)
  FUNC_1(VAR_34->mem_res, VAR_13,
      VAR_24);
 else {

  VAR_35 = FUNC_0(VAR_34->mem_res, VAR_26);
  VAR_35 &= ~(VAR_18 | VAR_19);
  FUNC_1(VAR_34->mem_res, VAR_26, VAR_35);


  VAR_35 = FUNC_0(VAR_34->mem_res, VAR_15);
  VAR_35 &= ~(VAR_10 | VAR_11);
  FUNC_1(VAR_34->mem_res, VAR_15, VAR_35);
 }

 return (FUNC_3(VAR_32, VAR_33));
}
