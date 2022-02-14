
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct section {scalar_t__ type; char* name; int link; int scn; } ;
struct elfdump {size_t shnum; int elf; struct section* sl; } ;
typedef int sname ;
struct TYPE_4__ {size_t st_shndx; int st_name; int st_info; } ;
typedef TYPE_1__ GElf_Sym ;
typedef int Elf_Data ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int * FUNC_3 (int ,int *) ;
 char* FUNC_4 (int ,int ,int ) ;
 TYPE_1__* FUNC_5 (int *,int,TYPE_1__*) ;
 int FUNC_6 (char*,int,char*,char*) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static const char *
FUNC_8(struct elfdump *VAR_3, uint32_t VAR_4, int VAR_5)
{
 static char VAR_6[64];
 struct section *VAR_7;
 const char *VAR_8;
 GElf_Sym VAR_9;
 Elf_Data *VAR_10;
 int VAR_11;

 if (VAR_4 >= VAR_3->shnum)
  return ("");
 VAR_7 = &VAR_3->sl[VAR_4];
 if (VAR_7->type != VAR_1 && VAR_7->type != VAR_0)
  return ("");
 (void) FUNC_2();
 if ((VAR_10 = FUNC_3(VAR_7->scn, ((void*)0))) == ((void*)0)) {
  VAR_11 = FUNC_2();
  if (VAR_11 != 0)
   FUNC_7("elf_getdata failed: %s", FUNC_1(VAR_11));
  return ("");
 }
 if (FUNC_5(VAR_10, VAR_5, &VAR_9) != &VAR_9)
  return ("");
 if (FUNC_0(VAR_9.st_info) == VAR_2) {
  if (VAR_9.st_shndx < VAR_3->shnum) {
   FUNC_6(VAR_6, sizeof(VAR_6), "%s (section)",
       VAR_3->sl[VAR_9.st_shndx].name);
   return (VAR_6);
  } else
   return ("");
 }
 if ((VAR_8 = FUNC_4(VAR_3->elf, VAR_7->link, VAR_9.st_name)) == ((void*)0))
  return ("");

 return (VAR_8);
}
