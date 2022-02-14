
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*) ;
 int VAR_3 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int *,char*,int,int) ;
 int FUNC_11 (int,int) ;
 int VAR_4 ;
 int FUNC_12 (int ,char*) ;
 char* FUNC_13 (char*) ;
 int FUNC_14 (int ,int,int) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 () ;
 int FUNC_17 (char*) ;
 int VAR_5 ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_20 (char*,char*) ;
 int FUNC_21 (int ) ;

int FUNC_22(int VAR_9, char **VAR_10)
{
 int VAR_11, VAR_12;
 char *VAR_13;
 int VAR_14;

 FUNC_19(VAR_1, "");
 FUNC_2(VAR_3, VAR_2);
 FUNC_21(VAR_3);

 FUNC_6(VAR_10[1]);
 FUNC_7(((void*)0));

 VAR_13 = FUNC_13("MENUCONFIG_MODE");
 if (VAR_13) {
  if (!FUNC_20(VAR_13, "single_menu"))
   VAR_6 = 1;
 }

 FUNC_16();

 FUNC_14(VAR_8, VAR_12, VAR_11);
 if (FUNC_15(((void*)0))) {
  FUNC_12(VAR_7, "%s", FUNC_0("Your display is too small to run Menuconfig!\n"));
  FUNC_12(VAR_7, "%s", FUNC_0("It must be at least 19 lines by 80 columns.\n"));
  return 1;
 }

 FUNC_18(FUNC_5());
 do {
  FUNC_3(&VAR_5);
  FUNC_9();
  if (FUNC_4())
   VAR_14 = FUNC_10(((void*)0),
        FUNC_1("Do you wish to save your "
          "new kernel configuration?\n"
          "<ESC><ESC> to continue."),
        6, 60);
  else
   VAR_14 = -1;
 } while (VAR_14 == VAR_0);
 FUNC_11(VAR_11, VAR_12);

 switch (VAR_14) {
 case 0:
  if (FUNC_8(VAR_4)) {
   FUNC_12(VAR_7, "%s", FUNC_1("\n\n"
    "Error during writing of the kernel configuration.\n"
    "Your kernel configuration changes were NOT saved."
    "\n\n"));
   return 1;
  }
 case -1:
  FUNC_17(FUNC_1("\n\n"
   "*** End of Linux kernel configuration.\n"
   "*** Execute 'make' to build the kernel or try 'make help'."
   "\n\n"));
  break;
 default:
  FUNC_12(VAR_7, "%s", FUNC_1("\n\n"
   "Your kernel configuration changes were NOT saved."
   "\n\n"));
 }

 return 0;
}
