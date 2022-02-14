
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (int ,int ,int ) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_9 () ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,...) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;

void FUNC_12(void)
{



 if (!VAR_12) {
  FUNC_11("----------------------------------\n");
  FUNC_11("| Locking API testsuite disabled |\n");
  FUNC_11("----------------------------------\n");
  return;
 }




 FUNC_11("------------------------\n");
 FUNC_11("| Locking API testsuite:\n");
 FUNC_11("----------------------------------------------------------------------------\n");
 FUNC_11("                                 | spin |wlock |rlock |mutex | wsem | rsem |\n");
 FUNC_11("  --------------------------------------------------------------------------\n");

 FUNC_9();
 VAR_13 = !VAR_14;

 FUNC_3("A-A deadlock", VAR_0);
 FUNC_3("A-B-B-A deadlock", VAR_1);
 FUNC_3("A-B-B-C-C-A deadlock", VAR_2);
 FUNC_3("A-B-C-A-B-C deadlock", VAR_4);
 FUNC_3("A-B-B-C-C-D-D-A deadlock", VAR_3);
 FUNC_3("A-B-C-D-B-D-D-A deadlock", VAR_6);
 FUNC_3("A-B-C-D-B-C-D-A deadlock", VAR_5);
 FUNC_2("double unlock", VAR_15);
 FUNC_2("initialize held", VAR_17);
 FUNC_4("bad unlock order", VAR_11);

 FUNC_11("  --------------------------------------------------------------------------\n");
 FUNC_10("recursive read-lock");
 FUNC_11("             |");
 FUNC_8(VAR_25, VAR_10, VAR_8);
 FUNC_11("             |");
 FUNC_8(VAR_29, VAR_7, VAR_9);
 FUNC_11("\n");

 FUNC_10("recursive read-lock #2");
 FUNC_11("             |");
 FUNC_8(VAR_26, VAR_10, VAR_8);
 FUNC_11("             |");
 FUNC_8(VAR_30, VAR_7, VAR_9);
 FUNC_11("\n");

 FUNC_10("mixed read-write-lock");
 FUNC_11("             |");
 FUNC_8(VAR_27, VAR_7, VAR_8);
 FUNC_11("             |");
 FUNC_8(VAR_31, VAR_7, VAR_9);
 FUNC_11("\n");

 FUNC_10("mixed write-read-lock");
 FUNC_11("             |");
 FUNC_8(VAR_28, VAR_7, VAR_8);
 FUNC_11("             |");
 FUNC_8(VAR_32, VAR_7, VAR_9);
 FUNC_11("\n");

 FUNC_11("  --------------------------------------------------------------------------\n");




 FUNC_1("irqs-on + irq-safe-A", VAR_20);
 FUNC_0("sirq-safe-A => hirqs-on", VAR_21);
 FUNC_1("safe-A + irqs-on", VAR_22);
 FUNC_6("safe-A + unsafe-B #1", VAR_23);
 FUNC_6("safe-A + unsafe-B #2", VAR_24);
 FUNC_7("irq lock-inversion", VAR_18);

 FUNC_5("irq read-recursion", VAR_19);


 if (VAR_35) {
  FUNC_11("-----------------------------------------------------------------\n");
  VAR_12 = 0;
  FUNC_11("BUG: %3d unexpected failures (out of %3d) - debugging disabled! |\n",
   VAR_35, VAR_34);
  FUNC_11("-----------------------------------------------------------------\n");
 } else if (VAR_16 && VAR_33) {
  FUNC_11("--------------------------------------------------------\n");
  FUNC_11("%3d out of %3d testcases failed, as expected. |\n",
   VAR_16, VAR_34);
  FUNC_11("----------------------------------------------------\n");
  VAR_12 = 1;
 } else if (VAR_16 && !VAR_33) {
  FUNC_11("--------------------------------------------------------\n");
  FUNC_11("All %3d testcases failed, as expected. |\n",
   VAR_16);
  FUNC_11("----------------------------------------\n");
  VAR_12 = 1;
 } else {
  FUNC_11("-------------------------------------------------------\n");
  FUNC_11("Good, all %3d testcases passed! |\n",
   VAR_33);
  FUNC_11("---------------------------------\n");
  VAR_12 = 1;
 }
 VAR_13 = 0;
}
