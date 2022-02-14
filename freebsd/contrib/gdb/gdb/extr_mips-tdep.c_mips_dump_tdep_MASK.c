
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct gdbarch_tdep {int elf_flags; size_t mips_abi; int default_mask_address_p; } ;
struct gdbarch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;




 long VAR_8 ;
 long VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 long VAR_10 ;
 long VAR_11 ;
 long VAR_12 ;
 long VAR_13 ;
 long VAR_14 ;
 int VAR_15 ;
 long VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 long VAR_21 ;
 int VAR_22 ;
 long VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 long VAR_28 ;
 long VAR_29 ;
 long VAR_30 ;
 int VAR_31 ;
 long VAR_32 ;
 long VAR_33 ;
 long VAR_34 ;
 int FUNC_6 (int ,int ) ;
 int VAR_35 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 long FUNC_9 () ;
 int FUNC_10 (int ) ;
 long VAR_36 ;
 int VAR_37 ;
 int FUNC_11 (int ) ;
 long VAR_38 ;
 int FUNC_12 (int ) ;
 long VAR_39 ;
 int FUNC_13 (int ,int ,int ) ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_14 (int ,int ) ;
 long VAR_42 ;
 long VAR_43 ;
 int FUNC_15 (int ,int ) ;
 int VAR_44 ;
 long VAR_45 ;
 long VAR_46 ;
 scalar_t__ VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 long FUNC_16 (int ) ;
 long VAR_50 ;
 long VAR_51 ;
 int FUNC_17 (struct ui_file*,char*,...) ;
 struct gdbarch_tdep* FUNC_18 (struct gdbarch*) ;
 int * VAR_52 ;
 int FUNC_19 (struct gdbarch_tdep*) ;
 long FUNC_20 (struct gdbarch_tdep*) ;
 long FUNC_21 (struct gdbarch_tdep*) ;

