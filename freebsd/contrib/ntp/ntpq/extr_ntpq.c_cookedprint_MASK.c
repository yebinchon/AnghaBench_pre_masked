
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int sockaddr_u ;
typedef int l_fp ;
typedef int bv ;
typedef int bn ;
typedef int b ;
typedef int FILE ;





 int FUNC_0 (int *) ;

 int VAR_0 ;
 int VAR_1 ;





 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (char*,int*,int *,int) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (char*,int *) ;
 int FUNC_6 (char*,int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,...) ;
 scalar_t__ FUNC_9 (size_t*,char const**,char**,char**) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,char*) ;
 int FUNC_12 (int *,char*,int,int *) ;
 char* FUNC_13 (int *) ;
 char* FUNC_14 (int *) ;
 int FUNC_15 (char*,int,char*,int) ;
 int FUNC_16 () ;
 char* FUNC_17 (int,int) ;
 int VAR_2 ;
 char* FUNC_18 (int *) ;
 int FUNC_19 (char*) ;
 char* FUNC_20 (int) ;
 int FUNC_21 (char*) ;

__attribute__((used)) static void
FUNC_22(
 int VAR_3,
 size_t VAR_4,
 const char *VAR_5,
 int VAR_6,
 int VAR_7,
 FILE *VAR_8
 )
{
 char *VAR_9;
 char *VAR_10;
 char VAR_11;
 int VAR_12;
 l_fp VAR_13;
 sockaddr_u VAR_14;
 u_long VAR_15;
 int VAR_16;
 size_t VAR_17;
 l_fp VAR_18[8];
 char VAR_19[12];
 char VAR_20[2 * VAR_1];
 char VAR_21[2 * VAR_0];

 FUNC_1(VAR_3);

 if (!VAR_7)
  FUNC_8(*VAR_8, "status=%04x %s,\n", VAR_6,
   FUNC_17(VAR_3, VAR_6));

 FUNC_16();
 while (FUNC_9(&VAR_4, &VAR_5, &VAR_9, &VAR_10)) {
  VAR_12 = FUNC_21(VAR_9);
  VAR_11 = 0;
  switch (VAR_12) {

  case 130:
   VAR_11 = '*';
   break;

  case 128:
   if (!VAR_10 || !FUNC_5(VAR_10, &VAR_13))
    VAR_11 = '?';
   else
    FUNC_11(VAR_8, VAR_9, FUNC_13(&VAR_13));
   break;

  case 134:
  case 132:
   if (!VAR_10 || !FUNC_4(VAR_10, &VAR_14)) {
    VAR_11 = '?';
   } else if (VAR_12 == 134){
    FUNC_11(VAR_8, VAR_9, FUNC_10(&VAR_14));
   } else {
    FUNC_11(VAR_8, VAR_9, FUNC_18(&VAR_14));
   }
   break;

  case 129:
   if (!VAR_10) {
    VAR_11 = '?';
   } else if (FUNC_4(VAR_10, &VAR_14)) {
    if (FUNC_0(&VAR_14))
     FUNC_11(VAR_8, VAR_9,
            FUNC_14(&VAR_14));
    else
     FUNC_11(VAR_8, VAR_9, FUNC_18(&VAR_14));
   } else if (FUNC_19(VAR_10) <= 4) {
    FUNC_11(VAR_8, VAR_9, VAR_10);
   } else {
    VAR_11 = '?';
   }
   break;

  case 133:
   if (!VAR_10 || !FUNC_6(VAR_10, &VAR_15) || VAR_15 > 3) {
    VAR_11 = '?';
   } else {
    VAR_19[0] = (0x2 & VAR_15)
        ? '1'
        : '0';
    VAR_19[1] = (0x1 & VAR_15)
        ? '1'
        : '0';
    VAR_19[2] = '\0';
    FUNC_11(VAR_8, VAR_9, VAR_19);
   }
   break;

  case 131:
   if (!VAR_10 || !FUNC_6(VAR_10, &VAR_15)) {
    VAR_11 = '?';
   } else {
    FUNC_15(VAR_19, sizeof(VAR_19), "%03lo", VAR_15);
    FUNC_11(VAR_8, VAR_9, VAR_19);
   }
   break;

  case 136:
   if (!VAR_10 || !FUNC_3(VAR_10, &VAR_16, VAR_18, 8))
    VAR_11 = '?';
   else
    FUNC_12(VAR_8, VAR_9, VAR_16, VAR_18);
   break;

  case 135:
   if (!VAR_10 || !FUNC_6(VAR_10, &VAR_15))
    VAR_11 = '?';
   else
    FUNC_11(VAR_8, VAR_9, FUNC_20(VAR_15));
   break;

  default:
   FUNC_8(VAR_2, "Internal error in cookedprint, %s=%s, fmt %d\n",
    VAR_9, VAR_10, VAR_12);
   VAR_11 = '?';
   break;
  }

  if (VAR_11 != 0) {

   FUNC_2(VAR_9, VAR_1, VAR_20, sizeof(VAR_20));
   if (VAR_11 != '*') {
    FUNC_2(VAR_10, VAR_0,
      VAR_21, sizeof(VAR_21) - 1);
    VAR_17 = FUNC_19(VAR_21);
    VAR_21[VAR_17] = VAR_11;
    VAR_21[VAR_17+1] = '\0';
   } else {
    FUNC_2(VAR_10, VAR_0,
      VAR_21, sizeof(VAR_21));
   }
   FUNC_11(VAR_8, VAR_20, VAR_21);
  }
 }
 FUNC_7(VAR_8);
}
