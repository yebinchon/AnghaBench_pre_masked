
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* SetVariable ) (int *,int *,int,scalar_t__,char*) ;} ;
typedef int EFI_STATUS ;
typedef int EFI_GUID ;
typedef int CHAR16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (char*,int *,int ) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (int *,int *,int,scalar_t__,char*) ;

__attribute__((used)) static int
FUNC_8(int VAR_6, char *VAR_7[])
{
 char *VAR_8, *VAR_9, *VAR_10;
 CHAR16 VAR_11[128];
 EFI_GUID VAR_12;




 if (VAR_6 != 4) {
  FUNC_5("efi-set uuid var new-value\n");
  return (VAR_0);
 }
 VAR_8 = VAR_7[1];
 VAR_9 = VAR_7[2];
 VAR_10 = VAR_7[3];
 if (FUNC_3(VAR_8, &VAR_12) == 0) {
  FUNC_5("Invalid uuid %s\n", VAR_8);
  return (VAR_0);
 }
 FUNC_2(VAR_9, VAR_11, FUNC_4(VAR_11));
 FUNC_5("would set %s %s = %s\n", VAR_8, VAR_9, VAR_10);

 return (VAR_1);
}
