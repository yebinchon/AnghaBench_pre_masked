
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_7__ {int bl_len; scalar_t__ bl_data; } ;
struct TYPE_6__ {scalar_t__* e_ident; } ;
typedef TYPE_1__ GElf_Ehdr ;
typedef int Elf ;
typedef int Dwarf_Error ;
typedef int Dwarf_Debug ;
typedef TYPE_2__ Dwarf_Block ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int **,int *) ;
 int FUNC_4 (int) ;
 TYPE_1__* FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static uint64_t
FUNC_9(Dwarf_Debug VAR_3, Dwarf_Block *VAR_4)
{
 Elf *VAR_5;
 GElf_Ehdr VAR_6;
 Dwarf_Error VAR_7;

 if (FUNC_3(VAR_3, &VAR_5, &VAR_7) != VAR_0) {
  FUNC_8("dwarf_get_elf failed: %s", FUNC_2(VAR_7));
  return (0);
 }

 if (FUNC_5(VAR_5, &VAR_6) != &VAR_6) {
  FUNC_8("gelf_getehdr failed: %s", FUNC_4(-1));
  return (0);
 }

 if (VAR_4->bl_len == 5) {
  if (VAR_6.e_ident[VAR_1] == VAR_2)
   return (FUNC_6((uint8_t *) VAR_4->bl_data + 1));
  else
   return (FUNC_0((uint8_t *) VAR_4->bl_data + 1));
 } else if (VAR_4->bl_len == 9) {
  if (VAR_6.e_ident[VAR_1] == VAR_2)
   return (FUNC_7((uint8_t *) VAR_4->bl_data + 1));
  else
   return (FUNC_1((uint8_t *) VAR_4->bl_data + 1));
 }

 return (0);
}
