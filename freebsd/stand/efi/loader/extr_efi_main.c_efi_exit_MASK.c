
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* Exit ) (int ,int ,int ,int *) ;int (* FreePages ) (int ,int ) ;} ;
typedef int EFI_STATUS ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int *) ;

void
FUNC_3(EFI_STATUS VAR_4)
{

 VAR_0->FreePages(VAR_2, FUNC_0(VAR_3));
 VAR_0->Exit(VAR_1, VAR_4, 0, ((void*)0));
}
