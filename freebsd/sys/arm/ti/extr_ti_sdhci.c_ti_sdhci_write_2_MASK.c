
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
 int FUNC_1 (struct ti_sdhci_softc*,int,int) ;
 struct ti_sdhci_softc* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_11, struct sdhci_slot *VAR_12, bus_size_t VAR_13,
    uint16_t VAR_14)
{
 struct ti_sdhci_softc *VAR_15 = FUNC_2(VAR_11);
 uint32_t VAR_16, VAR_17;






 if (VAR_13 == VAR_2) {
  VAR_16 = (VAR_14 >> VAR_8) & VAR_6;
  if (VAR_12->version >= VAR_9)
   VAR_16 |= ((VAR_14 >> VAR_5) &
       VAR_4) << VAR_7;
  VAR_16 *= 2;
  if (VAR_16 > VAR_0)
   VAR_16 = VAR_0;
  VAR_17 = FUNC_0(VAR_15, VAR_2);
  VAR_17 &= 0xffff0000;
  VAR_17 |= VAR_14 & ~(VAR_0 <<
      VAR_1);
  VAR_17 |= VAR_16 << VAR_1;
  FUNC_1(VAR_15, VAR_2, VAR_17);
  return;
 }




 if (VAR_13 == VAR_10) {
  VAR_15->cmd_and_mode = (VAR_15->cmd_and_mode & 0xffff0000) |
      ((uint32_t)VAR_14 & 0x0000ffff);
  return;
 } else if (VAR_13 == VAR_3) {
  VAR_15->cmd_and_mode = (VAR_15->cmd_and_mode & 0x0000ffff) |
      ((uint32_t)VAR_14 << 16);
  FUNC_1(VAR_15, VAR_10, VAR_15->cmd_and_mode);
  return;
 }

 VAR_17 = FUNC_0(VAR_15, VAR_13 & ~3);
 VAR_17 &= ~(0xffff << (VAR_13 & 3) * 8);
 VAR_17 |= ((VAR_14 & 0xffff) << (VAR_13 & 3) * 8);
 FUNC_1(VAR_15, VAR_13 & ~3, VAR_17);
}
