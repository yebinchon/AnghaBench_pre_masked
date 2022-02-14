
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct sdhci_slot {int dummy; } ;
struct fsl_sdhci_softc {scalar_t__ hwtype; int cmd_and_mode; } ;
typedef int device_t ;
typedef int bus_size_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct fsl_sdhci_softc*,int) ;
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
 struct fsl_sdhci_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct fsl_sdhci_softc*) ;

__attribute__((used)) static uint16_t
FUNC_3(device_t VAR_12, struct sdhci_slot *VAR_13, bus_size_t VAR_14)
{
 struct fsl_sdhci_softc *VAR_15 = FUNC_1(VAR_12);
 uint32_t VAR_16;

 if (VAR_15->hwtype == VAR_1) {




  if (VAR_14 == VAR_4) {
   return (VAR_8 << VAR_9);
  }




  if (VAR_14 == VAR_10)
   return (FUNC_0(VAR_15, VAR_11) & 0x37);

 } else if (VAR_15->hwtype == VAR_0) {







  if (VAR_14 == VAR_10) {
   return (VAR_15->cmd_and_mode & 0x0000ffff);
  } else if (VAR_14 == VAR_3) {
   return (VAR_15->cmd_and_mode >> 16);
  }
 }






 if (VAR_14 == VAR_7) {
  VAR_16 = FUNC_0(VAR_15, VAR_5);
  VAR_16 &= FUNC_0(VAR_15, VAR_6);
  return (VAR_16 ? 1 : 0);
 }





 if (VAR_14 == VAR_2) {
  return (FUNC_2(VAR_15));
 }

 return ((FUNC_0(VAR_15, VAR_14 & ~3) >> (VAR_14 & 3) * 8) & 0xffff);
}
