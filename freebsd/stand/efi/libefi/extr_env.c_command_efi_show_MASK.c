
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uuid_t ;
typedef int UINTN ;
struct TYPE_2__ {scalar_t__ (* GetNextVariableName ) (int*,char*,int *) ;} ;
typedef scalar_t__ EFI_STATUS ;
typedef int EFI_GUID ;
typedef char CHAR16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,char*,unsigned int) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,int *,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char**,char*) ;
 char* FUNC_5 (int) ;
 unsigned int FUNC_6 (char*) ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (char*,...) ;
 char* FUNC_10 (char*,int) ;
 unsigned int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int*,char*,int *) ;
 int FUNC_13 (int *,int *,int *) ;
 scalar_t__ FUNC_14 (char*,char*) ;

__attribute__((used)) static int
FUNC_15(int VAR_12, char *VAR_13[])
{
 int VAR_14 = 0, VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;
 int VAR_18, VAR_19;
 unsigned VAR_20;
 EFI_STATUS VAR_21;
 EFI_GUID VAR_22 = VAR_7;
 EFI_GUID VAR_23 = VAR_7;
 CHAR16 *VAR_24;
 CHAR16 *VAR_25;
 CHAR16 VAR_26[128];
 UINTN VAR_27;
 UINTN VAR_28;

 VAR_10 = 1;
 VAR_11 = 1;
 VAR_9 = 1;

 while ((VAR_18 = FUNC_4(VAR_12, VAR_13, "ag:lv:")) != -1) {
  switch (VAR_18) {
  case 'a':
   VAR_14 = 1;
   break;
  case 'g':
   VAR_15 = 1;
   if (FUNC_1(VAR_8, &VAR_23) == 0) {
    FUNC_9("uuid %s could not be parsed\n", VAR_8);
    return (VAR_0);
   }
   break;
  case 'l':
   VAR_16 = 1;
   break;
  case 'v':
   VAR_17 = 1;
   if (FUNC_11(VAR_8) >= FUNC_6(VAR_26)) {
    FUNC_9("Variable %s is longer than %zu "
        "characters\n", VAR_8, FUNC_6(VAR_26));
    return (VAR_0);
   }
   FUNC_0(VAR_8, VAR_26, FUNC_6(VAR_26));
   break;
  default:
   return (VAR_0);
  }
 }

 if (VAR_12 == 1)
  VAR_14 = 1;

 if (VAR_14 && (VAR_15 || VAR_17)) {
  FUNC_9("-a isn't compatible with -g or -v\n");
  return (VAR_0);
 }

 if (VAR_14 && VAR_10 < VAR_12) {
  FUNC_9("-a doesn't take any args\n");
  return (VAR_0);
 }

 VAR_12 -= VAR_10;
 VAR_13 += VAR_10;

 FUNC_8();
 if (VAR_17 && VAR_15) {
  VAR_19 = FUNC_2(VAR_26, &VAR_23, VAR_16);
  if (VAR_19 == VAR_2)
   VAR_19 = VAR_1;
  FUNC_7();
  return (VAR_19);
 }

 if (VAR_12 == 2) {
  VAR_8 = VAR_13[0];
  if (FUNC_11(VAR_8) >= FUNC_6(VAR_26)) {
   FUNC_9("Variable %s is longer than %zu characters\n",
       VAR_8, FUNC_6(VAR_26));
   FUNC_7();
   return (VAR_0);
  }
  for (VAR_20 = 0; VAR_20 < FUNC_11(VAR_8); VAR_20++)
   VAR_26[VAR_20] = VAR_8[VAR_20];
  VAR_26[VAR_20] = 0;
  VAR_8 = VAR_13[1];
  if (FUNC_1(VAR_8, &VAR_23) == 0) {
   FUNC_9("uuid %s could not be parsed\n", VAR_8);
   FUNC_7();
   return (VAR_0);
  }
  VAR_19 = FUNC_2(VAR_26, &VAR_23, VAR_16);
  if (VAR_19 == VAR_2)
   VAR_19 = VAR_1;
  FUNC_7();
  return (VAR_19);
 }

 if (VAR_12 > 0) {
  FUNC_9("Too many args: %d\n", VAR_12);
  FUNC_7();
  return (VAR_0);
 }






 VAR_27 = 1024;
 VAR_24 = FUNC_5(VAR_27);
 if (VAR_24 == ((void*)0)) {
  FUNC_9("Can't allocate memory to get variables\n");
  FUNC_7();
  return (VAR_0);
 }
 VAR_24[0] = 0;
 while (1) {
  VAR_28 = VAR_27;
  VAR_21 = VAR_6->GetNextVariableName(&VAR_28, VAR_24, &VAR_22);
  if (VAR_21 == VAR_3) {
   VAR_27 = VAR_28;
   VAR_25 = FUNC_10(VAR_24, VAR_27);
   if (VAR_25 == ((void*)0)) {
    FUNC_9("Can't allocate memory to get "
        "variables\n");
    VAR_19 = VAR_0;
    break;
   }
   VAR_24 = VAR_25;
   continue;
  }
  if (VAR_21 == VAR_4) {
   VAR_19 = VAR_1;
   break;
  }
  if (VAR_21 != VAR_5) {
   VAR_19 = VAR_0;
   break;
  }

  if (VAR_14) {
   VAR_19 = FUNC_2(VAR_24, &VAR_22, VAR_16);
   if (VAR_19 != VAR_1) {
    if (VAR_19 == VAR_2)
     VAR_19 = VAR_1;
    break;
   }
   continue;
  }
  if (VAR_17) {
   if (FUNC_14(VAR_26, VAR_24) == 0) {
    VAR_19 = FUNC_2(VAR_24, &VAR_22, VAR_16);
    if (VAR_19 != VAR_1) {
     if (VAR_19 == VAR_2)
      VAR_19 = VAR_1;
     break;
    }
    continue;
   }
  }
  if (VAR_15) {
   VAR_19 = FUNC_13((uuid_t *)&VAR_22,
       (uuid_t *)&VAR_23, ((void*)0));
   if (VAR_19 != 0) {
    VAR_19 = FUNC_2(VAR_24, &VAR_22, VAR_16);
    if (VAR_19 != VAR_1) {
     if (VAR_19 == VAR_2)
      VAR_19 = VAR_1;
     break;
    }
    continue;
   }
  }
 }
 FUNC_3(VAR_24);
 FUNC_7();

 return (VAR_19);
}
