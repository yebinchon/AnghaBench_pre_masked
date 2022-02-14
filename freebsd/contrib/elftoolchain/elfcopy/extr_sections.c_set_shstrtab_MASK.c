
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct section {size_t sz; int * os; int strtab; int off; } ;
struct elfcopy {int flags; int eout; struct section* shstrtab; } ;
struct TYPE_7__ {int d_align; size_t d_size; int d_version; int d_type; scalar_t__ d_off; void* d_buf; } ;
struct TYPE_6__ {int sh_addralign; size_t sh_size; scalar_t__ sh_link; scalar_t__ sh_info; scalar_t__ sh_entsize; scalar_t__ sh_flags; int sh_type; int sh_offset; scalar_t__ sh_addr; } ;
typedef TYPE_1__ GElf_Shdr ;
typedef TYPE_2__ Elf_Data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 char* FUNC_5 (int ,size_t*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*,int ) ;
 int * FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int *,TYPE_1__*) ;
 int FUNC_10 (struct elfcopy*,struct section*,int) ;

__attribute__((used)) static void
FUNC_11(struct elfcopy *VAR_5)
{
 struct section *VAR_6;
 Elf_Data *VAR_7;
 GElf_Shdr VAR_8;
 const char *VAR_9;
 size_t VAR_10;

 VAR_6 = VAR_5->shstrtab;

 if (VAR_6->os == ((void*)0)) {

  if ((VAR_6->os = FUNC_3(VAR_5->eout)) == ((void*)0))
   FUNC_7(VAR_2, "elf_newscn failed: %s",
       FUNC_0(-1));
  FUNC_10(VAR_5, VAR_6, 1);
 }

 if (FUNC_8(VAR_6->os, &VAR_8) == ((void*)0))
  FUNC_7(VAR_2, "gelf_getshdr() failed: %s",
      FUNC_0(-1));
 VAR_8.sh_addr = 0;
 VAR_8.sh_addralign = 1;
 VAR_8.sh_offset = VAR_6->off;
 VAR_8.sh_type = VAR_3;
 VAR_8.sh_flags = 0;
 VAR_8.sh_entsize = 0;
 VAR_8.sh_info = 0;
 VAR_8.sh_link = 0;

 if ((VAR_7 = FUNC_2(VAR_6->os)) == ((void*)0))
  FUNC_7(VAR_2, "elf_newdata() failed: %s",
      FUNC_0(-1));





 if (!(VAR_5->flags & VAR_4)) {
  FUNC_6(VAR_6->strtab, ".symtab");
  FUNC_6(VAR_6->strtab, ".strtab");
 }

 VAR_9 = FUNC_5(VAR_6->strtab, &VAR_10);
 VAR_6->sz = VAR_10;

 VAR_8.sh_size = VAR_10;
 if (!FUNC_9(VAR_6->os, &VAR_8))
  FUNC_7(VAR_2, "gelf_update_shdr() failed: %s",
      FUNC_0(-1));

 VAR_7->d_align = 1;
 VAR_7->d_buf = (void *)(uintptr_t)VAR_9;
 VAR_7->d_size = VAR_10;
 VAR_7->d_off = 0;
 VAR_7->d_type = VAR_0;
 VAR_7->d_version = VAR_1;

 if (!FUNC_4(VAR_5->eout, FUNC_1(VAR_6->os)))
  FUNC_7(VAR_2, "elf_setshstrndx() failed: %s",
       FUNC_0(-1));
}
