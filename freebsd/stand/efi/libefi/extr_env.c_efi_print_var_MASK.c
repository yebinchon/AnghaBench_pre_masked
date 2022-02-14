
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ UINTN ;
typedef int UINT32 ;
struct TYPE_2__ {scalar_t__ (* GetVariable ) (int *,int *,int *,scalar_t__*,char*) ;} ;
typedef scalar_t__ EFI_STATUS ;
typedef int EFI_GUID ;
typedef int CHAR16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 char* VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (int *,char**) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 int FUNC_4 (int *,char*,scalar_t__) ;
 int FUNC_5 (char*,scalar_t__) ;
 int FUNC_6 (int *,char*,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (char*,...) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 scalar_t__ FUNC_13 (int *,int *,int *,scalar_t__*,char*) ;
 scalar_t__ FUNC_14 (int *,int *,int *,scalar_t__*,char*) ;

__attribute__((used)) static int
FUNC_15(CHAR16 *VAR_8, EFI_GUID *VAR_9, int VAR_10)
{
 UINTN VAR_11;
 EFI_STATUS VAR_12;
 UINT32 VAR_13;
 char *VAR_14;
 uint8_t *VAR_15;
 int VAR_16 = VAR_1;

 VAR_14 = ((void*)0);
 VAR_11 = 0;
 VAR_12 = VAR_7->GetVariable(VAR_8, VAR_9, &VAR_13, &VAR_11, ((void*)0));
 if (VAR_12 != VAR_3) {
  FUNC_11("Can't get the variable: error %#lx\n",
      FUNC_0(VAR_12));
  return (VAR_0);
 }
 VAR_15 = FUNC_9(VAR_11);
 if (VAR_15 == ((void*)0)) {
  FUNC_11("Out of memory\n");
  return (VAR_0);
 }

 VAR_12 = VAR_7->GetVariable(VAR_8, VAR_9, &VAR_13, &VAR_11, VAR_15);
 if (VAR_12 != VAR_5) {
  FUNC_11("Can't get the variable: error %#lx\n",
      FUNC_0(VAR_12));
  FUNC_8(VAR_15);
  return (VAR_0);
 }

 if (FUNC_1(VAR_9, &VAR_14) == 0) {
  VAR_16 = VAR_0;
  goto done;
 }
 FUNC_11("%s ", VAR_14);
 FUNC_7(VAR_13);
 FUNC_11(" %S", VAR_8);

 if (VAR_10 == 0) {
  if (FUNC_12(VAR_14, "global") == 0)
   VAR_16 = FUNC_3(VAR_8, VAR_15, VAR_11);
  else if (FUNC_12(VAR_14, "freebsd") == 0)
   VAR_16 = FUNC_2(VAR_8, VAR_15, VAR_11);
  else if (FUNC_12(VAR_14,
      VAR_4) == 0)
   VAR_16 = FUNC_4(VAR_8, VAR_15, VAR_11);
  else if (FUNC_12(VAR_14,
      "47c7b227-c42a-11d2-8e57-00a0c969723b") == 0)
   VAR_16 = FUNC_6(VAR_8, VAR_15, VAR_11);
  else if (FUNC_12(VAR_14, VAR_6) == 0) {
   FUNC_11(" = ");
   FUNC_11("%u", *((uint32_t *)VAR_15));
   VAR_16 = VAR_1;
   if (FUNC_10("\n"))
    VAR_16 = VAR_2;
  } else
   VAR_16 = FUNC_5(VAR_15, VAR_11);
 } else if (FUNC_10("\n"))
  VAR_16 = VAR_2;

done:
 FUNC_8(VAR_14);
 FUNC_8(VAR_15);
 return (VAR_16);
}
