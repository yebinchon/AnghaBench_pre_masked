
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ptesize; scalar_t__ paemode; } ;
struct vmstate {TYPE_1__ hdr; } ;
struct i386_iter {int nptes; scalar_t__ pteindex; TYPE_2__* kd; } ;
struct TYPE_5__ {struct vmstate* vmst; } ;
typedef TYPE_2__ kvm_t ;
typedef int i386_pte_t ;
typedef int i386_pte_pae_t ;



__attribute__((used)) static void
FUNC_0(struct i386_iter *VAR_0, kvm_t *VAR_1)
{
 struct vmstate *VAR_2 = VAR_1->vmst;

 VAR_0->kd = VAR_1;
 VAR_0->pteindex = 0;
 if (VAR_2->hdr.paemode) {
  VAR_0->nptes = VAR_2->hdr.ptesize / sizeof(i386_pte_pae_t);
 } else {
  VAR_0->nptes = VAR_2->hdr.ptesize / sizeof(i386_pte_t);
 }
 return;
}
