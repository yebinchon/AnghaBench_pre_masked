
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dl_phdr_info {int dlpi_phnum; uintptr_t dlpi_addr; TYPE_1__* dlpi_phdr; } ;
typedef int addr ;
struct TYPE_2__ {scalar_t__ p_type; int p_flags; uintptr_t p_vaddr; uintptr_t p_memsz; } ;
typedef TYPE_1__ Elf_Phdr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_0(struct dl_phdr_info *VAR_2, void *VAR_3)
{
 const Elf_Phdr *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->dlpi_phnum; VAR_5++) {
  VAR_4 = &VAR_2->dlpi_phdr[VAR_5];
  if (VAR_4->p_type != VAR_1)
   continue;
  if ((VAR_4->p_flags & VAR_0) == 0)
   continue;


  if (VAR_2->dlpi_addr + VAR_4->p_vaddr <= (uintptr_t)VAR_3 &&
      (uintptr_t)VAR_3 + sizeof(VAR_3) < VAR_2->dlpi_addr +
      VAR_4->p_vaddr + VAR_4->p_memsz)
   break;
 }
 return (VAR_5 != VAR_2->dlpi_phnum);
}
