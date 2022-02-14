
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int e_class; } ;
struct TYPE_10__ {int e_shstrndx; int e_shnum; int e_shentsize; int e_phnum; int e_phentsize; int e_ehsize; int e_flags; int e_shoff; int e_phoff; int e_entry; int e_version; int e_machine; int e_type; int e_ident; } ;
struct TYPE_9__ {int e_shstrndx; int e_shnum; int e_shentsize; int e_phnum; int e_phentsize; int e_ehsize; int e_flags; int e_shoff; int e_phoff; int e_entry; int e_version; int e_machine; int e_type; int e_ident; } ;
typedef TYPE_1__ GElf_Ehdr ;
typedef TYPE_1__ Elf64_Ehdr ;
typedef TYPE_3__ Elf32_Ehdr ;
typedef TYPE_4__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (TYPE_4__*,int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;

GElf_Ehdr *
FUNC_4(Elf *VAR_3, GElf_Ehdr *VAR_4)
{
 int VAR_5;
 Elf32_Ehdr *VAR_6;
 Elf64_Ehdr *VAR_7;

 if (VAR_4 == ((void*)0) || VAR_3 == ((void*)0) ||
     ((VAR_5 = VAR_3->e_class) != VAR_1 && VAR_5 != VAR_2)) {
  FUNC_0(VAR_0, 0);
  return (((void*)0));
 }

 if (VAR_5 == VAR_1) {
  if ((VAR_6 = FUNC_1(VAR_3, VAR_1, 0)) == ((void*)0))
   return (((void*)0));

  (void) FUNC_3(VAR_4->e_ident, VAR_6->e_ident,
      sizeof(VAR_6->e_ident));
  VAR_4->e_type = VAR_6->e_type;
  VAR_4->e_machine = VAR_6->e_machine;
  VAR_4->e_version = VAR_6->e_version;
  VAR_4->e_entry = VAR_6->e_entry;
  VAR_4->e_phoff = VAR_6->e_phoff;
  VAR_4->e_shoff = VAR_6->e_shoff;
  VAR_4->e_flags = VAR_6->e_flags;
  VAR_4->e_ehsize = VAR_6->e_ehsize;
  VAR_4->e_phentsize = VAR_6->e_phentsize;
  VAR_4->e_phnum = VAR_6->e_phnum;
  VAR_4->e_shentsize = VAR_6->e_shentsize;
  VAR_4->e_shnum = VAR_6->e_shnum;
  VAR_4->e_shstrndx = VAR_6->e_shstrndx;

  return (VAR_4);
 }

 FUNC_2(VAR_5 == VAR_2);

 if ((VAR_7 = FUNC_1(VAR_3, VAR_2, 0)) == ((void*)0))
  return (((void*)0));
 *VAR_4 = *VAR_7;

 return (VAR_4);
}
