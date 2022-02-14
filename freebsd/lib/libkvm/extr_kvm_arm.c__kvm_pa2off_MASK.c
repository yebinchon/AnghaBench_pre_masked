
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct vmstate {size_t phnum; TYPE_2__* phdr; } ;
typedef scalar_t__ off_t ;
struct TYPE_4__ {struct vmstate* vmst; } ;
typedef TYPE_1__ kvm_t ;
struct TYPE_5__ {scalar_t__ p_paddr; scalar_t__ p_memsz; scalar_t__ p_offset; } ;
typedef TYPE_2__ GElf_Phdr ;



__attribute__((used)) static size_t
FUNC_0(kvm_t *VAR_0, uint64_t VAR_1, off_t *VAR_2, size_t VAR_3)
{
 struct vmstate *VAR_4 = VAR_0->vmst;
 GElf_Phdr *VAR_5;
 size_t VAR_6;

 VAR_5 = VAR_4->phdr;
 VAR_6 = VAR_4->phnum;
 while (VAR_6 && (VAR_1 < VAR_5->p_paddr || VAR_1 >= VAR_5->p_paddr + VAR_5->p_memsz))
  VAR_5++, VAR_6--;
 if (VAR_6 == 0)
  return (0);

 *VAR_2 = (VAR_1 - VAR_5->p_paddr) + VAR_5->p_offset;
 if (VAR_3 == 0)
  return (VAR_5->p_memsz - (VAR_1 - VAR_5->p_paddr));
 return (VAR_3 - ((size_t)VAR_1 & (VAR_3 - 1)));
}
