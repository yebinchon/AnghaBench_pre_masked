
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct sdhci_slot {int dummy; } ;
struct fsl_sdhci_softc {int dummy; } ;
typedef int device_t ;
typedef int bus_size_t ;


 int FUNC_0 (struct fsl_sdhci_softc*,int) ;
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
 struct fsl_sdhci_softc* FUNC_1 (int ) ;

__attribute__((used)) static uint8_t
FUNC_2(device_t VAR_14, struct sdhci_slot *VAR_15, bus_size_t VAR_16)
{
 struct fsl_sdhci_softc *VAR_17 = FUNC_1(VAR_14);
 uint32_t VAR_18, VAR_19;






 if (VAR_16 == VAR_7) {
  VAR_19 = FUNC_0(VAR_17, VAR_11);
  VAR_18 = VAR_19 & (VAR_6 | VAR_4 |
      VAR_5);
  switch (VAR_19 & VAR_13) {
  case 130:

   break;
  case 129:
   VAR_18 |= VAR_0;
   break;
  case 128:
   VAR_18 |= VAR_1;
   break;
  }
  switch (VAR_19 & VAR_12) {
  case 131:

   break;
  case 134:

   break;
  case 133:
   VAR_18 |= VAR_2;
   break;
  case 132:
   VAR_18 |= VAR_3;
   break;
  }
  return VAR_18;
 }





 if (VAR_16 == VAR_9) {
  return (VAR_10 | VAR_8);
 }


 return ((FUNC_0(VAR_17, VAR_16 & ~3) >> (VAR_16 & 3) * 8) & 0xff);
}
