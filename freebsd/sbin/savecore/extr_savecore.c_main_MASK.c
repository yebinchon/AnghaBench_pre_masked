
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cap_rights_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char const*,int,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int,int *) ;
 int FUNC_4 (char*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 char** FUNC_5 (int*) ;
 int FUNC_6 (int) ;
 int VAR_19 ;
 int FUNC_7 (int,char**,char*) ;
 int VAR_20 ;
 int FUNC_8 (int,char**) ;
 int VAR_21 ;
 int FUNC_9 (int ,char*,...) ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_10 (char const*,int) ;
 int FUNC_11 (char*,int ,int ) ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 () ;
 int VAR_28 ;
 int FUNC_15 (int,char**) ;

int
FUNC_16(int VAR_29, char **VAR_30)
{
 cap_rights_t VAR_31;
 const char *VAR_32;
 int VAR_33, VAR_34, VAR_35, VAR_36;

 VAR_16 = VAR_18 = VAR_17 = VAR_19 = VAR_21 = VAR_28 = 0;
 VAR_24 = VAR_25 = VAR_23 = 0;
 VAR_32 = ".";

 FUNC_11("savecore", VAR_11, VAR_9);
 FUNC_13(VAR_15, VAR_20);

 VAR_29 = FUNC_15(VAR_29, VAR_30);
 if (VAR_29 < 0)
  FUNC_6(1);

 while ((VAR_34 = FUNC_7(VAR_29, VAR_30, "Ccfkm:vz")) != -1)
  switch(VAR_34) {
  case 'C':
   VAR_16 = 1;
   break;
  case 'c':
   VAR_17 = 1;
   break;
  case 'f':
   VAR_19 = 1;
   break;
  case 'k':
   VAR_21 = 1;
   break;
  case 'm':
   VAR_22 = FUNC_1(VAR_26);
   if (VAR_22 <= 0) {
    FUNC_9(VAR_10, "Invalid maxdump value");
    FUNC_6(1);
   }
   break;
  case 'v':
   VAR_28++;
   break;
  case 'z':
   VAR_18 = 1;
   break;
  case '?':
  default:
   FUNC_14();
  }
 if (VAR_16 && (VAR_17 || VAR_19 || VAR_21))
  FUNC_14();
 if (VAR_17 && (VAR_18 || VAR_21))
  FUNC_14();
 if (VAR_22 > 0 && (VAR_16 || VAR_17))
  FUNC_14();
 VAR_29 -= VAR_27;
 VAR_30 += VAR_27;
 if (VAR_29 >= 1 && !VAR_16 && !VAR_17) {
  VAR_35 = FUNC_4(VAR_30[0]);
  if (VAR_35) {
   FUNC_9(VAR_10, "chdir(%s): %m", VAR_30[0]);
   FUNC_6(1);
  }
  VAR_32 = VAR_30[0];
  VAR_29--;
  VAR_30++;
 }
 if (VAR_29 == 0)
  VAR_30 = FUNC_5(&VAR_29);

 VAR_36 = FUNC_10(VAR_32, VAR_14 | VAR_13);
 if (VAR_36 < 0) {
  FUNC_9(VAR_10, "open(%s): %m", VAR_32);
  FUNC_6(1);
 }
 (void)FUNC_2(&VAR_31, VAR_0, VAR_1, VAR_2,
     VAR_3, VAR_5, VAR_6, VAR_4, VAR_7,
     VAR_8);
 if (FUNC_3(VAR_36, &VAR_31) < 0) {
  FUNC_9(VAR_10, "cap_rights_limit(): %m");
  FUNC_6(1);
 }


 FUNC_8(VAR_29, VAR_30);

 for (VAR_33 = 0; VAR_33 < VAR_29; VAR_33++)
  FUNC_0(VAR_32, VAR_36, VAR_30[VAR_33]);


 if (VAR_24 == 0) {
  if (VAR_16) {
   if (VAR_28)
    FUNC_12("No dump exists\n");
   FUNC_6(1);
  }
  if (VAR_28)
   FUNC_9(VAR_12, "no dumps found");
 } else if (VAR_25 == 0) {
  if (VAR_23 != 0) {
   if (VAR_28)
    FUNC_9(VAR_12,
        "unsaved dumps found but not saved");
   FUNC_6(1);
  } else if (VAR_28)
   FUNC_9(VAR_12, "no unsaved dumps found");
 }

 return (0);
}
