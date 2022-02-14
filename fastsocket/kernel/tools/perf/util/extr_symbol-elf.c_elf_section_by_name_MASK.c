
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int e_shstrndx; } ;
struct TYPE_6__ {int sh_name; } ;
typedef TYPE_1__ GElf_Shdr ;
typedef TYPE_2__ GElf_Ehdr ;
typedef int Elf_Scn ;
typedef int Elf ;


 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int *) ;
 char* FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (char const*,char*) ;

__attribute__((used)) static Elf_Scn *FUNC_6(Elf *VAR_0, GElf_Ehdr *VAR_1,
        GElf_Shdr *VAR_2, const char *VAR_3,
        size_t *VAR_4)
{
 Elf_Scn *VAR_5 = ((void*)0);
 size_t VAR_6 = 1;


 if (!FUNC_2(FUNC_0(VAR_0, VAR_1->e_shstrndx), ((void*)0)))
  return ((void*)0);

 while ((VAR_5 = FUNC_1(VAR_0, VAR_5)) != ((void*)0)) {
  char *VAR_7;

  FUNC_4(VAR_5, VAR_2);
  VAR_7 = FUNC_3(VAR_0, VAR_1->e_shstrndx, VAR_2->sh_name);
  if (!FUNC_5(VAR_3, VAR_7)) {
   if (VAR_4)
    *VAR_4 = VAR_6;
   break;
  }
  ++VAR_6;
 }

 return VAR_5;
}
