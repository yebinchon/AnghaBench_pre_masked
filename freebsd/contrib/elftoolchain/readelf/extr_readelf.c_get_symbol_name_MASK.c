
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct section {scalar_t__ type; char const* name; scalar_t__ link; int scn; } ;
struct readelf {scalar_t__ shnum; int elf; struct section* sl; } ;
struct TYPE_4__ {scalar_t__ st_shndx; int st_name; int st_info; } ;
typedef TYPE_1__ GElf_Sym ;
typedef int Elf_Data ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int * FUNC_3 (int ,int *) ;
 char* FUNC_4 (int ,scalar_t__,int ) ;
 TYPE_1__* FUNC_5 (int *,int,TYPE_1__*) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static const char *
FUNC_7(struct readelf *VAR_3, int VAR_4, int VAR_5)
{
 struct section *VAR_6;
 const char *VAR_7;
 GElf_Sym VAR_8;
 Elf_Data *VAR_9;
 int VAR_10;

 VAR_6 = &VAR_3->sl[VAR_4];
 if (VAR_6->type != VAR_1 && VAR_6->type != VAR_0)
  return ("");
 (void) FUNC_2();
 if ((VAR_9 = FUNC_3(VAR_6->scn, ((void*)0))) == ((void*)0)) {
  VAR_10 = FUNC_2();
  if (VAR_10 != 0)
   FUNC_6("elf_getdata failed: %s", FUNC_1(VAR_10));
  return ("");
 }
 if (FUNC_5(VAR_9, VAR_5, &VAR_8) != &VAR_8)
  return ("");

 if (FUNC_0(VAR_8.st_info) == VAR_2) {
  if (VAR_8.st_shndx < VAR_3->shnum &&
      VAR_3->sl[VAR_8.st_shndx].name != ((void*)0))
   return (VAR_3->sl[VAR_8.st_shndx].name);
  return ("");
 }
 if (VAR_6->link >= VAR_3->shnum ||
     (VAR_7 = FUNC_4(VAR_3->elf, VAR_6->link, VAR_8.st_name)) == ((void*)0))
  return ("");

 return (VAR_7);
}
