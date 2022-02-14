
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int e_class; scalar_t__ e_kind; } ;
struct TYPE_12__ {scalar_t__ p_align; int p_flags; scalar_t__ p_memsz; scalar_t__ p_filesz; scalar_t__ p_paddr; scalar_t__ p_vaddr; int p_offset; int p_type; } ;
struct TYPE_11__ {void* p_align; int p_flags; void* p_memsz; void* p_filesz; void* p_paddr; void* p_vaddr; int p_offset; int p_type; } ;
typedef TYPE_1__ GElf_Phdr ;
typedef void* Elf64_Xword ;
typedef TYPE_1__ Elf64_Phdr ;
typedef int Elf64_Ehdr ;
typedef void* Elf64_Addr ;
typedef TYPE_3__ Elf32_Phdr ;
typedef int Elf32_Ehdr ;
typedef TYPE_4__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (TYPE_4__*,int,int ) ;
 void* FUNC_2 (TYPE_4__*,int) ;
 scalar_t__ FUNC_3 (TYPE_4__*,size_t*) ;

GElf_Phdr *
FUNC_4(Elf *VAR_4, int VAR_5, GElf_Phdr *VAR_6)
{
 int VAR_7;
 Elf32_Ehdr *VAR_8;
 Elf64_Ehdr *VAR_9;
 Elf32_Phdr *VAR_10;
 Elf64_Phdr *VAR_11;
 size_t VAR_12;

 if (VAR_6 == ((void*)0) || VAR_4 == ((void*)0) ||
     ((VAR_7 = VAR_4->e_class) != VAR_1 && VAR_7 != VAR_2) ||
     (VAR_4->e_kind != VAR_3) || VAR_5 < 0 ||
     FUNC_3(VAR_4, &VAR_12) < 0) {
  FUNC_0(VAR_0, 0);
  return (((void*)0));
 }

 if ((size_t)VAR_5 >= VAR_12) {
  FUNC_0(VAR_0, 0);
  return (((void*)0));
 }

 if (VAR_7 == VAR_1) {
  if ((VAR_8 = FUNC_1(VAR_4, VAR_1, 0)) == ((void*)0) ||
      ((VAR_10 = FUNC_2(VAR_4, VAR_1)) == ((void*)0)))
   return (((void*)0));

  VAR_10 += VAR_5;

  VAR_6->p_type = VAR_10->p_type;
  VAR_6->p_offset = VAR_10->p_offset;
  VAR_6->p_vaddr = (Elf64_Addr) VAR_10->p_vaddr;
  VAR_6->p_paddr = (Elf64_Addr) VAR_10->p_paddr;
  VAR_6->p_filesz = (Elf64_Xword) VAR_10->p_filesz;
  VAR_6->p_memsz = (Elf64_Xword) VAR_10->p_memsz;
  VAR_6->p_flags = VAR_10->p_flags;
  VAR_6->p_align = (Elf64_Xword) VAR_10->p_align;

 } else {
  if ((VAR_9 = FUNC_1(VAR_4, VAR_2, 0)) == ((void*)0) ||
      (VAR_11 = FUNC_2(VAR_4, VAR_2)) == ((void*)0))
   return (((void*)0));

  VAR_11 += VAR_5;

  *VAR_6 = *VAR_11;
 }

 return (VAR_6);
}
