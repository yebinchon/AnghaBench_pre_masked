
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int __size_t ;
typedef int UINT32 ;
struct TYPE_2__ {int (* SetVariable ) (int *,int *,int ,int ,void*) ;} ;
typedef int EFI_STATUS ;
typedef int EFI_GUID ;
typedef int CHAR16 ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ,int ,void*) ;
 scalar_t__ FUNC_2 (char const*,int **,size_t*) ;

EFI_STATUS
FUNC_3(EFI_GUID *VAR_2, const char *VAR_3, UINT32 VAR_4, void *VAR_5, __size_t VAR_6)
{
 EFI_STATUS VAR_7;
 CHAR16 *VAR_8;
 size_t VAR_9;

 VAR_8 = ((void*)0);
 if (FUNC_2(VAR_3, &VAR_8, &VAR_9) != 0)
  return (VAR_0);

 VAR_7 = VAR_1->SetVariable(VAR_8, VAR_2, VAR_4, VAR_6, VAR_5);
 FUNC_0(VAR_8);
 return (VAR_7);
}
