
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pd_handle; scalar_t__ pd_alias; } ;
typedef TYPE_1__ pdinfo_t ;
typedef scalar_t__ EFI_HANDLE ;



__attribute__((used)) static bool
FUNC_0(pdinfo_t *VAR_0, EFI_HANDLE VAR_1)
{

 return (VAR_0->pd_handle == VAR_1 || VAR_0->pd_alias == VAR_1);
}
