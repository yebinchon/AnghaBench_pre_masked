
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct symtab {scalar_t__ nsyms; int stridx; int * data; } ;
struct TYPE_8__ {int prs_id; } ;
typedef TYPE_1__ prsyminfo_t ;
struct TYPE_9__ {int st_name; } ;
typedef TYPE_2__ GElf_Sym ;
typedef int Elf_Data ;
typedef int Elf ;


 int VAR_0 ;
 char* FUNC_0 (int *,int ,int ) ;
 int * FUNC_1 (int *,int,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (char*,char const*) ;

__attribute__((used)) static int
FUNC_4(Elf *VAR_1, struct symtab *VAR_2, const char *VAR_3,
    GElf_Sym *VAR_4, prsyminfo_t *VAR_5)
{
 GElf_Sym VAR_6;
 Elf_Data *VAR_7;
 char *VAR_8;
 int VAR_9;

 if (VAR_2->nsyms == 0)
  return (VAR_0);
 VAR_7 = VAR_2->data;
 for (VAR_9 = 0; FUNC_1(VAR_7, VAR_9, &VAR_6) != ((void*)0); VAR_9++) {
  VAR_8 = FUNC_0(VAR_1, VAR_2->stridx, VAR_6.st_name);
  if (VAR_8 != ((void*)0) && FUNC_3(VAR_8, VAR_3) == 0) {
   FUNC_2(VAR_4, &VAR_6, sizeof(*VAR_4));
   if (VAR_5 != ((void*)0))
    VAR_5->prs_id = VAR_9;
   return (0);
  }
 }
 return (VAR_0);
}
