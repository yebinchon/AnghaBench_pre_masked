
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static void
FUNC_3 (void)
{
  if (VAR_4)
    {
      FUNC_2 (VAR_14, VAR_2, "__vr4120_divsi3");
      FUNC_2 (VAR_18, VAR_2, "__vr4120_modsi3");
    }

  if (VAR_5 && VAR_12)
    {
      FUNC_2 (VAR_6, VAR_1, "__mips16_addsf3");
      FUNC_2 (VAR_20, VAR_1, "__mips16_subsf3");
      FUNC_2 (VAR_19, VAR_1, "__mips16_mulsf3");
      FUNC_2 (VAR_14, VAR_1, "__mips16_divsf3");

      FUNC_2 (VAR_7, VAR_1, "__mips16_eqsf2");
      FUNC_2 (VAR_13, VAR_1, "__mips16_nesf2");
      FUNC_2 (VAR_9, VAR_1, "__mips16_gtsf2");
      FUNC_2 (VAR_8, VAR_1, "__mips16_gesf2");
      FUNC_2 (VAR_11, VAR_1, "__mips16_ltsf2");
      FUNC_2 (VAR_10, VAR_1, "__mips16_lesf2");

      FUNC_1 (VAR_16, VAR_2, VAR_1, "__mips16_fix_truncsfsi");
      FUNC_1 (VAR_17, VAR_1, VAR_2, "__mips16_floatsisf");

      if (VAR_3)
 {
   FUNC_2 (VAR_6, VAR_0, "__mips16_adddf3");
   FUNC_2 (VAR_20, VAR_0, "__mips16_subdf3");
   FUNC_2 (VAR_19, VAR_0, "__mips16_muldf3");
   FUNC_2 (VAR_14, VAR_0, "__mips16_divdf3");

   FUNC_2 (VAR_7, VAR_0, "__mips16_eqdf2");
   FUNC_2 (VAR_13, VAR_0, "__mips16_nedf2");
   FUNC_2 (VAR_9, VAR_0, "__mips16_gtdf2");
   FUNC_2 (VAR_8, VAR_0, "__mips16_gedf2");
   FUNC_2 (VAR_11, VAR_0, "__mips16_ltdf2");
   FUNC_2 (VAR_10, VAR_0, "__mips16_ledf2");

   FUNC_1 (VAR_15, VAR_0, VAR_1, "__mips16_extendsfdf2");
   FUNC_1 (VAR_21, VAR_1, VAR_0, "__mips16_truncdfsf2");

   FUNC_1 (VAR_16, VAR_2, VAR_0, "__mips16_fix_truncdfsi");
   FUNC_1 (VAR_17, VAR_0, VAR_2, "__mips16_floatsidf");
 }
    }
  else
    FUNC_0 ();
}
