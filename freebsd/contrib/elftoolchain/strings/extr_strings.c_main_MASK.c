
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fileargs_t ;
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int,char**,int ,int ,int *,int ) ;
 int FUNC_10 (char*,int ,int ,int ) ;
 int FUNC_11 (int,char**,char*,int ,int *) ;
 scalar_t__ FUNC_12 (int *,char*) ;
 int VAR_23 ;
 char* VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_13 () ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_14 (char*,char**,int) ;
 int FUNC_15 () ;

int
FUNC_16(int VAR_31, char **VAR_32)
{
 fileargs_t *VAR_33;
 cap_rights_t VAR_34;
 int VAR_35, VAR_36;

 VAR_36 = 0;
 VAR_23 = 0;
 VAR_21 = 1;
 if (FUNC_5(VAR_11) == VAR_12)
  FUNC_7(VAR_13, "ELF library initialization failed: %s",
      FUNC_4(-1));

 while ((VAR_35 = FUNC_11(VAR_31, VAR_32, "1234567890ae:fhn:ot:Vv",
     VAR_30, ((void*)0))) != -1) {
  switch ((char)VAR_35) {
  case 'a':
   VAR_22 = 1;
   break;
  case 'e':
   if (*VAR_24 == 's') {
    VAR_20 = VAR_9;
   } else if (*VAR_24 == 'S') {
    VAR_20 = VAR_10;
   } else if (*VAR_24 == 'b') {
    VAR_20 = VAR_5;
    VAR_21 = 2;
   } else if (*VAR_24 == 'B') {
    VAR_20 = VAR_7;
    VAR_21 = 4;
   } else if (*VAR_24 == 'l') {
    VAR_20 = VAR_6;
    VAR_21 = 2;
   } else if (*VAR_24 == 'L') {
    VAR_20 = VAR_8;
    VAR_21 = 4;
   } else
    FUNC_15();

   break;
  case 'f':
   VAR_27 = 1;
   break;
  case 'n':
   VAR_23 = FUNC_14(VAR_24, (char**)((void*)0), 10);
   if (VAR_23 <= 0)
    FUNC_7(VAR_14, "option -n should specify a "
        "positive decimal integer.");
   break;
  case 'o':
   VAR_28 = 1;
   VAR_26 = VAR_19;
   break;
  case 't':
   VAR_28 = 1;
   if (*VAR_24 == 'd')
    VAR_26 = VAR_17;
   else if (*VAR_24 == 'o')
    VAR_26 = VAR_19;
   else if (*VAR_24 == 'x')
    VAR_26 = VAR_18;
   else
    FUNC_15();

   break;
  case 'v':
  case 'V':
   FUNC_13();

  case '0':
         case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
   VAR_23 *= 10;
   VAR_23 += VAR_35 - '0';
   break;
  case 'h':
  case '?':
  default:
   FUNC_15();

  }
 }
 VAR_31 -= VAR_25;
 VAR_32 += VAR_25;

 FUNC_0(&VAR_34, VAR_3, VAR_4, VAR_1, VAR_0, VAR_2);
 VAR_33 = FUNC_9(VAR_31, VAR_32, VAR_16, 0, &VAR_34, VAR_15);
 if (VAR_33 == ((void*)0))
  FUNC_6(1, "Unable to initialize casper fileargs");

 FUNC_1();
 if (FUNC_3() < 0 || FUNC_2() < 0) {
  FUNC_8(VAR_33);
  FUNC_6(1, "Unable to enter capability mode");
 }

 if (VAR_23 == 0)
  VAR_23 = 4;
 if (*VAR_32 == ((void*)0))
  VAR_36 = FUNC_10("{standard input}", VAR_29, 0, 0);
 else while (*VAR_32 != ((void*)0)) {
  if (FUNC_12(VAR_33, *VAR_32) != 0)
   VAR_36 = 1;
  VAR_32++;
 }

 FUNC_8(VAR_33);

 return (VAR_36);
}
