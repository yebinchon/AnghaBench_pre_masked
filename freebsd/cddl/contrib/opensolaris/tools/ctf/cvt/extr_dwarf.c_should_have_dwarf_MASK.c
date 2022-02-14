
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int boolean_t ;
struct TYPE_6__ {scalar_t__ sh_type; size_t sh_size; size_t sh_entsize; int sh_link; } ;
struct TYPE_5__ {int st_name; int st_info; } ;
typedef TYPE_1__ GElf_Sym ;
typedef TYPE_2__ GElf_Shdr ;
typedef int Elf_Scn ;
typedef int Elf_Data ;
typedef int Elf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *) ;
 char* FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *,size_t,TYPE_1__*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static boolean_t
FUNC_8(Elf *VAR_6)
{
 Elf_Scn *VAR_7 = ((void*)0);
 Elf_Data *VAR_8 = ((void*)0);
 GElf_Shdr VAR_9;
 GElf_Sym VAR_10;
 uint32_t VAR_11 = 0;
 size_t VAR_12 = 0;
 boolean_t VAR_13 = VAR_0;

 while ((VAR_7 = FUNC_2(VAR_6, VAR_7)) != ((void*)0)) {
  FUNC_4(VAR_7, &VAR_9);

  if (VAR_9.sh_type == VAR_2) {
   VAR_13 = VAR_1;
   break;
  }
 }

 if (!VAR_13)
  FUNC_7("cannot convert stripped objects\n");

 VAR_8 = FUNC_1(VAR_7, ((void*)0));
 VAR_12 = VAR_9.sh_size / VAR_9.sh_entsize;

 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  FUNC_5(VAR_8, VAR_11, &VAR_10);

  if ((FUNC_0(VAR_10.st_info) == VAR_3) ||
      (FUNC_0(VAR_10.st_info) == VAR_5) ||
      (FUNC_0(VAR_10.st_info) == VAR_4)) {
   char *VAR_14;

   VAR_14 = FUNC_3(VAR_6, VAR_9.sh_link, VAR_10.st_name);


   if ((FUNC_6(VAR_14, "Bbss.bss") != 0) &&
       (FUNC_6(VAR_14, "Ttbss.bss") != 0) &&
       (FUNC_6(VAR_14, "Ddata.data") != 0) &&
       (FUNC_6(VAR_14, "Ttdata.data") != 0) &&
       (FUNC_6(VAR_14, "Drodata.rodata") != 0))
    return (VAR_1);
  }
 }

 return (VAR_0);
}
