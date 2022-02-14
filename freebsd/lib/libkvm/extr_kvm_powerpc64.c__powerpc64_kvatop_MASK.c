
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vmstate {TYPE_1__* ph; } ;
typedef int off_t ;
struct TYPE_7__ {int program; struct vmstate* vmst; } ;
typedef TYPE_2__ kvm_t ;
typedef int kvaddr_t ;
struct TYPE_6__ {int p_paddr; } ;


 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static int
FUNC_3(kvm_t *VAR_0, kvaddr_t VAR_1, off_t *VAR_2)
{
 struct vmstate *VAR_3;

 VAR_3 = VAR_0->vmst;
 if (FUNC_1(VAR_3->ph->p_paddr) == 0xffffffffffffffff)
  return ((int)FUNC_2(VAR_0, VAR_1, VAR_2));

 FUNC_0(VAR_0, VAR_0->program, "Raw corefile not supported");
 return (0);
}
