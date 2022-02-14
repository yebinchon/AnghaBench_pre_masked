
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int st_shndx; int st_other; int st_info; int st_size; int st_value; int st_name; } ;
struct TYPE_6__ {int st_shndx; int st_other; int st_info; int st_size; int st_value; int st_name; } ;
typedef TYPE_1__ Elf64_Sym ;
typedef TYPE_2__ Elf32_Sym ;



__attribute__((used)) static Elf64_Sym *
FUNC_0(const Elf32_Sym *VAR_0, Elf64_Sym *VAR_1)
{
 VAR_1->st_name = VAR_0->st_name;
 VAR_1->st_value = VAR_0->st_value;
 VAR_1->st_size = VAR_0->st_size;
 VAR_1->st_info = VAR_0->st_info;
 VAR_1->st_other = VAR_0->st_other;
 VAR_1->st_shndx = VAR_0->st_shndx;

 return (VAR_1);
}
