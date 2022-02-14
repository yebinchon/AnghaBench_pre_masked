
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vmstate {scalar_t__ dmphdrsz; TYPE_1__* eh; TYPE_3__* ph; } ;
typedef scalar_t__ off_t ;
struct TYPE_6__ {struct vmstate* vmst; } ;
typedef TYPE_2__ kvm_t ;
typedef scalar_t__ kvaddr_t ;
struct TYPE_7__ {int p_vaddr; int p_memsz; int p_offset; } ;
struct TYPE_5__ {int e_phentsize; int e_phnum; } ;
typedef TYPE_3__ Elf32_Phdr ;


 uintptr_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static size_t
FUNC_2(kvm_t *VAR_0, kvaddr_t VAR_1, off_t *VAR_2)
{
 struct vmstate *VAR_3 = VAR_0->vmst;
 Elf32_Phdr *VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->ph;
 VAR_5 = FUNC_0(VAR_3->eh->e_phnum);
 while (VAR_5 && (VAR_1 < FUNC_1(VAR_4->p_vaddr) ||
     VAR_1 >= FUNC_1(VAR_4->p_vaddr) + FUNC_1(VAR_4->p_memsz))) {
  VAR_5--;
  VAR_4 = (void *)((uintptr_t)VAR_4 + FUNC_0(VAR_3->eh->e_phentsize));
 }
 if (VAR_5 == 0)
  return (0);


 *VAR_2 = VAR_3->dmphdrsz + FUNC_1(VAR_4->p_offset) +
     (VAR_1 - FUNC_1(VAR_4->p_vaddr));
 return (FUNC_1(VAR_4->p_memsz) - (VAR_1 - FUNC_1(VAR_4->p_vaddr)));
}
