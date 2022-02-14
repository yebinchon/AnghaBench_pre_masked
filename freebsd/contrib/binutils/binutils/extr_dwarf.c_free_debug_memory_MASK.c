
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum dwarf_section_display_enum { ____Placeholder_dwarf_section_display_enum } dwarf_section_display_enum ;
struct TYPE_3__ {struct TYPE_3__* range_lists; int max_range_lists; struct TYPE_3__* have_frame_base; struct TYPE_3__* loc_offsets; int max_loc_offsets; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_3 (void)
{
  enum dwarf_section_display_enum VAR_3;

  FUNC_1 ();

  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    FUNC_2 (VAR_3);

  if (VAR_0)
    {
      for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
 {
   if (!VAR_0 [VAR_3].max_loc_offsets)
     {
       FUNC_0 (VAR_0 [VAR_3].loc_offsets);
       FUNC_0 (VAR_0 [VAR_3].have_frame_base);
     }
   if (!VAR_0 [VAR_3].max_range_lists)
     FUNC_0 (VAR_0 [VAR_3].range_lists);
 }
      FUNC_0 (VAR_0);
      VAR_0 = ((void*)0);
      VAR_2 = 0;
    }

}
