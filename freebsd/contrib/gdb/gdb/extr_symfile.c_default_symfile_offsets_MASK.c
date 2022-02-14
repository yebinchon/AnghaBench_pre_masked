
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section_offsets {scalar_t__* offsets; } ;
struct section_addr_info {int num_sections; struct other_sections* other; } ;
struct other_sections {scalar_t__ addr; size_t sectindex; scalar_t__ name; } ;
struct objfile {struct section_offsets* section_offsets; int num_sections; int objfile_obstack; int obfd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct objfile*) ;
 int FUNC_3 (struct section_offsets*,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;

void
FUNC_5 (struct objfile *VAR_0,
    struct section_addr_info *VAR_1)
{
  int VAR_2;

  VAR_0->num_sections = FUNC_1 (VAR_0->obfd);
  VAR_0->section_offsets = (struct section_offsets *)
    FUNC_4 (&VAR_0->objfile_obstack,
     FUNC_0 (VAR_0->num_sections));
  FUNC_3 (VAR_0->section_offsets, 0,
   FUNC_0 (VAR_0->num_sections));



  for (VAR_2 = 0; VAR_2 < VAR_1->num_sections && VAR_1->other[VAR_2].name; VAR_2++)
    {
      struct other_sections *VAR_3 ;

      VAR_3 = &VAR_1->other[VAR_2] ;
      if (VAR_3->addr == 0)
   continue;




      (VAR_0->section_offsets)->offsets[VAR_3->sectindex] = VAR_3->addr;
    }



  FUNC_2 (VAR_0);
}
