
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* OpenProtocol ) (int ,int *,void**,int ,int *,int ) ;} ;
typedef int EFI_STATUS ;
typedef int EFI_HANDLE ;
typedef int EFI_GUID ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,void**,int ,int *,int ) ;

EFI_STATUS
FUNC_1(EFI_HANDLE VAR_3, EFI_GUID *VAR_4, void **VAR_5)
{
 return (VAR_0->OpenProtocol(VAR_3, VAR_4, VAR_5, VAR_2, ((void*)0),
     VAR_1));
}
