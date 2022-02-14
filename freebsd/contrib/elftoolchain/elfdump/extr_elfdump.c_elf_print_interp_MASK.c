
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct elfdump {int elf; int snl; } ;
struct TYPE_4__ {scalar_t__ p_type; size_t p_offset; } ;
typedef TYPE_1__ GElf_Phdr ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,size_t*) ;
 char* FUNC_4 (int ,size_t*) ;
 int * FUNC_5 (struct elfdump*,char*) ;
 TYPE_1__* FUNC_6 (int ,size_t,TYPE_1__*) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static void
FUNC_8(struct elfdump *VAR_1)
{
 const char *VAR_2;
 GElf_Phdr VAR_3;
 size_t VAR_4, VAR_5, VAR_6;

 if (!FUNC_1(&VAR_1->snl) && FUNC_5(VAR_1, "PT_INTERP") == ((void*)0))
  return;

 if ((VAR_2 = FUNC_4(VAR_1->elf, &VAR_4)) == ((void*)0)) {
  FUNC_7("elf_rawfile failed: %s", FUNC_2(-1));
  return;
 }
 if (!FUNC_3(VAR_1->elf, &VAR_6)) {
  FUNC_7("elf_getphnum failed: %s", FUNC_2(-1));
  return;
 }
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  if (FUNC_6(VAR_1->elf, VAR_5, &VAR_3) != &VAR_3) {
   FUNC_7("elf_getphdr failed: %s", FUNC_2(-1));
   continue;
  }
  if (VAR_3.p_type == VAR_0) {
   if (VAR_3.p_offset >= VAR_4) {
    FUNC_7("invalid phdr offset");
    continue;
   }
   FUNC_0("\ninterp:\n");
   FUNC_0("\t%s\n", VAR_2 + VAR_3.p_offset);
  }
 }
}
