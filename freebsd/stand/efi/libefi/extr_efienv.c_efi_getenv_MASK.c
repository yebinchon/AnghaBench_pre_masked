
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t UINTN ;
typedef int UINT32 ;
struct TYPE_2__ {scalar_t__ (* GetVariable ) (int *,int *,int *,size_t*,void*) ;} ;
typedef scalar_t__ EFI_STATUS ;
typedef int EFI_GUID ;
typedef int CHAR16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *,int *,size_t*,void*) ;
 scalar_t__ FUNC_2 (char const*,int **,size_t*) ;

EFI_STATUS
FUNC_3(EFI_GUID *VAR_4, const char *VAR_5, void *VAR_6, size_t *VAR_7)
{
 size_t VAR_8;
 CHAR16 *VAR_9;
 UINT32 VAR_10;
 UINTN VAR_11;
 EFI_STATUS VAR_12;

 VAR_9 = ((void*)0);
 if (FUNC_2(VAR_5, &VAR_9, &VAR_8) != 0)
  return (VAR_1);
 VAR_11 = *VAR_7;
 VAR_12 = VAR_3->GetVariable(VAR_9, VAR_4, &VAR_10, &VAR_11, VAR_6);
 if (VAR_12 == VAR_2 || VAR_12 == VAR_0)
  *VAR_7 = VAR_11;
 FUNC_0(VAR_9);
 return (VAR_12);
}
