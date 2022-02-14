
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct fsl_sdhci_softc*,int,int) ;
 struct fsl_sdhci_softc* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_17, struct sdhci_slot *VAR_18, bus_size_t VAR_19, uint8_t VAR_20)
{
 struct fsl_sdhci_softc *VAR_21 = FUNC_2(VAR_17);
 uint32_t VAR_22;






 if (VAR_19 == VAR_7) {
  VAR_22 = FUNC_0(VAR_21, VAR_12);
  VAR_22 &= ~(VAR_14 | VAR_13 |
      VAR_16 | VAR_11 | VAR_10);
  VAR_22 |= (VAR_20 & VAR_5);
  if (VAR_20 & VAR_1)
   VAR_22 |= VAR_15;
  else
   VAR_22 |= (VAR_20 & VAR_0);
  VAR_22 |= (VAR_20 & (VAR_6 | VAR_2)) << 4;
  VAR_22 |= (VAR_20 & (VAR_3 | VAR_4));
  FUNC_1(VAR_21, VAR_12, VAR_22);
  return;
 }


 if (VAR_19 == VAR_8) {
  return;
 }






 VAR_22 = FUNC_0(VAR_21, VAR_19 & ~3);
 VAR_22 &= ~(0xff << (VAR_19 & 3) * 8);
 VAR_22 |= (VAR_20 << (VAR_19 & 3) * 8);

 FUNC_1(VAR_21, VAR_19 & ~3, VAR_22);
}
