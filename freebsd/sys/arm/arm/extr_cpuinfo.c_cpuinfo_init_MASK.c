
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int midr; int architecture; int revision; int implementer; int part_number; int patch; unsigned int mpidr; int revidr; int id_pfr0; int id_pfr1; int id_mmfr0; int id_mmfr2; int id_mmfr3; int id_isar0; int id_isar5; int outermost_shareability; int shareability_levels; int auxiliary_registers; int innermost_shareability; int mem_barrier; int coherent_walk; int maintenance_broadcast; int generic_timer_ext; int virtualization_ext; int security_ext; unsigned int mp_ext; int dcache_line_size; int icache_line_size; int dcache_line_mask; int icache_line_mask; int ctr; int clidr; int ccsidr; int id_isar4; int id_isar3; int id_isar2; int id_isar1; int id_mmfr1; int id_afr0; int id_dfr0; int tlbtr; int tcmtr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
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
 int FUNC_8 (char*,int *) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 int FUNC_26 () ;
 unsigned int FUNC_27 () ;
 int FUNC_28 () ;
 int FUNC_29 () ;
 int FUNC_30 () ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_1__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

void
FUNC_31(void)
{
 FUNC_8("hw.cpu.quirks.actlr_mask", &VAR_17);
 FUNC_8("hw.cpu.quirks.actlr_set", &VAR_18);

 VAR_19.midr = FUNC_26();

 if ((VAR_19.midr & VAR_2) == VAR_1) {
  if (FUNC_7(VAR_19.midr)) {

   VAR_19.midr = 0;
   return;
  }
  if (FUNC_6(VAR_19.midr)) {
   if ((VAR_19.midr & (1 << 23)) == 0) {

    VAR_19.midr = 0;
    return;
   }

   VAR_19.architecture = 1;
   VAR_19.revision = (VAR_19.midr >> 16) & 0x7F;
  } else {

   VAR_19.architecture = (VAR_19.midr >> 16) & 0x0F;
   VAR_19.revision = (VAR_19.midr >> 20) & 0x0F;
  }
 } else {

  VAR_19.architecture = (VAR_19.midr >> 16) & 0x0F;
  VAR_19.revision = (VAR_19.midr >> 20) & 0x0F;
 }

 VAR_19.implementer = (VAR_19.midr >> 24) & 0xFF;
 VAR_19.part_number = (VAR_19.midr >> 4) & 0xFFF;
 VAR_19.patch = VAR_19.midr & 0x0F;


 VAR_19.ctr = FUNC_11();
 VAR_19.tcmtr = FUNC_29();







 if (VAR_19.architecture != 0xF)
  return;
}