__attribute__((used)) static void
FUNC_22 (struct gdbarch *VAR_53, struct ui_file *VAR_54)
{
  struct gdbarch_tdep *VAR_55 = FUNC_18 (VAR_53);
  if (VAR_55 != ((void*)0))
    {
      int VAR_56;
      int VAR_57;

      switch (VAR_55->elf_flags & VAR_7)
 {
 case 131:
   VAR_56 = 1;
   break;
 case 130:
   VAR_56 = 2;
   break;
 case 129:
   VAR_56 = 3;
   break;
 case 128:
   VAR_56 = 4;
   break;
 default:
   VAR_56 = 0;
   break;
 }

      VAR_57 = (VAR_55->elf_flags & VAR_6);
      FUNC_17 (VAR_54,
     "mips_dump_tdep: tdep->elf_flags = 0x%x\n",
     VAR_55->elf_flags);
      FUNC_17 (VAR_54,
     "mips_dump_tdep: ef_mips_32bitmode = %d\n",
     VAR_57);
      FUNC_17 (VAR_54,
     "mips_dump_tdep: ef_mips_arch = %d\n",
     VAR_56);
      FUNC_17 (VAR_54,
     "mips_dump_tdep: tdep->mips_abi = %d (%s)\n",
     VAR_55->mips_abi, VAR_52[VAR_55->mips_abi]);
      FUNC_17 (VAR_54,
     "mips_dump_tdep: mips_mask_address_p() %d (default %d)\n",
     FUNC_19 (VAR_55),
     VAR_55->default_mask_address_p);
    }
  FUNC_17 (VAR_54,
        "mips_dump_tdep: FP_REGISTER_DOUBLE = %d\n",
        VAR_9);
  FUNC_17 (VAR_54,
        "mips_dump_tdep: MIPS_DEFAULT_FPU_TYPE = %d (%s)\n",
        VAR_15,
        (VAR_15 == VAR_18 ? "none"
         : VAR_15 == VAR_19 ? "single"
         : VAR_15 == VAR_17 ? "double"
         : "???"));
  FUNC_17 (VAR_54, "mips_dump_tdep: MIPS_EABI = %d\n", VAR_16);
  FUNC_17 (VAR_54,
        "mips_dump_tdep: MIPS_FPU_TYPE = %d (%s)\n",
        VAR_20,
        (VAR_20 == VAR_18 ? "none"
         : VAR_20 == VAR_19 ? "single"
         : VAR_20 == VAR_17 ? "double"
         : "???"));
  FUNC_17 (VAR_54,
        "mips_dump_tdep: FP_REGISTER_DOUBLE = %d\n",
        VAR_9);
  FUNC_17 (VAR_54,
        "mips_dump_tdep: mips_stack_argsize() = %d\n",
        FUNC_21 (VAR_55));
  FUNC_17 (VAR_54, "mips_dump_tdep: A0_REGNUM = %d\n", VAR_0);
  FUNC_17 (VAR_54,
        "mips_dump_tdep: ADDR_BITS_REMOVE # %s\n",
        FUNC_16 (FUNC_0 (VAR_1)));
  FUNC_17 (VAR_54,
        "mips_dump_tdep: ATTACH_DETACH # %s\n",
        FUNC_16 (VAR_3));
  FUNC_17 (VAR_54,
        "mips_dump_tdep: DWARF_REG_TO_REGNUM # %s\n",
        FUNC_16 (FUNC_1 (VAR_31)));
  FUNC_17 (VAR_54,
        "mips_dump_tdep: ECOFF_REG_TO_REGNUM # %s\n",
        FUNC_16 (FUNC_2 (VAR_31)));
  FUNC_17 (VAR_54,
        "mips_dump_tdep: FIRST_EMBED_REGNUM = %d\n",
        VAR_8);
  FUNC_17 (VAR_54,
        "mips_dump_tdep: IGNORE_HELPER_CALL # %s\n",
        FUNC_16 (FUNC_3 (VAR_27)));
  FUNC_17 (VAR_54,
        "mips_dump_tdep: IN_SOLIB_CALL_TRAMPOLINE # %s\n",
        FUNC_16 (FUNC_4 (VAR_27, VAR_24)));
  FUNC_17 (VAR_54,
        "mips_dump_tdep: IN_SOLIB_RETURN_TRAMPOLINE # %s\n",
        FUNC_16 (FUNC_5 (VAR_27, VAR_24)));
  FUNC_17 (VAR_54,
        "mips_dump_tdep: LAST_EMBED_REGNUM = %d\n",
        VAR_10);
  FUNC_17 (VAR_54,
        "mips_dump_tdep: MIPS16_INSTLEN = %d\n",
        VAR_14);
  FUNC_17 (VAR_54, "mips_dump_tdep: MIPS_DEFAULT_ABI = FIXME!\n");
  FUNC_17 (VAR_54,
        "mips_dump_tdep: MIPS_EFI_SYMBOL_NAME = multi-arch!!\n");
  FUNC_17 (VAR_54,
        "mips_dump_tdep: MIPS_INSTLEN = %d\n", VAR_21);
  FUNC_17 (VAR_54,
        "mips_dump_tdep: MIPS_LAST_ARG_REGNUM = %d (%d regs)\n",
        VAR_22,
        VAR_22 - VAR_0 + 1);
  FUNC_17 (VAR_54,
        "mips_dump_tdep: MIPS_NUMREGS = %d\n", VAR_23);
  FUNC_17 (VAR_54,
        "mips_dump_tdep: mips_saved_regsize() = %d\n",
        FUNC_20 (VAR_55));
  FUNC_17 (VAR_54,
        "mips_dump_tdep: PRID_REGNUM = %d\n", VAR_28);
  FUNC_17 (VAR_54,
        "mips_dump_tdep: PROC_DESC_IS_DUMMY = function?\n");
  FUNC_17 (VAR_54,
        "mips_dump_tdep: PROC_FRAME_ADJUST = function?\n");
  FUNC_17 (VAR_54,
        "mips_dump_tdep: PROC_FRAME_OFFSET = function?\n");
  FUNC_17 (VAR_54, "mips_dump_tdep: PROC_FRAME_REG = function?\n");
  FUNC_17 (VAR_54, "mips_dump_tdep: PROC_FREG_MASK = function?\n");
  FUNC_17 (VAR_54, "mips_dump_tdep: PROC_FREG_OFFSET = function?\n");
  FUNC_17 (VAR_54, "mips_dump_tdep: PROC_HIGH_ADDR = function?\n");
  FUNC_17 (VAR_54, "mips_dump_tdep: PROC_LOW_ADDR = function?\n");
  FUNC_17 (VAR_54, "mips_dump_tdep: PROC_PC_REG = function?\n");
  FUNC_17 (VAR_54, "mips_dump_tdep: PROC_REG_MASK = function?\n");
  FUNC_17 (VAR_54, "mips_dump_tdep: PROC_REG_OFFSET = function?\n");
  FUNC_17 (VAR_54, "mips_dump_tdep: PROC_SYMBOL = function?\n");
  FUNC_17 (VAR_54, "mips_dump_tdep: PS_REGNUM = %d\n", VAR_29);
  FUNC_17 (VAR_54, "mips_dump_tdep: RA_REGNUM = %d\n", VAR_30);
  FUNC_17 (VAR_54,
        "mips_dump_tdep: SETUP_ARBITRARY_FRAME # %s\n",
        FUNC_16 (FUNC_6 (VAR_25, VAR_2)));
  FUNC_17 (VAR_54,
        "mips_dump_tdep: SET_PROC_DESC_IS_DUMMY = function?\n");
  FUNC_17 (VAR_54,
        "mips_dump_tdep: SKIP_TRAMPOLINE_CODE # %s\n",
        FUNC_16 (FUNC_7 (VAR_27)));
  FUNC_17 (VAR_54,
        "mips_dump_tdep: SOFTWARE_SINGLE_STEP # %s\n",
        FUNC_16 (FUNC_8 (VAR_35, VAR_4)));
  FUNC_17 (VAR_54,
        "mips_dump_tdep: SOFTWARE_SINGLE_STEP_P () = %d\n",
        FUNC_9 ());
  FUNC_17 (VAR_54,
        "mips_dump_tdep: STAB_REG_TO_REGNUM # %s\n",
        FUNC_16 (FUNC_10 (VAR_31)));





  FUNC_17 (VAR_54,
        "mips_dump_tdep: STEP_SKIPS_DELAY # %s\n",
        FUNC_16 (FUNC_11 (VAR_27)));
  FUNC_17 (VAR_54,
        "mips_dump_tdep: STEP_SKIPS_DELAY_P = %d\n",
        VAR_38);
  FUNC_17 (VAR_54,
        "mips_dump_tdep: STOPPED_BY_WATCHPOINT # %s\n",
        FUNC_16 (FUNC_12 (VAR_48)));
  FUNC_17 (VAR_54, "mips_dump_tdep: T9_REGNUM = %d\n", VAR_39);
  FUNC_17 (VAR_54,
        "mips_dump_tdep: TABULAR_REGISTER_OUTPUT = used?\n");
  FUNC_17 (VAR_54,
        "mips_dump_tdep: TARGET_CAN_USE_HARDWARE_WATCHPOINT # %s\n",
        FUNC_16 (FUNC_13
          (VAR_44, VAR_5, VAR_26)));
  FUNC_17 (VAR_54,
        "mips_dump_tdep: TARGET_HAS_HARDWARE_WATCHPOINTS # %s\n",
        FUNC_16 (VAR_40));
  FUNC_17 (VAR_54, "mips_dump_tdep: V0_REGNUM = %d\n", VAR_46);
  FUNC_17 (VAR_54,
        "mips_dump_tdep: VM_MIN_ADDRESS = %ld\n",
        (long) VAR_47);
  FUNC_17 (VAR_54,
        "mips_dump_tdep: ZERO_REGNUM = %d\n", VAR_50);
  FUNC_17 (VAR_54,
        "mips_dump_tdep: _PROC_MAGIC_ = %d\n", VAR_51);
}
