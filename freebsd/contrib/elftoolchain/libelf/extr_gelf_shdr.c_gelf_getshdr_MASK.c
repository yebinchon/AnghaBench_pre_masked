
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ sh_entsize; scalar_t__ sh_addralign; int sh_info; int sh_link; scalar_t__ sh_size; scalar_t__ sh_offset; scalar_t__ sh_addr; scalar_t__ sh_flags; int sh_type; int sh_name; } ;
struct TYPE_12__ {TYPE_1__* s_elf; } ;
struct TYPE_11__ {void* sh_entsize; void* sh_addralign; int sh_info; int sh_link; void* sh_size; scalar_t__ sh_offset; scalar_t__ sh_addr; void* sh_flags; int sh_type; int sh_name; } ;
struct TYPE_10__ {int e_class; } ;
typedef TYPE_2__ GElf_Shdr ;
typedef TYPE_3__ Elf_Scn ;
typedef void* Elf64_Xword ;
typedef TYPE_2__ Elf64_Shdr ;
typedef scalar_t__ Elf64_Off ;
typedef scalar_t__ Elf64_Addr ;
typedef TYPE_5__ Elf32_Shdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int) ;

GElf_Shdr *
FUNC_3(Elf_Scn *VAR_4, GElf_Shdr *VAR_5)
{
 int VAR_6;
 void *VAR_7;
 Elf32_Shdr *VAR_8;
 Elf64_Shdr *VAR_9;

 if (VAR_5 == ((void*)0)) {
  FUNC_0(VAR_0, 0);
  return (((void*)0));
 }

 if ((VAR_7 = FUNC_1(VAR_4, VAR_3)) == ((void*)0))
  return (((void*)0));

 VAR_6 = VAR_4->s_elf->e_class;
 FUNC_2(VAR_6 == VAR_1 || VAR_6 == VAR_2);

 if (VAR_6 == VAR_1) {
  VAR_8 = (Elf32_Shdr *) VAR_7;

  VAR_5->sh_name = VAR_8->sh_name;
  VAR_5->sh_type = VAR_8->sh_type;
  VAR_5->sh_flags = (Elf64_Xword) VAR_8->sh_flags;
  VAR_5->sh_addr = (Elf64_Addr) VAR_8->sh_addr;
  VAR_5->sh_offset = (Elf64_Off) VAR_8->sh_offset;
  VAR_5->sh_size = (Elf64_Xword) VAR_8->sh_size;
  VAR_5->sh_link = VAR_8->sh_link;
  VAR_5->sh_info = VAR_8->sh_info;
  VAR_5->sh_addralign = (Elf64_Xword) VAR_8->sh_addralign;
  VAR_5->sh_entsize = (Elf64_Xword) VAR_8->sh_entsize;
 } else {
  VAR_9 = (Elf64_Shdr *) VAR_7;
  *VAR_5 = *VAR_9;
 }

 return (VAR_5);
}
