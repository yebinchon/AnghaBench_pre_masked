
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vmstate {struct vmstate* phdr; } ;
struct TYPE_3__ {struct vmstate* vmst; } ;
typedef TYPE_1__ kvm_t ;


 int FUNC_0 (struct vmstate*) ;

__attribute__((used)) static void
FUNC_1(kvm_t *VAR_0)
{
 struct vmstate *VAR_1 = VAR_0->vmst;

 FUNC_0(VAR_1->phdr);
 FUNC_0(VAR_1);
 VAR_0->vmst = ((void*)0);
}
