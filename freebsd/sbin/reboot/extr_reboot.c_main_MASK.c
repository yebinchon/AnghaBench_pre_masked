
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct utmpx {int ut_tv; int ut_type; } ;
struct passwd {char* pw_name; } ;


 int VAR_0 ;
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
 int VAR_13 ;
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
 int FUNC_0 (int) ;
 int VAR_24 ;
 int FUNC_1 (int,char*) ;
 int VAR_25 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 char* FUNC_6 () ;
 int FUNC_7 (int,char**,char*) ;
 int FUNC_8 () ;
 struct passwd* FUNC_9 (int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (char*,int,int) ;
 int FUNC_14 (char*,int ,int) ;
 char* VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_15 (struct utmpx*) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int) ;
 int VAR_28 ;
 int FUNC_19 (int) ;
 int FUNC_20 (char const*) ;
 int * FUNC_21 (int ,char*) ;
 int FUNC_22 () ;
 int FUNC_23 (int ,char*,char const*) ;
 int FUNC_24 () ;
 int FUNC_25 (int,char const*,int) ;

int
FUNC_26(int VAR_29, char *VAR_30[])
{
 struct utmpx VAR_31;
 const struct passwd *VAR_32;
 int VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41;
 u_int VAR_42;
 const char *VAR_43, *VAR_44 = ((void*)0);

 if (FUNC_21(FUNC_8(), "halt") != ((void*)0)) {
  VAR_24 = 1;
  VAR_34 = VAR_9;
 } else
  VAR_34 = 0;
 VAR_37 = VAR_38 = VAR_39 = VAR_41 = 0;
 while ((VAR_33 = FUNC_7(VAR_29, VAR_30, "cdk:lNnpqr")) != -1)
  switch(VAR_33) {
  case 'c':
   VAR_34 |= VAR_11;
   break;
  case 'd':
   VAR_34 |= VAR_8;
   break;
  case 'k':
   VAR_44 = VAR_26;
   break;
  case 'l':
   VAR_37 = 1;
   break;
  case 'n':
   VAR_38 = 1;
   VAR_34 |= VAR_10;
   break;
  case 'N':
   VAR_38 = 1;
   VAR_41 = 1;
   break;
  case 'p':
   VAR_34 |= VAR_12;
   break;
  case 'q':
   VAR_39 = 1;
   break;
  case 'r':
   VAR_34 |= VAR_13;
   break;
  case '?':
  default:
   FUNC_24();
  }
 VAR_29 -= VAR_27;
 VAR_30 += VAR_27;
 if (VAR_29 != 0)
  FUNC_24();

 if ((VAR_34 & (VAR_8 | VAR_9)) == (VAR_8 | VAR_9))
  FUNC_2(1, "cannot dump (-d) when halting; must reboot instead");
 if (VAR_41 && (VAR_34 & VAR_10) != 0)
  FUNC_2(1, "-N cannot be used with -n");
 if ((VAR_34 & VAR_12) && (VAR_34 & VAR_11))
  FUNC_2(1, "-c and -p cannot be used together");
 if ((VAR_34 & VAR_13) != 0 && VAR_34 != VAR_13)
  FUNC_2(1, "-r cannot be used with -c, -d, -n, or -p");
 if (FUNC_5()) {
  VAR_25 = VAR_0;
  FUNC_1(1, ((void*)0));
 }

 if (VAR_39) {
  FUNC_16(VAR_34);
  FUNC_1(1, ((void*)0));
 }

 if (VAR_44 != ((void*)0)) {
  VAR_36 = FUNC_13("/boot/nextboot.conf", VAR_7 | VAR_5 | VAR_6,
      0444);
  if (VAR_36 > -1) {
   (void)FUNC_25(VAR_36, "nextboot_enable=\"YES\"\n", 22);
   (void)FUNC_25(VAR_36, "kernel=\"", 8L);
   (void)FUNC_25(VAR_36, VAR_44, FUNC_20(VAR_44));
   (void)FUNC_25(VAR_36, "\"\n", 2);
   FUNC_0(VAR_36);
  }
 }


 if (!VAR_37) {
  if ((VAR_43 = FUNC_6()) == ((void*)0))
   VAR_43 = (VAR_32 = FUNC_9(FUNC_11())) ?
       VAR_32->pw_name : "???";
  if (VAR_24) {
   FUNC_14("halt", 0, VAR_2 | VAR_3);
   FUNC_23(VAR_4, "halted by %s", VAR_43);
  } else if (VAR_34 & VAR_13) {
   FUNC_14("reroot", 0, VAR_2 | VAR_3);
   FUNC_23(VAR_4, "rerooted by %s", VAR_43);
  } else if (VAR_34 & VAR_12) {
   FUNC_14("reboot", 0, VAR_2 | VAR_3);
   FUNC_23(VAR_4, "powered off by %s", VAR_43);
  } else if (VAR_34 & VAR_11) {
   FUNC_14("reboot", 0, VAR_2 | VAR_3);
   FUNC_23(VAR_4, "power cycled by %s", VAR_43);
  } else {
   FUNC_14("reboot", 0, VAR_2 | VAR_3);
   FUNC_23(VAR_4, "rebooted by %s", VAR_43);
  }
 }
 VAR_31.ut_type = VAR_14;
 FUNC_10(&VAR_31.ut_tv, ((void*)0));
 FUNC_15(&VAR_31);






 if (!VAR_38)
  FUNC_22();





 (void)FUNC_17(VAR_16, VAR_23);
 (void)FUNC_17(VAR_17, VAR_23);
 (void)FUNC_17(VAR_20, VAR_23);
 (void)FUNC_17(VAR_21, VAR_23);
 (void)FUNC_17(VAR_22, VAR_23);





 (void)FUNC_17(VAR_19, VAR_23);




 if (VAR_34 & VAR_13) {
  if (FUNC_12(1, VAR_15) == -1)
   FUNC_1(1, "SIGEMT init");

  return (0);
 }


 if (FUNC_12(1, VAR_22) == -1)
  FUNC_1(1, "SIGTSTP init");


 if (FUNC_12(-1, VAR_21) == -1 && VAR_25 != VAR_1)
  FUNC_1(1, "SIGTERM processes");
 FUNC_18(2);
 for (VAR_35 = 0; VAR_35 < 20; VAR_35++) {
  VAR_42 = FUNC_4();
  if (!VAR_38)
   FUNC_22();
  FUNC_18(3);
  if (FUNC_4() == VAR_42)
   break;
 }

 for (VAR_35 = 1;; ++VAR_35) {
  if (FUNC_12(-1, VAR_18) == -1) {
   if (VAR_25 == VAR_1)
    break;
   goto restart;
  }
  if (VAR_35 > 5) {
   (void)FUNC_3(VAR_28,
       "WARNING: some process(es) wouldn't die\n");
   break;
  }
  (void)FUNC_18(2 * VAR_35);
 }

 FUNC_16(VAR_34);


restart:
 VAR_40 = VAR_25;
 FUNC_2(1, "%s%s", FUNC_12(1, VAR_16) == -1 ? "(can't restart init): " : "",
     FUNC_19(VAR_40));

}
