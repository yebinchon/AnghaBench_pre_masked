
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct objfile {int sect_index_text; int sect_index_data; int sect_index_bss; int sect_index_rodata; int num_sections; int section_offsets; int obfd; } ;
struct TYPE_3__ {int index; } ;
typedef TYPE_1__ asection ;


 scalar_t__ FUNC_0 (int ,int) ;
 TYPE_1__* FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2 (struct objfile *VAR_0)
{
  asection *VAR_1;
  int VAR_2;

  VAR_1 = FUNC_1 (VAR_0->obfd, ".text");
  if (VAR_1)
    VAR_0->sect_index_text = VAR_1->index;

  VAR_1 = FUNC_1 (VAR_0->obfd, ".data");
  if (VAR_1)
    VAR_0->sect_index_data = VAR_1->index;

  VAR_1 = FUNC_1 (VAR_0->obfd, ".bss");
  if (VAR_1)
    VAR_0->sect_index_bss = VAR_1->index;

  VAR_1 = FUNC_1 (VAR_0->obfd, ".rodata");
  if (VAR_1)
    VAR_0->sect_index_rodata = VAR_1->index;
  for (VAR_2 = 0; VAR_2 < VAR_0->num_sections; VAR_2++)
    {
      if (FUNC_0 (VAR_0->section_offsets, VAR_2) != 0)
 {
   break;
 }
    }
  if (VAR_2 == VAR_0->num_sections)
    {
      if (VAR_0->sect_index_text == -1)
 VAR_0->sect_index_text = 0;
      if (VAR_0->sect_index_data == -1)
 VAR_0->sect_index_data = 0;
      if (VAR_0->sect_index_bss == -1)
 VAR_0->sect_index_bss = 0;
      if (VAR_0->sect_index_rodata == -1)
 VAR_0->sect_index_rodata = 0;
    }
}
