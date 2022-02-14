
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct elfcopy {int eout; } ;
struct TYPE_13__ {int d_size; } ;
struct TYPE_12__ {scalar_t__ sh_type; size_t sh_size; int sh_entsize; int sh_name; } ;
struct TYPE_11__ {scalar_t__ st_shndx; int st_name; int st_info; } ;
typedef TYPE_1__ GElf_Sym ;
typedef TYPE_2__ GElf_Shdr ;
typedef int Elf_Scn ;
typedef TYPE_3__ Elf_Data ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct elfcopy*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 TYPE_3__* FUNC_4 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_5 (int ,size_t*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ,int *) ;
 char* FUNC_9 (int ,int,int ) ;
 TYPE_2__* FUNC_10 (int *,TYPE_2__*) ;
 TYPE_1__* FUNC_11 (TYPE_3__*,int,TYPE_1__*) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,...) ;

__attribute__((used)) static void
FUNC_14(struct elfcopy *VAR_5)
{
 Elf_Scn *VAR_6;
 GElf_Shdr VAR_7;
 GElf_Sym VAR_8;
 Elf_Data *VAR_9;
 char *VAR_10;
 size_t VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;

 if (FUNC_6(VAR_5->eout) != VAR_0) {
  FUNC_13("internal: cannot extract symbols from non-elf object");
  return;
 }
 if (FUNC_5(VAR_5->eout, &VAR_12) == 0) {
  FUNC_13("elf_getshstrndx failed: %s", FUNC_2(-1));
  return;
 }

 VAR_14 = -1;
 VAR_6 = ((void*)0);
 while ((VAR_6 = FUNC_8(VAR_5->eout, VAR_6)) != ((void*)0)) {
  if (FUNC_10(VAR_6, &VAR_7) != &VAR_7) {
   FUNC_13("elf_getshdr failed: %s", FUNC_2(-1));
   continue;
  }
  if ((VAR_10 = FUNC_9(VAR_5->eout, VAR_12, VAR_7.sh_name)) ==
      ((void*)0)) {
   FUNC_13("elf_strptr failed: %s", FUNC_2(-1));
   continue;
  }
  if (FUNC_12(VAR_10, ".strtab") == 0) {
   VAR_14 = FUNC_7(VAR_6);
   break;
  }
 }
 VAR_13 = FUNC_3();
 if (VAR_13 != 0)
  FUNC_13("elf_nextscn failed: %s", FUNC_2(VAR_13));


 if (VAR_14 == -1)
  return;

 VAR_6 = ((void*)0);
 while ((VAR_6 = FUNC_8(VAR_5->eout, VAR_6)) != ((void*)0)) {
  if (FUNC_10(VAR_6, &VAR_7) != &VAR_7) {
   FUNC_13("elf_getshdr failed: %s", FUNC_2(-1));
   continue;
  }
  if (VAR_7.sh_type != VAR_2)
   continue;

  VAR_9 = ((void*)0);
  VAR_11 = 0;
  while (VAR_11 < VAR_7.sh_size &&
      (VAR_9 = FUNC_4(VAR_6, VAR_9)) != ((void*)0)) {
   VAR_15 = VAR_9->d_size / VAR_7.sh_entsize;
   for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
    if (FUNC_11(VAR_9, VAR_16, &VAR_8) != &VAR_8) {
     FUNC_13("gelf_getsym failed: %s",
          FUNC_2(-1));
     continue;
    }


    if (FUNC_0(VAR_8.st_info) != VAR_3 &&
        FUNC_0(VAR_8.st_info) != VAR_4)
     continue;


    if (VAR_8.st_shndx == VAR_1)
     continue;

    if ((VAR_10 = FUNC_9(VAR_5->eout, VAR_14,
        VAR_8.st_name)) == ((void*)0)) {
     FUNC_13("elf_strptr failed: %s",
          FUNC_2(-1));
     continue;
    }

    FUNC_1(VAR_5, VAR_10);
   }
  }
 }
 VAR_13 = FUNC_3();
 if (VAR_13 != 0)
  FUNC_13("elf_nextscn failed: %s", FUNC_2(VAR_13));
}
