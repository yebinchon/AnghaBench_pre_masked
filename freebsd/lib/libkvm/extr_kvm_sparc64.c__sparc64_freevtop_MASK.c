
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* vmst; } ;
typedef TYPE_1__ kvm_t ;
struct TYPE_5__ {struct TYPE_5__* vm_regions; } ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(kvm_t *VAR_0)
{

 FUNC_0(VAR_0->vmst->vm_regions);
 FUNC_0(VAR_0->vmst);
 VAR_0->vmst = ((void*)0);
}
