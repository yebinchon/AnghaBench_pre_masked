
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int e_shstrndx; } ;
struct TYPE_5__ {scalar_t__ sh_name; } ;
typedef TYPE_1__ GElf_Shdr ;
typedef TYPE_2__ GElf_Ehdr ;
typedef int Elf_Scn ;
typedef int Elf ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 char* FUNC_2 (int *,int ,size_t) ;
 int FUNC_3 (char const*,char*,...) ;
 int * FUNC_4 (int *,TYPE_2__*) ;
 int * FUNC_5 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_6 (char*,char const*) ;

int
FUNC_7(Elf *VAR_0, const char *VAR_1, const char *VAR_2)
{
 Elf_Scn *VAR_3 = ((void*)0);
 GElf_Ehdr VAR_4;
 GElf_Shdr VAR_5;

 if (FUNC_4(VAR_0, &VAR_4) == ((void*)0))
  FUNC_3(VAR_1, "Couldn't read ehdr");

 while ((VAR_3 = FUNC_1(VAR_0, VAR_3)) != ((void*)0)) {
  char *VAR_6;

  if (FUNC_5(VAR_3, &VAR_5) == ((void*)0)) {
   FUNC_3(VAR_1,
       "Couldn't read header for section %d",
       FUNC_0(VAR_3));
  }

  if ((VAR_6 = FUNC_2(VAR_0, VAR_4.e_shstrndx,
      (size_t)VAR_5.sh_name)) == ((void*)0)) {
   FUNC_3(VAR_1,
       "Couldn't get name for section %d",
       FUNC_0(VAR_3));
  }

  if (FUNC_6(VAR_6, VAR_2) == 0)
   return (FUNC_0(VAR_3));
 }

 return (-1);
}
