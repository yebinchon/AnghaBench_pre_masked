
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (char*) ;
 int VAR_23 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char**,char*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,unsigned long,int*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 char* VAR_24 ;
 int VAR_25 ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 () ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (char*) ;
 int FUNC_15 (char*,char*) ;

int
FUNC_16(int VAR_26, char *VAR_27[])
{
 unsigned long VAR_28;
 int VAR_29;
 int VAR_30;

 VAR_23 = FUNC_7(VAR_22, VAR_8, 0);

 while ((VAR_29 = FUNC_4(VAR_26, VAR_27, "C:i:x:vz:")) != -1) {
  switch (VAR_29) {
  case 'C':
   VAR_0 = VAR_24;
   break;
  case 'i':
   if (VAR_23 < 0) {
    FUNC_1(VAR_4, "cannot open veriexec");
   }
   if (FUNC_6(VAR_23, VAR_13, &VAR_30)) {
    FUNC_1(VAR_4,
        "Cannot get veriexec state");
   }
   switch (VAR_24[0]) {
   case 'a':
    VAR_28 = VAR_16;
    break;
   case 'e':
    VAR_28 = VAR_17;
    break;
   case 'l':
    VAR_28 = (FUNC_10(VAR_24, "lock", 4)) ?
        VAR_19 :
        VAR_18;
    break;
   default:
    FUNC_2(VAR_5, "unknown state %s", VAR_24);
    break;
   }
   FUNC_3((VAR_30 & VAR_28) == 0);
   break;
  case 'v':
   VAR_20++;
   break;
  case 'x':



   for (VAR_30 = 0; VAR_25 < VAR_26; VAR_25++) {
    if (FUNC_13(VAR_27[VAR_25])) {
     FUNC_15("%s", VAR_27[VAR_25]);
     VAR_30 = 2;
    }
   }
   FUNC_3(VAR_30);
   break;
  case 'z':
   switch (VAR_24[0]) {
   case 'a':
    VAR_28 = VAR_9;
    break;
   case 'd':
    VAR_28 = (FUNC_11(VAR_24, "off")) ?
        VAR_10 : VAR_11;
    if (VAR_25 < VAR_26 && VAR_28 == VAR_11) {
     VAR_30 = FUNC_0(VAR_27[VAR_25]);
     if (VAR_30 == 0)
      VAR_28 = VAR_10;
    }
    break;
   case 'e':
    VAR_28 = VAR_12;
    break;
   case 'g':
    VAR_28 = VAR_13;
    break;
   case 'l':
    VAR_28 = VAR_15;
    break;
   default:
    FUNC_2(VAR_5, "unknown command %s", VAR_24);
    break;
   }
   if (VAR_23 < 0) {
    FUNC_1(VAR_4, "cannot open veriexec");
   }
   if (FUNC_6(VAR_23, VAR_28, &VAR_30)) {
    FUNC_1(VAR_4, "cannot %s veriexec", VAR_24);
   }
   if (VAR_28 == VAR_11 ||
       VAR_28 == VAR_10) {
    FUNC_9("debug is: %d\n", VAR_30);
   } else if (VAR_28 == VAR_13) {
    FUNC_9("%#o\n", VAR_30);
   }
   FUNC_3(VAR_2);
   break;
  }
 }
 FUNC_8(FUNC_5(), VAR_7, VAR_6);
 if (FUNC_12() < 1)
  FUNC_2(VAR_3, "cannot initialize trust store");






 for (; VAR_25 < VAR_26; VAR_25++) {
  if (FUNC_14(VAR_27[VAR_25])) {
   FUNC_1(VAR_1, "cannot load %s", VAR_27[VAR_25]);
  }
 }
 FUNC_3(VAR_2);
}
