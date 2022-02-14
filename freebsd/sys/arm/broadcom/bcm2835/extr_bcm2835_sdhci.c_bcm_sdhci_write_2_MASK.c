
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct sdhci_slot {int dummy; } ;
struct bcm_sdhci_softc {int need_update_blk; int blksz_and_count; int cmd_and_mode; } ;
typedef int device_t ;
typedef int bus_size_t ;


 int FUNC_0 (struct bcm_sdhci_softc*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bcm_sdhci_softc*,int,int) ;
 struct bcm_sdhci_softc* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_4, struct sdhci_slot *VAR_5, bus_size_t VAR_6, uint16_t VAR_7)
{
 struct bcm_sdhci_softc *VAR_8 = FUNC_2(VAR_4);
 uint32_t VAR_9;
 if ((VAR_6 == VAR_1 || VAR_6 == VAR_0) &&
     VAR_8->need_update_blk)
  VAR_9 = VAR_8->blksz_and_count;
 else if (VAR_6 == VAR_2)
  VAR_9 = VAR_8->cmd_and_mode;
 else
  VAR_9 = FUNC_0(VAR_8, VAR_6 & ~3);

 VAR_9 &= ~(0xffff << (VAR_6 & 3)*8);
 VAR_9 |= (VAR_7 << (VAR_6 & 3)*8);

 if (VAR_6 == VAR_3)
  VAR_8->cmd_and_mode = VAR_9;
 else if (VAR_6 == VAR_1 || VAR_6 == VAR_0) {
  VAR_8->blksz_and_count = VAR_9;
  VAR_8->need_update_blk = 1;
 } else {
  if (VAR_6 == VAR_2) {

   if (VAR_8->need_update_blk) {
    FUNC_1(VAR_8, VAR_1, VAR_8->blksz_and_count);
    VAR_8->need_update_blk = 0;
   }

   VAR_8->cmd_and_mode = VAR_9;
  }
  FUNC_1(VAR_8, VAR_6 & ~3, VAR_9);
 }
}
