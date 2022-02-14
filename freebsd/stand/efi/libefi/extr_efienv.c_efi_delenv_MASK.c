
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
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ,int ,int *) ;
 scalar_t__ FUNC_2 (char const*,int **,size_t*) ;

EFI_STATUS
FUNC_3(EFI_GUID *VAR_2, const char *VAR_3)
{
 CHAR16 *VAR_4;
 size_t VAR_5;
 EFI_STATUS VAR_6;

 VAR_4 = ((void*)0);
 if (FUNC_2(VAR_3, &VAR_4, &VAR_5) != 0)
  return (VAR_0);

 VAR_6 = VAR_1->SetVariable(VAR_4, VAR_2, 0, 0, ((void*)0));
 FUNC_0(VAR_4);
 return (VAR_6);
}
