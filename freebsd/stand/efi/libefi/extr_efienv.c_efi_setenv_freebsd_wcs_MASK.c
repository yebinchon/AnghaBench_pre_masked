
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int efi_char ;
struct TYPE_2__ {int (* SetVariable ) (int *,int *,int,int,int *) ;} ;
typedef int EFI_STATUS ;
typedef int CHAR16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int,int,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char const*,int **,size_t*) ;

EFI_STATUS
FUNC_4(const char *VAR_5, CHAR16 *VAR_6)
{
 CHAR16 *VAR_7 = ((void*)0);
 size_t VAR_8;
 EFI_STATUS VAR_9;

 if (FUNC_3(VAR_5, &VAR_7, &VAR_8) != 0)
  return (VAR_0);
 VAR_9 = VAR_4->SetVariable(VAR_7, &VAR_3,
     VAR_1 | VAR_2,
     (FUNC_2(VAR_6) + 1) * sizeof(efi_char), VAR_6);
 FUNC_0(VAR_7);
 return (VAR_9);
}
