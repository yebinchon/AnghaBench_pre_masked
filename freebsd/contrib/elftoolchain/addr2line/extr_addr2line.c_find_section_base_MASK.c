
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ e_type; } ;
struct TYPE_6__ {scalar_t__ sh_size; scalar_t__ sh_addr; int sh_name; } ;
typedef TYPE_1__ GElf_Shdr ;
typedef TYPE_2__ GElf_Ehdr ;
typedef int Elf_Scn ;
typedef int Elf ;
typedef scalar_t__ Dwarf_Addr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,size_t*) ;
 int * FUNC_3 (int *,int *) ;
 char* FUNC_4 (int *,size_t,int ) ;
 int FUNC_5 (int ,char*,char const*,char const*) ;
 TYPE_2__* FUNC_6 (int *,TYPE_2__*) ;
 int * FUNC_7 (int *,TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (char const*,char const*) ;
 int FUNC_9 (char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_10(const char *VAR_5, Elf *VAR_6, const char *VAR_7)
{
 Dwarf_Addr VAR_8;
 Elf_Scn *VAR_9;
 GElf_Ehdr VAR_10;
 GElf_Shdr VAR_11;
 size_t VAR_12;
 int VAR_13;
 const char *VAR_14;

 if (FUNC_6(VAR_6, &VAR_10) != &VAR_10) {
  FUNC_9("gelf_getehdr failed: %s", FUNC_0(-1));
  return;
 }

 if (!FUNC_2(VAR_6, &VAR_12)) {
  FUNC_9("elf_getshstrndx failed: %s", FUNC_0(-1));
  return;
 }

 (void) FUNC_1();
 VAR_8 = 0;
 VAR_9 = ((void*)0);
 while ((VAR_9 = FUNC_3(VAR_6, VAR_9)) != ((void*)0)) {
  if (FUNC_7(VAR_9, &VAR_11) == ((void*)0)) {
   FUNC_9("gelf_getshdr failed: %s", FUNC_0(-1));
   continue;
  }
  if ((VAR_14 = FUNC_4(VAR_6, VAR_12, VAR_11.sh_name)) == ((void*)0))
   goto next;
  if (!FUNC_8(VAR_7, VAR_14)) {
   if (VAR_10.e_type == VAR_1 || VAR_10.e_type == VAR_0) {




    VAR_4 = VAR_11.sh_addr;
   } else if (VAR_10.e_type == VAR_2) {





    VAR_4 = VAR_8;
   } else
    FUNC_9("unknown e_type %u", VAR_10.e_type);
   return;
  }
 next:
  VAR_8 += VAR_11.sh_size;
 }
 VAR_13 = FUNC_1();
 if (VAR_13 != 0)
  FUNC_9("elf_nextscn failed: %s", FUNC_0(VAR_13));

 FUNC_5(VAR_3, "%s: cannot find section %s", VAR_5, VAR_7);
}
