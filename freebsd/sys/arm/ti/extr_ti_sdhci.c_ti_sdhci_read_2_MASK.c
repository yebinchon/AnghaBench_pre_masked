
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct ti_sdhci_softc {int cmd_and_mode; } ;
struct sdhci_slot {scalar_t__ version; } ;
typedef int device_t ;
typedef int bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ti_sdhci_softc*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 struct ti_sdhci_softc* FUNC_1 (int ) ;

__attribute__((used)) static uint16_t
FUNC_2(device_t VAR_11, struct sdhci_slot *VAR_12, bus_size_t VAR_13)
{
 struct ti_sdhci_softc *VAR_14 = FUNC_1(VAR_11);
 uint32_t VAR_15, VAR_16;
 if (VAR_13 == VAR_2) {
  VAR_16 = FUNC_0(VAR_14, VAR_2);
  VAR_15 = ((VAR_16 >> VAR_1) &
      VAR_0) / 2;
  VAR_16 &= ~(VAR_0 << VAR_1);
  VAR_16 |= (VAR_15 & VAR_6) << VAR_8;
  if (VAR_12->version >= VAR_9)
   VAR_16 |= ((VAR_15 >> VAR_7) &
       VAR_4) << VAR_5;
  return (VAR_16 & 0xffff);
 }




 if (VAR_13 == VAR_10) {
  return (VAR_14->cmd_and_mode >> 16);
 } else if (VAR_13 == VAR_3) {
  return (VAR_14->cmd_and_mode & 0x0000ffff);
 }

 return ((FUNC_0(VAR_14, VAR_13 & ~3) >> (VAR_13 & 3) * 8) & 0xffff);
}
