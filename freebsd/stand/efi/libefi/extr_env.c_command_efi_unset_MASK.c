
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* SetVariable ) (int *,int *,int ,int ,int *) ;} ;
typedef int EFI_STATUS ;
typedef int EFI_GUID ;
typedef int CHAR16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (char*,int *,int ) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int *,int *,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_7(int VAR_3, char *VAR_4[])
{
 char *VAR_5, *VAR_6;
 CHAR16 VAR_7[128];
 EFI_GUID VAR_8;




 if (VAR_3 != 3) {
  FUNC_5("efi-unset uuid var\n");
  return (VAR_0);
 }
 VAR_5 = VAR_4[1];
 VAR_6 = VAR_4[2];
 if (FUNC_3(VAR_5, &VAR_8) == 0) {
  FUNC_5("Invalid uuid %s\n", VAR_5);
  return (VAR_0);
 }
 FUNC_2(VAR_6, VAR_7, FUNC_4(VAR_7));
 FUNC_5("would unset %s %s \n", VAR_5, VAR_6);

 return (VAR_1);
}
