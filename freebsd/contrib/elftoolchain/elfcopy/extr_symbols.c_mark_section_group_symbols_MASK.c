
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct elfcopy {int * v_grp; int ein; } ;
struct TYPE_4__ {scalar_t__ sh_type; size_t sh_info; int sh_name; } ;
typedef TYPE_1__ GElf_Shdr ;
typedef int Elf_Scn ;


 int FUNC_0 (int *,size_t) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (size_t,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,size_t*) ;
 int * FUNC_5 (int ,int *) ;
 char* FUNC_6 (int ,size_t,int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*,int ) ;
 TYPE_1__* FUNC_9 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_10 (struct elfcopy*,char const*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void
FUNC_12(struct elfcopy *VAR_2, size_t VAR_3)
{
 const char *VAR_4;
 Elf_Scn *VAR_5;
 GElf_Shdr VAR_6;
 size_t VAR_7;
 int VAR_8;

 VAR_2->v_grp = FUNC_1((VAR_3 + 7) / 8, 1);
 if (VAR_2->v_grp == ((void*)0))
  FUNC_7(VAR_0, "calloc failed");

 if (FUNC_4(VAR_2->ein, &VAR_7) == 0)
  FUNC_8(VAR_0, "elf_getshstrndx failed: %s",
      FUNC_2(-1));

 VAR_5 = ((void*)0);
 while ((VAR_5 = FUNC_5(VAR_2->ein, VAR_5)) != ((void*)0)) {
  if (FUNC_9(VAR_5, &VAR_6) != &VAR_6)
   FUNC_8(VAR_0, "elf_getshdr failed: %s",
       FUNC_2(-1));

  if (VAR_6.sh_type != VAR_1)
   continue;

  if ((VAR_4 = FUNC_6(VAR_2->ein, VAR_7, VAR_6.sh_name)) == ((void*)0))
   FUNC_8(VAR_0, "elf_strptr failed: %s",
       FUNC_2(-1));
  if (FUNC_10(VAR_2, VAR_4))
   continue;

  if (VAR_6.sh_info > 0 && VAR_6.sh_info < VAR_3)
   FUNC_0(VAR_2->v_grp, VAR_6.sh_info);
  else if (VAR_6.sh_info != 0)
   FUNC_11("invalid symbox index");
 }
 VAR_8 = FUNC_3();
 if (VAR_8 != 0)
  FUNC_8(VAR_0, "elf_nextscn failed: %s",
      FUNC_2(VAR_8));
}
