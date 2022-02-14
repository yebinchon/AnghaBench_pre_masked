
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int,char**,char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_6 (int,int ,char**) ;
 int* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_10 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (int,int,char**) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_16 (char*,char*) ;
 int FUNC_17 (char*) ;
 scalar_t__ FUNC_18 (char*,char*,int) ;
 int FUNC_19 (char*,int ,int) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_20 () ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;

int
FUNC_21 (int VAR_17, char **VAR_18)
{
 char *VAR_19;
 int VAR_20, VAR_21, VAR_22;

 if (VAR_17 > 1 && FUNC_16(VAR_18[1], "help") == 0)
  FUNC_20();

 for (;;) {
  switch (FUNC_5 (VAR_17, VAR_18, "mseftucviax")) {
  case -1:
   break;
  case 'a':
   ++VAR_3;
   continue;
  case 'm':
   ++VAR_9;
   continue;
  case 's':
   ++VAR_11;
   continue;
  case 'e':
   ++VAR_5;
   continue;
  case 'f':
   ++VAR_5;
   ++VAR_6;
   continue;
  case 't':
   ++VAR_13;
   continue;
  case 'u':
   ++VAR_13;
   ++VAR_14;
   continue;
  case 'c':
   ++VAR_4;
   continue;
  case 'v':
   ++VAR_15;
   continue;
  case 'i':
   ++VAR_7;
   continue;
  case 'x':
   ++VAR_16;
   continue;
  default:
   FUNC_20();
  }
  break;
 }
 VAR_17 -= VAR_10;
 VAR_18 += VAR_10;

 if (VAR_17 <= 0) {
  FUNC_4 ();
  VAR_21 = 1;
  VAR_2 = 0;



  {
  for (VAR_22=0; VAR_22<VAR_0; ++VAR_22)
   if (VAR_8[VAR_2*16+VAR_22/8] & 1 << (VAR_22 & 7)) {
    VAR_20 = FUNC_7 (VAR_22);
    if (VAR_15) {

    char VAR_23[256];
    if (FUNC_6 (VAR_20, VAR_1, &VAR_23) >= 0) {
     FUNC_14 ("Version: %s\n", VAR_23);
     FUNC_1 (VAR_20);
     return (0);
    }

    }
    if (VAR_7) {
     FUNC_8 (VAR_20);
     FUNC_11 (VAR_20);
    } else if (VAR_11||VAR_16)
     FUNC_13 (VAR_20, VAR_21);
    else if (VAR_9)
     FUNC_12 (VAR_20, VAR_21);
    else if (VAR_5)
     FUNC_9 (VAR_20, VAR_21);
    else if (VAR_13)
     FUNC_10 (VAR_20, VAR_21);
    else if (VAR_4)
     FUNC_0 (VAR_20);
    else
     FUNC_8 (VAR_20);
    FUNC_1 (VAR_20);
    VAR_21 = 0;
   }
  }
  return (0);
 }

 VAR_19 = VAR_18[0] + FUNC_17 (VAR_18[0]);
 while (VAR_19 > VAR_18[0] && VAR_19[-1] >= '0' && VAR_19[-1] <= '9')
  --VAR_19;
 VAR_22 = FUNC_19 (VAR_19, 0, 10);
 VAR_17--;
 VAR_18++;

 VAR_20 = FUNC_7 (VAR_22);
 if (VAR_15) {

  char VAR_24[256];
  if (FUNC_6 (VAR_20, VAR_1, &VAR_24) >= 0)
   FUNC_14 ("Version: %s\n", VAR_24);

 }
 if (VAR_7) {
  FUNC_8 (VAR_20);
  FUNC_11 (VAR_20);
  FUNC_1 (VAR_20);
  return (0);
 }
 if (VAR_11||VAR_16) {
  FUNC_13 (VAR_20, 1);
  FUNC_1 (VAR_20);
  return (0);
 }
 if (VAR_9) {
  FUNC_12 (VAR_20, 1);
  FUNC_1 (VAR_20);
  return (0);
 }
 if (VAR_5) {
  FUNC_9 (VAR_20, 1);
  FUNC_1 (VAR_20);
  return (0);
 }
 if (VAR_13) {
  FUNC_10 (VAR_20, 1);
  FUNC_1 (VAR_20);
  return (0);
 }
 if (VAR_4) {
  FUNC_0 (VAR_20);
  FUNC_1 (VAR_20);
  return (0);
 }
 if (VAR_17 > 0)
  FUNC_15 (VAR_20, VAR_17, VAR_18);
 else
  FUNC_8 (VAR_20);
 FUNC_1 (VAR_20);
 return (0);
}
