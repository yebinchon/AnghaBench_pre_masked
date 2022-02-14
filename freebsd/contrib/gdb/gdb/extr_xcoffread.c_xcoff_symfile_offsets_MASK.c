
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct section_offsets {scalar_t__* offsets; } ;
struct section_addr_info {int dummy; } ;
struct objfile {int num_sections; struct section_offsets* section_offsets; int sect_index_rodata; int obfd; int sect_index_bss; int sect_index_data; int sect_index_text; int objfile_obstack; } ;
struct TYPE_3__ {int index; } ;
typedef TYPE_1__ asection ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4 (struct objfile *VAR_0, struct section_addr_info *VAR_1)
{
  asection *VAR_2 = ((void*)0);
  int VAR_3;

  VAR_0->num_sections = FUNC_1 (VAR_0->obfd);
  VAR_0->section_offsets = (struct section_offsets *)
    FUNC_3 (&VAR_0->objfile_obstack,
     FUNC_0 (VAR_0->num_sections));


  VAR_2 = FUNC_2 (VAR_0->obfd, ".text");
  if (VAR_2)
    VAR_0->sect_index_text = VAR_2->index;

  VAR_2 = FUNC_2 (VAR_0->obfd, ".data");
  if (VAR_2)
    VAR_0->sect_index_data = VAR_2->index;

  VAR_2 = FUNC_2 (VAR_0->obfd, ".bss");
  if (VAR_2)
    VAR_0->sect_index_bss = VAR_2->index;

  VAR_2 = FUNC_2 (VAR_0->obfd, ".rodata");
  if (VAR_2)
    VAR_0->sect_index_rodata = VAR_2->index;

  for (VAR_3 = 0; VAR_3 < VAR_0->num_sections; ++VAR_3)
    {
 (VAR_0->section_offsets)->offsets[VAR_3] = 0;
    }
}
