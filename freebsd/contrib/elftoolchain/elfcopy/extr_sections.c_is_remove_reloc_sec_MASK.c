
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct elfcopy {int ein; } ;
struct TYPE_3__ {int sh_name; } ;
typedef TYPE_1__ GElf_Shdr ;
typedef int Elf_Scn ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,size_t*) ;
 char* FUNC_4 (int ,size_t,int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int * FUNC_6 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_7 (struct elfcopy*,char const*) ;

int
FUNC_8(struct elfcopy *VAR_1, uint32_t VAR_2)
{
 const char *VAR_3;
 GElf_Shdr VAR_4;
 Elf_Scn *VAR_5;
 size_t VAR_6;
 int VAR_7;

 if (FUNC_3(VAR_1->ein, &VAR_6) == 0)
  FUNC_5(VAR_0, "elf_getshstrndx failed: %s",
      FUNC_0(-1));

 VAR_5 = FUNC_2(VAR_1->ein, VAR_2);
 if (VAR_5 != ((void*)0)) {
  if (FUNC_6(VAR_5, &VAR_4) == ((void*)0))
   FUNC_5(VAR_0, "gelf_getshdr failed: %s",
       FUNC_0(-1));
  if ((VAR_3 = FUNC_4(VAR_1->ein, VAR_6, VAR_4.sh_name)) ==
      ((void*)0))
   FUNC_5(VAR_0, "elf_strptr failed: %s",
       FUNC_0(-1));
  if (FUNC_7(VAR_1, VAR_3))
   return (1);
  else
   return (0);
 }
 VAR_7 = FUNC_1();
 if (VAR_7 != 0)
  FUNC_5(VAR_0, "elf_nextscn failed: %s",
      FUNC_0(VAR_7));


 return (1);
}
