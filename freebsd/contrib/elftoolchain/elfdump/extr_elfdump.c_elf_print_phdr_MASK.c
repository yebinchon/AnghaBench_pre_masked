
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uintmax_t ;
struct elfdump {int flags; int snl; int elf; } ;
struct TYPE_4__ {int p_flags; scalar_t__ p_align; scalar_t__ p_memsz; scalar_t__ p_filesz; scalar_t__ p_paddr; scalar_t__ p_vaddr; scalar_t__ p_offset; int p_type; } ;
typedef TYPE_1__ GElf_Phdr ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,size_t*) ;
 size_t FUNC_4 (int ) ;
 int * FUNC_5 (struct elfdump*,size_t) ;
 TYPE_1__* FUNC_6 (int ,size_t,TYPE_1__*) ;
 size_t* VAR_1 ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static void
FUNC_8(struct elfdump *VAR_2)
{
 GElf_Phdr VAR_3;
 size_t VAR_4, VAR_5;
 int VAR_6;

 if (FUNC_3(VAR_2->elf, &VAR_4) == 0) {
  FUNC_7("elf_getphnum failed: %s", FUNC_2(-1));
  return;
 }
 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (FUNC_6(VAR_2->elf, VAR_5, &VAR_3) != &VAR_3) {
   FUNC_7("elf_getphdr failed: %s", FUNC_2(-1));
   continue;
  }
  if (!FUNC_1(&VAR_2->snl) &&
      FUNC_5(VAR_2, FUNC_4(VAR_3.p_type)) == ((void*)0))
   continue;
  if (VAR_2->flags & VAR_0) {
   FUNC_0("\nProgram Header[%zu]:\n", VAR_5);
   FUNC_0("    p_vaddr:      %#-14jx", (uintmax_t)VAR_3.p_vaddr);
   FUNC_0("  p_flags:    [ %s ]\n",
       VAR_1[VAR_3.p_flags & 0x7]);
   FUNC_0("    p_paddr:      %#-14jx", (uintmax_t)VAR_3.p_paddr);
   FUNC_0("  p_type:     [ %s ]\n",
       FUNC_4(VAR_3.p_type));
   FUNC_0("    p_filesz:     %#-14jx",
       (uintmax_t)VAR_3.p_filesz);
   FUNC_0("  p_memsz:    %#jx\n", (uintmax_t)VAR_3.p_memsz);
   FUNC_0("    p_offset:     %#-14jx",
       (uintmax_t)VAR_3.p_offset);
   FUNC_0("  p_align:    %#jx\n", (uintmax_t)VAR_3.p_align);
  } else {
   if (!VAR_6) {
    FUNC_0("\nprogram header:\n");
    VAR_6 = 1;
   }
   FUNC_0("\n");
   FUNC_0("entry: %zu\n", VAR_5);
   FUNC_0("\tp_type: %s\n", FUNC_4(VAR_3.p_type));
   FUNC_0("\tp_offset: %ju\n", (uintmax_t)VAR_3.p_offset);
   FUNC_0("\tp_vaddr: %#jx\n", (uintmax_t)VAR_3.p_vaddr);
   FUNC_0("\tp_paddr: %#jx\n", (uintmax_t)VAR_3.p_paddr);
   FUNC_0("\tp_filesz: %ju\n", (uintmax_t)VAR_3.p_filesz);
   FUNC_0("\tp_memsz: %ju\n", (uintmax_t)VAR_3.p_memsz);
   FUNC_0("\tp_flags: %s\n", VAR_1[VAR_3.p_flags & 0x7]);
   FUNC_0("\tp_align: %ju\n", (uintmax_t)VAR_3.p_align);
  }
 }
}
