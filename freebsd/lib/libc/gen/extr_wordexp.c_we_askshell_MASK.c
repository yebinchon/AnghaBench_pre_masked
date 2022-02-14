
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t we_nbytes; size_t we_wordc; size_t we_offs; char** we_wordv; char* we_strings; } ;
typedef TYPE_1__ wordexp_t ;
typedef int wfdstr ;
typedef int sigset_t ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
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
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int,int ,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,int*,int ) ;
 int VAR_17 ;
 int FUNC_8 (int ,char*,char*,char*,char*,char*,char const*,char*,char*,char*,char*) ;
 scalar_t__ FUNC_9 () ;
 char* FUNC_10 (char*) ;
 char* FUNC_11 (char*,char,long) ;
 scalar_t__ FUNC_12 (int*,int ) ;
 char* FUNC_13 (char*,long) ;
 char** FUNC_14 (char**,int,int) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char*,int,char*,int) ;
 int FUNC_18 (char const*) ;
 long FUNC_19 (char*,int *,int) ;
 long FUNC_20 (int,char*,long) ;
 int FUNC_21 (int,char const*,int ) ;

__attribute__((used)) static int
FUNC_22(const char *VAR_18, wordexp_t *VAR_19, int VAR_20)
{
 int VAR_21[2];
 int VAR_22[2];
 char VAR_23[sizeof(int) * 3 + 1];
 char VAR_24[35];
 long VAR_25, VAR_26;
 long VAR_27;
 size_t VAR_28;
 size_t VAR_29;
 pid_t VAR_30;
 pid_t VAR_31;
 int VAR_32;
 int VAR_33;
 int VAR_34;
 char *VAR_35, *VAR_36;
 char *VAR_37;
 char **VAR_38;
 sigset_t VAR_39, VAR_40;
 const char *VAR_41;

 VAR_34 = VAR_17;
 VAR_41 = FUNC_10("IFS");

 if (FUNC_12(VAR_21, VAR_2) < 0)
  return (VAR_12);
 FUNC_17(VAR_23, sizeof(VAR_23), "%d", VAR_21[0]);
 if (FUNC_12(VAR_22, VAR_2) < 0) {
  FUNC_3(VAR_21[0]);
  FUNC_3(VAR_21[1]);
  return (VAR_12);
 }
 (void)FUNC_16(&VAR_39);
 (void)FUNC_15(&VAR_39, VAR_3);
 (void)FUNC_2(VAR_4, &VAR_39, &VAR_40);
 if ((VAR_30 = FUNC_9()) < 0) {
  VAR_34 = VAR_17;
  FUNC_3(VAR_21[0]);
  FUNC_3(VAR_21[1]);
  FUNC_3(VAR_22[0]);
  FUNC_3(VAR_22[1]);
  (void)FUNC_2(VAR_5, &VAR_40, ((void*)0));
  VAR_17 = VAR_34;
  return (VAR_12);
 }
 else if (VAR_30 == 0) {



  (void)FUNC_2(VAR_5, &VAR_40, ((void*)0));
  if ((VAR_22[1] != VAR_6 ?
      FUNC_4(VAR_22[1], VAR_6) :
      FUNC_6(VAR_22[1], VAR_1, 0)) < 0)
   FUNC_5(1);
  if (FUNC_6(VAR_21[0], VAR_1, 0) < 0)
   FUNC_5(1);
  FUNC_8(VAR_16, "sh", VAR_20 & VAR_15 ? "-u" : "+u",
      "-c", "IFS=$1;eval \"$2\";"
      "freebsd_wordexp -f \"$3\" ${4:+\"$4\"}",
      "",
      VAR_41 != ((void*)0) ? VAR_41 : " \t\n",
      VAR_20 & VAR_13 ? "" : "exec 2>/dev/null",
      VAR_23,
      VAR_20 & VAR_11 ? "-p" : "",
      (char *)((void*)0));
  FUNC_5(1);
 }




 FUNC_3(VAR_22[1]);
 FUNC_3(VAR_21[0]);
 if (!FUNC_21(VAR_21[1], VAR_18, FUNC_18(VAR_18))) {
  FUNC_3(VAR_21[1]);
  VAR_33 = VAR_14;
  goto cleanup;
 }
 FUNC_3(VAR_21[1]);







 switch (FUNC_20(VAR_22[0], VAR_24, 34)) {
 case 1:
  VAR_33 = VAR_24[0] == 'C' ? VAR_9 : VAR_8;
  VAR_34 = VAR_17;
  goto cleanup;
 case 34:
  break;
 default:
  VAR_33 = VAR_14;
  VAR_34 = VAR_17;
  goto cleanup;
 }
 VAR_24[17] = '\0';
 VAR_25 = FUNC_19(VAR_24 + 1, ((void*)0), 16);
 VAR_24[34] = '\0';
 VAR_26 = FUNC_19(VAR_24 + 18, ((void*)0), 16) + VAR_25;






 VAR_28 = VAR_19->we_nbytes;
 VAR_29 = VAR_19->we_wordc;
 if ((VAR_20 & (VAR_10|VAR_7)) == (VAR_10|VAR_7))
  VAR_29 += VAR_19->we_offs;
 VAR_19->we_wordc += VAR_25;
 VAR_19->we_nbytes += VAR_26;
 if ((VAR_38 = FUNC_14(VAR_19->we_wordv, (VAR_19->we_wordc + 1 +
     (VAR_20 & VAR_10 ? VAR_19->we_offs : 0)),
     sizeof(char *))) == ((void*)0)) {
  VAR_33 = VAR_12;
  goto cleanup;
 }
 VAR_19->we_wordv = VAR_38;
 if ((VAR_37 = FUNC_13(VAR_19->we_strings, VAR_19->we_nbytes)) == ((void*)0)) {
  VAR_33 = VAR_12;
  goto cleanup;
 }
 for (VAR_27 = 0; VAR_27 < VAR_29; VAR_27++)
  if (VAR_19->we_wordv[VAR_27] != ((void*)0))
   VAR_19->we_wordv[VAR_27] += VAR_37 - VAR_19->we_strings;
 VAR_19->we_strings = VAR_37;

 if (FUNC_20(VAR_22[0], VAR_19->we_strings + VAR_28, VAR_26) != VAR_26) {
  VAR_33 = VAR_12;
  VAR_34 = VAR_17;
  goto cleanup;
 }

 VAR_33 = 0;
cleanup:
 FUNC_3(VAR_22[0]);
 do
  VAR_31 = FUNC_7(VAR_30, &VAR_32, 0);
 while (VAR_31 < 0 && VAR_17 == VAR_0);
 (void)FUNC_2(VAR_5, &VAR_40, ((void*)0));
 if (VAR_33 != 0) {
  VAR_17 = VAR_34;
  return (VAR_33);
 }
 if (VAR_31 < 0 || !FUNC_1(VAR_32) || FUNC_0(VAR_32) != 0)
  return (VAR_12);





 if (VAR_29 == 0 && VAR_20 & VAR_10)
  while (VAR_29 < VAR_19->we_offs)
   VAR_19->we_wordv[VAR_29++] = ((void*)0);
 VAR_36 = VAR_19->we_strings + VAR_28;
 while (VAR_25-- != 0) {
  VAR_19->we_wordv[VAR_29++] = VAR_36;
  if ((VAR_35 = FUNC_11(VAR_36, '\0', VAR_26)) == ((void*)0))
   return (VAR_12);
  VAR_26 -= VAR_35 - VAR_36 + 1;
  VAR_36 = VAR_35 + 1;
 }
 VAR_19->we_wordv[VAR_29] = ((void*)0);

 return (0);
}
