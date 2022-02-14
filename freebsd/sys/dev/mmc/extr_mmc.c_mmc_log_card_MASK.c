
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_ivars {scalar_t__ bus_width; int sec_count; int erase_sector; scalar_t__ read_only; int quirks; int timings; int card_id_string; int rca; } ;
typedef enum mmc_bus_timing { ____Placeholder_mmc_bus_timing } mmc_bus_timing ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,int,...) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (struct mmc_ivars*,int) ;
 char* FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_5, struct mmc_ivars *VAR_6, int VAR_7)
{
 enum mmc_bus_timing VAR_8;

 FUNC_0(VAR_5, "Card at relative address 0x%04x%s:\n",
     VAR_6->rca, VAR_7 ? " added" : "");
 FUNC_0(VAR_5, " card: %s\n", VAR_6->card_id_string);
 for (VAR_8 = VAR_1; VAR_8 > VAR_2; VAR_8--) {
  if (FUNC_1(&VAR_6->timings, VAR_8))
   break;
 }
 FUNC_0(VAR_5, " quirks: %b\n", VAR_6->quirks, VAR_0);
 FUNC_0(VAR_5, " bus: %ubit, %uMHz (%s timing)\n",
     (VAR_6->bus_width == VAR_3 ? 1 :
     (VAR_6->bus_width == VAR_4 ? 4 : 8)),
     FUNC_2(VAR_6, VAR_8) / 1000000,
     FUNC_3(VAR_8));
 FUNC_0(VAR_5, " memory: %u blocks, erase sector %u blocks%s\n",
     VAR_6->sec_count, VAR_6->erase_sector,
     VAR_6->read_only ? ", read-only" : "");
}
