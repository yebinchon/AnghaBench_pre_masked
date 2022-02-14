
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;
struct stat {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char*) ;



 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 () ;
 char* FUNC_5 () ;
 char* FUNC_6 () ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char const*,int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;


 int FUNC_13 (int) ;
 int FUNC_14 (int ,char*,...) ;
 char* FUNC_15 (char*) ;
 int FUNC_16 (int,char**,char*) ;
 int FUNC_17 (struct timeval*,int *) ;
 int VAR_11 ;
 scalar_t__ FUNC_18 (int) ;
 char* VAR_12 ;
 int VAR_13 ;
 int FUNC_19 (char*,...) ;
 int VAR_14 ;
 int * VAR_15 ;
 int VAR_16 ;





 int FUNC_20 (int ,char*) ;
 int FUNC_21 (unsigned int) ;
 scalar_t__ FUNC_22 (char const*,struct stat*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_23 (int ) ;
 int VAR_19 ;

int FUNC_24(int VAR_20, char **VAR_21)
{
 int VAR_22;
 const char *VAR_23;
 struct stat VAR_24;

 FUNC_20(VAR_0, "");
 FUNC_1(VAR_2, VAR_1);
 FUNC_23(VAR_2);

  while ((VAR_22 = FUNC_16(VAR_20, VAR_21, "osbBdD:nmyrh")) != -1) {
  switch (VAR_22) {
  case 'o':
   VAR_11 = 135;
   break;
  case 's':
   VAR_11 = 135;
   VAR_18 = 1;
   break;
  case 'b':
   VAR_11 = 134;
   break;
  case 'B':
   VAR_11 = 133;
   break;
  case 'd':
   VAR_11 = 132;
   break;
  case 'D':
   VAR_11 = 132;
   VAR_10 = VAR_12;
   break;
  case 'n':
   VAR_11 = 130;
   break;
  case 'm':
   VAR_11 = 131;
   break;
  case 'y':
   VAR_11 = 128;
   break;
  case 'r':
  {
   struct timeval VAR_25;
   unsigned int VAR_26;





   FUNC_17(&VAR_25, ((void*)0));

   VAR_26 = (unsigned int)((VAR_25.tv_sec + 1) * (VAR_25.tv_usec + 1));
   FUNC_21(VAR_26);

   VAR_11 = 129;
   break;
  }
  case 'h':
   FUNC_19(FUNC_0("See README for usage info\n"));
   FUNC_13(0);
   break;
  default:
   FUNC_14(VAR_17, "%s", FUNC_0("See README for usage info\n"));
   FUNC_13(1);
  }
 }
 if (VAR_20 == VAR_13) {
  FUNC_19(FUNC_0("%s: Kconfig file missing\n"), VAR_21[0]);
  FUNC_13(1);
 }
 VAR_23 = VAR_21[VAR_13];
 FUNC_7(VAR_23);

 if (VAR_18) {
  VAR_23 = FUNC_5();
  if (FUNC_22(VAR_23, &VAR_24)) {
   FUNC_14(VAR_17, FUNC_0("***\n"
    "*** You have not yet configured your kernel!\n"
    "*** (missing kernel config file \"%s\")\n"
    "***\n"
    "*** Please run some configurator (e.g. \"make oldconfig\" or\n"
    "*** \"make menuconfig\" or \"make xconfig\").\n"
    "***\n"), VAR_23);
   FUNC_13(1);
  }
 }

 switch (VAR_11) {
 case 132:
  if (!VAR_10)
   VAR_10 = FUNC_6();
  if (FUNC_8(VAR_10)) {
   FUNC_19(FUNC_0("***\n"
    "*** Can't find default configuration \"%s\"!\n"
    "***\n"), VAR_10);
   FUNC_13(1);
  }
  break;
 case 135:
 case 137:
 case 136:
 case 134:
 case 133:
  FUNC_8(((void*)0));
  break;
 case 130:
 case 131:
 case 128:
 case 129:
  VAR_23 = FUNC_15("KCONFIG_ALLCONFIG");
  if (VAR_23 && !FUNC_22(VAR_23, &VAR_24)) {
   FUNC_9(VAR_23, VAR_3);
   break;
  }
  switch (VAR_11) {
  case 130: VAR_23 = "allno.config"; break;
  case 131: VAR_23 = "allmod.config"; break;
  case 128: VAR_23 = "allyes.config"; break;
  case 129: VAR_23 = "allrandom.config"; break;
  default: break;
  }
  if (!FUNC_22(VAR_23, &VAR_24))
   FUNC_9(VAR_23, VAR_3);
  else if (!FUNC_22("all.config", &VAR_24))
   FUNC_9("all.config", VAR_3);
  break;
 default:
  break;
 }

 if (VAR_18) {
  if (FUNC_4()) {
   VAR_23 = FUNC_15("KCONFIG_NOSILENTUPDATE");
   if (VAR_23 && *VAR_23) {
    FUNC_14(VAR_17,
     "%s", FUNC_0("\n*** Kernel configuration requires explicit update.\n\n"));
    return 1;
   }
  }
  VAR_19 = FUNC_18(0) && FUNC_18(1) && FUNC_18(2);
 }

 switch (VAR_11) {
 case 130:
  FUNC_10(VAR_7);
  break;
 case 128:
  FUNC_10(VAR_9);
  break;
 case 131:
  FUNC_10(VAR_6);
  break;
 case 129:
  FUNC_10(VAR_8);
  break;
 case 132:
  FUNC_10(VAR_5);
  break;
 case 136:
 case 137:
  VAR_15 = &VAR_16;
  FUNC_3(&VAR_16);
  VAR_11 = 135;

 case 134:
 case 133:
 case 135:

  do {
   VAR_4 = 0;
   FUNC_2(&VAR_16);
  } while (VAR_4 &&
    (VAR_11 != 134 &&
     VAR_11 != 133));
  break;
 }

 if (VAR_18) {



  if (FUNC_4() && FUNC_11(((void*)0))) {
   FUNC_14(VAR_17, "%s", FUNC_0("\n*** Error during writing of the kernel configuration.\n\n"));
   FUNC_13(1);
  }
  if (FUNC_12()) {
   FUNC_14(VAR_17, "%s", FUNC_0("\n*** Error during update of the kernel configuration.\n\n"));
   return 1;
  }
 } else {
  if (FUNC_11(((void*)0))) {
   FUNC_14(VAR_17, "%s", FUNC_0("\n*** Error during writing of the kernel configuration.\n\n"));
   FUNC_13(1);
  }
 }
 return VAR_14;
}
