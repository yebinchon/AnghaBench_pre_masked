
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int e_shstrndx; int e_shnum; int e_shentsize; int e_phnum; int e_phentsize; int e_ehsize; int e_flags; scalar_t__ e_shoff; scalar_t__ e_phoff; scalar_t__ e_entry; int e_version; int e_machine; int e_type; int e_ident; } ;
struct TYPE_5__ {int e_shstrndx; int e_shnum; int e_shentsize; int e_phnum; int e_phentsize; int e_ehsize; int e_flags; void* e_shoff; void* e_phoff; scalar_t__ e_entry; int e_version; int e_machine; int e_type; int e_ident; } ;
typedef TYPE_1__ GElf_Ehdr ;
typedef void* Elf64_Off ;
typedef scalar_t__ Elf64_Addr ;
typedef TYPE_2__ Elf32_Ehdr ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(const Elf32_Ehdr *VAR_1, GElf_Ehdr *VAR_2)
{
 FUNC_0(VAR_1->e_ident, VAR_2->e_ident, VAR_0);
 VAR_2->e_type = VAR_1->e_type;
 VAR_2->e_machine = VAR_1->e_machine;
 VAR_2->e_version = VAR_1->e_version;
 VAR_2->e_entry = (Elf64_Addr)VAR_1->e_entry;
 VAR_2->e_phoff = (Elf64_Off)VAR_1->e_phoff;
 VAR_2->e_shoff = (Elf64_Off)VAR_1->e_shoff;
 VAR_2->e_flags = VAR_1->e_flags;
 VAR_2->e_ehsize = VAR_1->e_ehsize;
 VAR_2->e_phentsize = VAR_1->e_phentsize;
 VAR_2->e_phnum = VAR_1->e_phnum;
 VAR_2->e_shentsize = VAR_1->e_shentsize;
 VAR_2->e_shnum = VAR_1->e_shnum;
 VAR_2->e_shstrndx = VAR_1->e_shstrndx;
}
