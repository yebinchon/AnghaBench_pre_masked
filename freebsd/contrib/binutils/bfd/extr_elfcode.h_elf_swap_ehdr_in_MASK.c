
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_8__ {int sign_extend_vma; } ;
struct TYPE_7__ {int e_shstrndx; int e_shnum; int e_shentsize; int e_phnum; int e_phentsize; int e_ehsize; int e_flags; int e_shoff; int e_phoff; int e_entry; int e_version; int e_machine; int e_type; int e_ident; } ;
struct TYPE_6__ {void* e_shstrndx; void* e_shnum; void* e_shentsize; void* e_phnum; void* e_phentsize; void* e_ehsize; void* e_flags; void* e_shoff; void* e_phoff; void* e_entry; void* e_version; void* e_machine; void* e_type; int e_ident; } ;
typedef TYPE_1__ Elf_Internal_Ehdr ;
typedef TYPE_2__ Elf_External_Ehdr ;


 int VAR_0 ;
 void* FUNC_0 (int *,int ) ;
 void* FUNC_1 (int *,int ) ;
 void* FUNC_2 (int *,int ) ;
 void* FUNC_3 (int *,int ) ;
 TYPE_3__* FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_6 (bfd *VAR_1,
    const Elf_External_Ehdr *VAR_2,
    Elf_Internal_Ehdr *VAR_3)
{
  int VAR_4 = FUNC_4 (VAR_1)->sign_extend_vma;
  FUNC_5 (VAR_3->e_ident, VAR_2->e_ident, VAR_0);
  VAR_3->e_type = FUNC_0 (VAR_1, VAR_2->e_type);
  VAR_3->e_machine = FUNC_0 (VAR_1, VAR_2->e_machine);
  VAR_3->e_version = FUNC_1 (VAR_1, VAR_2->e_version);
  if (VAR_4)
    VAR_3->e_entry = FUNC_2 (VAR_1, VAR_2->e_entry);
  else
    VAR_3->e_entry = FUNC_3 (VAR_1, VAR_2->e_entry);
  VAR_3->e_phoff = FUNC_3 (VAR_1, VAR_2->e_phoff);
  VAR_3->e_shoff = FUNC_3 (VAR_1, VAR_2->e_shoff);
  VAR_3->e_flags = FUNC_1 (VAR_1, VAR_2->e_flags);
  VAR_3->e_ehsize = FUNC_0 (VAR_1, VAR_2->e_ehsize);
  VAR_3->e_phentsize = FUNC_0 (VAR_1, VAR_2->e_phentsize);
  VAR_3->e_phnum = FUNC_0 (VAR_1, VAR_2->e_phnum);
  VAR_3->e_shentsize = FUNC_0 (VAR_1, VAR_2->e_shentsize);
  VAR_3->e_shnum = FUNC_0 (VAR_1, VAR_2->e_shnum);
  VAR_3->e_shstrndx = FUNC_0 (VAR_1, VAR_2->e_shstrndx);
}
