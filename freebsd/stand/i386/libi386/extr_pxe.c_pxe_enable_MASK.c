
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int segment; scalar_t__ offset; } ;
struct TYPE_5__ {TYPE_1__ PXEPtr; } ;
typedef TYPE_2__ pxenv_t ;
typedef int pxe_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int * VAR_0 ;
 int * VAR_1 ;
 TYPE_2__* VAR_2 ;

void
FUNC_1(void *VAR_3)
{
 VAR_2 = (pxenv_t *)VAR_3;
 VAR_1 = (pxe_t *)FUNC_0(VAR_2->PXEPtr.segment * 16 +
     VAR_2->PXEPtr.offset);
 VAR_0 = ((void*)0);
}
