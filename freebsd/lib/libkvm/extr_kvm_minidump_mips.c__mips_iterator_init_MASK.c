
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ptesize; } ;
struct vmstate {int pte_size; TYPE_1__ hdr; } ;
struct mips_iter {int nptes; scalar_t__ pteindex; TYPE_2__* kd; } ;
typedef int mips64_pte_t ;
typedef int mips32_pte_t ;
struct TYPE_5__ {struct vmstate* vmst; } ;
typedef TYPE_2__ kvm_t ;



__attribute__((used)) static void
FUNC_0(struct mips_iter *VAR_0, kvm_t *VAR_1)
{
 struct vmstate *VAR_2 = VAR_1->vmst;

 VAR_0->kd = VAR_1;
 VAR_0->pteindex = 0;
 if (VAR_2->pte_size == 64)
  VAR_0->nptes = VAR_2->hdr.ptesize / sizeof(mips64_pte_t);
 else
  VAR_0->nptes = VAR_2->hdr.ptesize / sizeof(mips32_pte_t);
 return;
}
