
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_1__* elf_file_t ;
struct TYPE_7__ {int e_phnum; scalar_t__ e_phoff; } ;
struct TYPE_6__ {scalar_t__ p_type; int p_flags; int p_memsz; scalar_t__ p_vaddr; } ;
struct TYPE_5__ {scalar_t__ address; } ;
typedef TYPE_2__ Elf_Phdr ;
typedef TYPE_3__ Elf_Ehdr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(elf_file_t VAR_6, vm_prot_t VAR_7)
{

 Elf_Ehdr *VAR_8;
 Elf_Phdr *VAR_9, *VAR_10;
 vm_prot_t VAR_11;
 int VAR_12;

 VAR_12 = 0;
 VAR_8 = (Elf_Ehdr *)VAR_6->address;
 VAR_9 = (Elf_Phdr *)(VAR_6->address + VAR_8->e_phoff);
 VAR_10 = VAR_9 + VAR_8->e_phnum;
 for (; VAR_9 < VAR_10; VAR_9++) {
  if (VAR_9->p_type != VAR_2)
   continue;

  VAR_11 = VAR_7 | VAR_4;
  if ((VAR_9->p_flags & VAR_0) != 0)
   VAR_11 |= VAR_5;
  if ((VAR_9->p_flags & VAR_1) != 0)
   VAR_11 |= VAR_3;
  VAR_12 = FUNC_0((vm_offset_t)VAR_6->address +
      VAR_9->p_vaddr, FUNC_1(VAR_9->p_memsz), VAR_11);
  if (VAR_12 != 0)
   break;
 }
 return (VAR_12);



}
