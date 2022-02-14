
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct sdhci_slot {int dummy; } ;
struct bcm_sdhci_softc {int blksz_and_count; int cmd_and_mode; scalar_t__ need_update_blk; } ;
typedef int device_t ;
typedef int bus_size_t ;


 int FUNC_0 (struct bcm_sdhci_softc*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bcm_sdhci_softc* FUNC_1 (int ) ;

__attribute__((used)) static uint16_t
FUNC_2(device_t VAR_4, struct sdhci_slot *VAR_5, bus_size_t VAR_6)
{
 struct bcm_sdhci_softc *VAR_7 = FUNC_1(VAR_4);
 uint32_t VAR_8;





 if ((VAR_6 == VAR_1 || VAR_6 == VAR_0) &&
     VAR_7->need_update_blk)
  VAR_8 = VAR_7->blksz_and_count;
 else if (VAR_6 == VAR_3 || VAR_6 == VAR_2)
  VAR_8 = VAR_7->cmd_and_mode;
 else
  VAR_8 = FUNC_0(VAR_7, VAR_6 & ~3);

 return ((VAR_8 >> (VAR_6 & 3)*8) & 0xffff);
}
