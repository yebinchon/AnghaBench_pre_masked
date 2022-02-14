
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dumperinfo {int dummy; } ;
typedef int phdr ;
struct TYPE_3__ {int p_align; scalar_t__ p_memsz; scalar_t__ p_filesz; int p_paddr; int p_vaddr; scalar_t__ p_offset; int p_flags; int p_type; } ;
typedef TYPE_1__ Elf_Phdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (struct dumperinfo*,char*,int) ;
 int FUNC_2 (int ) ;

int
FUNC_3(struct dumperinfo *VAR_4)
{
 Elf_Phdr VAR_5;
 int VAR_6;

 FUNC_0(&VAR_5, sizeof(VAR_5));
 VAR_5.p_type = VAR_3;
 VAR_5.p_flags = VAR_2;
 VAR_5.p_offset = 0;
 VAR_5.p_vaddr = VAR_0;
 VAR_5.p_paddr = FUNC_2(VAR_0);
 VAR_5.p_filesz = 0;
 VAR_5.p_memsz = 0;
 VAR_5.p_align = VAR_1;

 VAR_6 = FUNC_1(VAR_4, (char*)&VAR_5, sizeof(VAR_5));
 return (VAR_6);
}
