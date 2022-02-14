
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int SetupMode ;
typedef int SecureBoot ;
typedef scalar_t__ EFI_STATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*,int*,size_t*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,...) ;

int
FUNC_3(void)
{
 UINT8 VAR_2;
 UINT8 VAR_3;
 size_t VAR_4;
 EFI_STATUS VAR_5;

 VAR_4 = sizeof(VAR_2);
 VAR_5 = FUNC_0("SecureBoot", &VAR_2, &VAR_4);
 if (VAR_5 != VAR_1) {
  if (VAR_5 == VAR_0)
   return (0);

  FUNC_2("Failed to read \"SecureBoot\" variable\n");
  return (-FUNC_1(VAR_5));
 }

 VAR_4 = sizeof(VAR_3);
 VAR_5 = FUNC_0("SetupMode", &VAR_3, &VAR_4);
 if (VAR_5 != VAR_1)
  VAR_3 = 0;

 FUNC_2("   SecureBoot: %d, SetupMode: %d\n", VAR_2, VAR_3);

 return (VAR_2 == 1 && VAR_3 == 0);
}
