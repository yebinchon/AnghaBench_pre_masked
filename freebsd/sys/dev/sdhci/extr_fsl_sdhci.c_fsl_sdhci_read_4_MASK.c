
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sdhci_slot {int dummy; } ;
struct fsl_sdhci_softc {int r1bfix_intmask; } ;
typedef int device_t ;
typedef int bus_size_t ;


 int FUNC_0 (struct fsl_sdhci_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct fsl_sdhci_softc* FUNC_1 (int ) ;

__attribute__((used)) static uint32_t
FUNC_2(device_t VAR_8, struct sdhci_slot *VAR_9, bus_size_t VAR_10)
{
 struct fsl_sdhci_softc *VAR_11 = FUNC_1(VAR_8);
 uint32_t VAR_12, VAR_13;

 VAR_12 = FUNC_0(VAR_11, VAR_10);
 if (VAR_10 == VAR_3) {
  VAR_12 &= ~VAR_2;
  VAR_12 &= ~VAR_1;
  VAR_12 |= VAR_0;
  return (VAR_12);
 }
 if (VAR_10 == VAR_5) {
  VAR_13 = VAR_12;
  VAR_12 &= 0x000F0F07;
  VAR_12 |= (VAR_13 >> 4) & VAR_7;
  VAR_12 |= (VAR_13 >> 9) & VAR_6;
  return (VAR_12);
 }





 if (VAR_10 == VAR_4) {
  return (VAR_12 | VAR_11->r1bfix_intmask);
 }

 return VAR_12;
}
