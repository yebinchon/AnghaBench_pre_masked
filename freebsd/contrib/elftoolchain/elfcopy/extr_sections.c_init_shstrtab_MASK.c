
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct section {char* name; int align; int strtab; scalar_t__ vma; int type; scalar_t__ loadable; scalar_t__ sz; int * is; } ;
struct elfcopy {struct section* shstrtab; int ein; } ;
struct TYPE_4__ {size_t sh_size; } ;
typedef TYPE_1__ GElf_Shdr ;
typedef int Elf_Scn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct elfcopy*,char*) ;
 struct section* FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int * FUNC_4 (int ,size_t) ;
 scalar_t__ FUNC_5 (int ,size_t*) ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*,int ) ;
 TYPE_1__* FUNC_9 (int *,TYPE_1__*) ;

void
FUNC_10(struct elfcopy *VAR_2)
{
 Elf_Scn *VAR_3;
 GElf_Shdr VAR_4;
 struct section *VAR_5;
 size_t VAR_6, VAR_7;

 if (FUNC_5(VAR_2->ein, &VAR_6) == 0) {
  VAR_3 = FUNC_4(VAR_2->ein, VAR_6);
  if (VAR_3 == ((void*)0))
   FUNC_8(VAR_0, "elf_getscn failed: %s",
       FUNC_2(-1));
  if (FUNC_9(VAR_3, &VAR_4) != &VAR_4)
   FUNC_8(VAR_0, "gelf_getshdr failed: %s",
       FUNC_2(-1));
  VAR_7 = VAR_4.sh_size;
 } else {

  (void)FUNC_3();
  VAR_7 = 0;
 }

 if ((VAR_2->shstrtab = FUNC_1(1, sizeof(*VAR_2->shstrtab))) == ((void*)0))
  FUNC_7(VAR_0, "calloc failed");
 VAR_5 = VAR_2->shstrtab;
 VAR_5->name = ".shstrtab";
 VAR_5->is = ((void*)0);
 VAR_5->sz = 0;
 VAR_5->align = 1;
 VAR_5->loadable = 0;
 VAR_5->type = VAR_1;
 VAR_5->vma = 0;
 VAR_5->strtab = FUNC_6(VAR_7);

 FUNC_0(VAR_2, "");
 FUNC_0(VAR_2, ".symtab");
 FUNC_0(VAR_2, ".strtab");
 FUNC_0(VAR_2, ".shstrtab");
}
