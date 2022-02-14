
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sh_entsize; int sh_addralign; int sh_info; int sh_link; int sh_size; int sh_offset; int sh_addr; int sh_flags; int sh_type; int sh_name; } ;
struct TYPE_5__ {int sh_entsize; int sh_addralign; int sh_info; int sh_link; int sh_size; int sh_offset; int sh_addr; int sh_flags; int sh_type; int sh_name; } ;
typedef TYPE_1__ GElf_Shdr ;
typedef TYPE_2__ Elf32_Shdr ;



__attribute__((used)) static void
FUNC_0(const Elf32_Shdr *VAR_0, GElf_Shdr *VAR_1)
{
 VAR_1->sh_name = VAR_0->sh_name;
 VAR_1->sh_type = VAR_0->sh_type;
 VAR_1->sh_flags = VAR_0->sh_flags;
 VAR_1->sh_addr = VAR_0->sh_addr;
 VAR_1->sh_offset = VAR_0->sh_offset;
 VAR_1->sh_size = VAR_0->sh_size;
 VAR_1->sh_link = VAR_0->sh_link;
 VAR_1->sh_info = VAR_0->sh_info;
 VAR_1->sh_addralign = VAR_0->sh_addralign;
 VAR_1->sh_entsize = VAR_0->sh_entsize;
}
