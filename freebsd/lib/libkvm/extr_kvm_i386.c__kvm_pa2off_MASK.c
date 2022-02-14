
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct vmstate {size_t phnum; TYPE_2__* phdr; } ;
typedef scalar_t__ off_t ;
struct TYPE_4__ {scalar_t__ rawdump; struct vmstate* vmst; } ;
typedef TYPE_1__ kvm_t ;
struct TYPE_5__ {scalar_t__ p_paddr; scalar_t__ p_memsz; scalar_t__ p_offset; } ;
typedef TYPE_2__ GElf_Phdr ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static size_t
FUNC_0(kvm_t *VAR_2, uint64_t VAR_3, off_t *VAR_4)
{
 struct vmstate *VAR_5 = VAR_2->vmst;
 GElf_Phdr *VAR_6;
 size_t VAR_7;

 if (VAR_2->rawdump) {
  *VAR_4 = VAR_3;
  return (VAR_1 - (VAR_3 & VAR_0));
 }

 VAR_6 = VAR_5->phdr;
 VAR_7 = VAR_5->phnum;
 while (VAR_7 && (VAR_3 < VAR_6->p_paddr || VAR_3 >= VAR_6->p_paddr + VAR_6->p_memsz))
  VAR_6++, VAR_7--;
 if (VAR_7 == 0)
  return (0);
 *VAR_4 = (VAR_3 - VAR_6->p_paddr) + VAR_6->p_offset;
 return (VAR_1 - (VAR_3 & VAR_0));
}
