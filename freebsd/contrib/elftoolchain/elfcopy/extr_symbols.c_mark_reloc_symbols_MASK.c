
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct elfcopy {int * v_rel; TYPE_1__* symtab; int ein; } ;
struct TYPE_20__ {int d_size; } ;
struct TYPE_19__ {int r_info; } ;
struct TYPE_18__ {int r_info; } ;
struct TYPE_17__ {scalar_t__ sh_type; scalar_t__ sh_link; size_t sh_size; int sh_entsize; int sh_info; int sh_name; } ;
struct TYPE_16__ {int is; } ;
typedef TYPE_2__ GElf_Shdr ;
typedef TYPE_3__ GElf_Rela ;
typedef TYPE_4__ GElf_Rel ;
typedef int Elf_Scn ;
typedef TYPE_5__ Elf_Data ;


 int FUNC_0 (int *,size_t) ;
 int VAR_0 ;
 size_t FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_2 (size_t,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 TYPE_5__* FUNC_5 (int *,TYPE_5__*) ;
 scalar_t__ FUNC_6 (int ,size_t*) ;
 scalar_t__ FUNC_7 (int ) ;
 int * FUNC_8 (int ,int *) ;
 char* FUNC_9 (int ,size_t,int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,char*,int ) ;
 TYPE_4__* FUNC_12 (TYPE_5__*,int,TYPE_4__*) ;
 TYPE_3__* FUNC_13 (TYPE_5__*,int,TYPE_3__*) ;
 TYPE_2__* FUNC_14 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_15 (struct elfcopy*,int ) ;
 scalar_t__ FUNC_16 (struct elfcopy*,char const*) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static void
FUNC_18(struct elfcopy *VAR_3, size_t VAR_4)
{
 const char *VAR_5;
 Elf_Data *VAR_6;
 Elf_Scn *VAR_7;
 GElf_Rel VAR_8;
 GElf_Rela VAR_9;
 GElf_Shdr VAR_10;
 size_t VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15;

 VAR_3->v_rel = FUNC_2((VAR_4 + 7) / 8, 1);
 if (VAR_3->v_rel == ((void*)0))
  FUNC_10(VAR_0, "calloc failed");

 if (FUNC_6(VAR_3->ein, &VAR_12) == 0)
  FUNC_11(VAR_0, "elf_getshstrndx failed: %s",
      FUNC_3(-1));

 VAR_7 = ((void*)0);
 while ((VAR_7 = FUNC_8(VAR_3->ein, VAR_7)) != ((void*)0)) {
  if (FUNC_14(VAR_7, &VAR_10) != &VAR_10)
   FUNC_11(VAR_0, "elf_getshdr failed: %s",
       FUNC_3(-1));

  if (VAR_10.sh_type != VAR_1 && VAR_10.sh_type != VAR_2)
   continue;





  if ((VAR_5 = FUNC_9(VAR_3->ein, VAR_12, VAR_10.sh_name)) == ((void*)0))
   FUNC_11(VAR_0, "elf_strptr failed: %s",
       FUNC_3(-1));
  if (FUNC_16(VAR_3, VAR_5) ||
      FUNC_15(VAR_3, VAR_10.sh_info))
   continue;


  if (VAR_10.sh_link != FUNC_7(VAR_3->symtab->is))
   continue;

  VAR_6 = ((void*)0);
  VAR_11 = 0;
  while (VAR_11 < VAR_10.sh_size && (VAR_6 = FUNC_5(VAR_7, VAR_6)) != ((void*)0)) {
   VAR_15 = VAR_6->d_size / VAR_10.sh_entsize;
   for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
    if (VAR_10.sh_type == VAR_1) {
     if (FUNC_12(VAR_6, VAR_14, &VAR_8) != &VAR_8)
      FUNC_11(VAR_0,
          "elf_getrel failed: %s",
           FUNC_3(-1));
     VAR_11 = FUNC_1(VAR_8.r_info);
    } else {
     if (FUNC_13(VAR_6, VAR_14, &VAR_9) != &VAR_9)
      FUNC_11(VAR_0,
          "elf_getrela failed: %s",
           FUNC_3(-1));
     VAR_11 = FUNC_1(VAR_9.r_info);
    }
    if (VAR_11 > 0 && VAR_11 < VAR_4)
     FUNC_0(VAR_3->v_rel, VAR_11);
    else if (VAR_11 != 0)
     FUNC_17("invalid symbox index");
   }
  }
  VAR_13 = FUNC_4();
  if (VAR_13 != 0)
   FUNC_11(VAR_0, "elf_getdata failed: %s",
       FUNC_3(VAR_13));
 }
 VAR_13 = FUNC_4();
 if (VAR_13 != 0)
  FUNC_11(VAR_0, "elf_nextscn failed: %s",
      FUNC_3(VAR_13));
}
