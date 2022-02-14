
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct sbuf {int dummy; } ;
struct TYPE_2__ {int id_aa64afr1; int id_aa64afr0; int id_aa64dfr1; int id_aa64dfr0; int id_aa64mmfr2; int id_aa64mmfr1; int id_aa64mmfr0; int id_aa64pfr1; int id_aa64pfr0; int id_aa64isar1; int id_aa64isar0; int mpidr; int cpu_revision; int cpu_variant; int cpu_part_name; int cpu_impl_name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
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
 int VAR_12 ;
 TYPE_1__* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_6 (struct sbuf*,char*,int ,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct sbuf*,char*) ;
 int FUNC_9 (struct sbuf*) ;
 char* FUNC_10 (struct sbuf*) ;
 int FUNC_11 (struct sbuf*) ;
 int FUNC_12 (struct sbuf*) ;
 struct sbuf* FUNC_13 () ;
 int FUNC_14 (struct sbuf*,char*,size_t,...) ;

__attribute__((used)) static void
FUNC_15(u_int VAR_27)
{
 struct sbuf *VAR_28;

 VAR_28 = FUNC_13();
 FUNC_14(VAR_28, "CPU%3d: %s %s r%dp%d", VAR_27,
     VAR_13[VAR_27].cpu_impl_name, VAR_13[VAR_27].cpu_part_name,
     VAR_13[VAR_27].cpu_variant, VAR_13[VAR_27].cpu_revision);

 FUNC_8(VAR_28, " affinity:");
 switch(VAR_12) {
 default:
 case 4:
  FUNC_14(VAR_28, " %2d", FUNC_3(VAR_13[VAR_27].mpidr));

 case 3:
  FUNC_14(VAR_28, " %2d", FUNC_2(VAR_13[VAR_27].mpidr));

 case 2:
  FUNC_14(VAR_28, " %2d", FUNC_1(VAR_13[VAR_27].mpidr));

 case 1:
 case 0:
  FUNC_14(VAR_28, " %2d", FUNC_0(VAR_13[VAR_27].mpidr));
  break;
 }
 FUNC_12(VAR_28);
 FUNC_7("%s\n", FUNC_10(VAR_28));
 FUNC_9(VAR_28);
 if (VAR_27 == 0 && FUNC_4(FUNC_5(VAR_26)) == 0 &&
     VAR_0)
  FUNC_7("WARNING: ThunderX Pass 1.1 detected.\nThis has known "
      "hardware bugs that may cause the incorrect operation of "
      "atomic operations.\n");


 if (VAR_27 == 0 || (VAR_14 & VAR_5) != 0)
  FUNC_6(VAR_28, "Instruction Set Attributes 0",
      VAR_13[VAR_27].id_aa64isar0, VAR_19);


 if (VAR_27 == 0 || (VAR_14 & VAR_6) != 0)
  FUNC_6(VAR_28, "Instruction Set Attributes 1",
      VAR_13[VAR_27].id_aa64isar1, VAR_20);


 if (VAR_27 == 0 || (VAR_14 & VAR_10) != 0)
  FUNC_6(VAR_28, "Processor Features 0",
      VAR_13[VAR_27].id_aa64pfr0, VAR_24);


 if (VAR_27 == 0 || (VAR_14 & VAR_11) != 0)
  FUNC_6(VAR_28, "Processor Features 1",
      VAR_13[VAR_27].id_aa64pfr1, VAR_25);


 if (VAR_27 == 0 || (VAR_14 & VAR_7) != 0)
  FUNC_6(VAR_28, "Memory Model Features 0",
      VAR_13[VAR_27].id_aa64mmfr0, VAR_21);


 if (VAR_27 == 0 || (VAR_14 & VAR_8) != 0)
  FUNC_6(VAR_28, "Memory Model Features 1",
      VAR_13[VAR_27].id_aa64mmfr1, VAR_22);


 if (VAR_27 == 0 || (VAR_14 & VAR_9) != 0)
  FUNC_6(VAR_28, "Memory Model Features 2",
      VAR_13[VAR_27].id_aa64mmfr2, VAR_23);


 if (VAR_27 == 0 || (VAR_14 & VAR_3) != 0)
  FUNC_6(VAR_28, "Debug Features 0",
      VAR_13[VAR_27].id_aa64dfr0, VAR_17);


 if (VAR_27 == 0 || (VAR_14 & VAR_4) != 0)
  FUNC_6(VAR_28, "Debug Features 1",
      VAR_13[VAR_27].id_aa64dfr1, VAR_18);


 if (VAR_27 == 0 || (VAR_14 & VAR_1) != 0)
  FUNC_6(VAR_28, "Auxiliary Features 0",
      VAR_13[VAR_27].id_aa64afr0, VAR_15);


 if (VAR_27 == 0 || (VAR_14 & VAR_2) != 0)
  FUNC_6(VAR_28, "Auxiliary Features 1",
      VAR_13[VAR_27].id_aa64afr1, VAR_16);

 FUNC_11(VAR_28);
 VAR_28 = ((void*)0);

}
