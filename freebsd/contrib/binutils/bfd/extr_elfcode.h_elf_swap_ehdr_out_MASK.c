
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
struct TYPE_6__ {unsigned int e_type; unsigned int e_machine; unsigned int e_ehsize; unsigned int e_phentsize; unsigned int e_phnum; unsigned int e_shentsize; unsigned int e_shnum; unsigned int e_shstrndx; int e_flags; int e_shoff; int e_phoff; int e_entry; int e_version; int e_ident; } ;
typedef TYPE_1__ Elf_Internal_Ehdr ;
typedef TYPE_2__ Elf_External_Ehdr ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned int,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_3__* FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_6 (bfd *VAR_4,
     const Elf_Internal_Ehdr *VAR_5,
     Elf_External_Ehdr *VAR_6)
{
  unsigned int VAR_7;
  int VAR_8 = FUNC_4 (VAR_4)->sign_extend_vma;
  FUNC_5 (VAR_6->e_ident, VAR_5->e_ident, VAR_0);

  FUNC_0 (VAR_4, VAR_5->e_type, VAR_6->e_type);
  FUNC_0 (VAR_4, VAR_5->e_machine, VAR_6->e_machine);
  FUNC_1 (VAR_4, VAR_5->e_version, VAR_6->e_version);
  if (VAR_8)
    FUNC_2 (VAR_4, VAR_5->e_entry, VAR_6->e_entry);
  else
    FUNC_3 (VAR_4, VAR_5->e_entry, VAR_6->e_entry);
  FUNC_3 (VAR_4, VAR_5->e_phoff, VAR_6->e_phoff);
  FUNC_3 (VAR_4, VAR_5->e_shoff, VAR_6->e_shoff);
  FUNC_1 (VAR_4, VAR_5->e_flags, VAR_6->e_flags);
  FUNC_0 (VAR_4, VAR_5->e_ehsize, VAR_6->e_ehsize);
  FUNC_0 (VAR_4, VAR_5->e_phentsize, VAR_6->e_phentsize);
  FUNC_0 (VAR_4, VAR_5->e_phnum, VAR_6->e_phnum);
  FUNC_0 (VAR_4, VAR_5->e_shentsize, VAR_6->e_shentsize);
  VAR_7 = VAR_5->e_shnum;
  if (VAR_7 >= VAR_1)
    VAR_7 = VAR_2;
  FUNC_0 (VAR_4, VAR_7, VAR_6->e_shnum);
  VAR_7 = VAR_5->e_shstrndx;
  if (VAR_7 >= VAR_1)
    VAR_7 = VAR_3;
  FUNC_0 (VAR_4, VAR_7, VAR_6->e_shstrndx);
}
