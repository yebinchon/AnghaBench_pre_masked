
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct section_offsets {scalar_t__* offsets; } ;
struct cleanup {int dummy; } ;
typedef int asection ;
struct TYPE_3__ {int num_sections; int section_offsets; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct cleanup*) ;
 int VAR_1 ;
 struct cleanup* FUNC_5 (int ,struct section_offsets*) ;
 int FUNC_6 (TYPE_1__*,struct section_offsets*) ;
 scalar_t__ FUNC_7 () ;
 TYPE_1__* VAR_2 ;
 struct section_offsets* FUNC_8 (int,int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_9 (void)
{
  asection *VAR_4;
  CORE_ADDR VAR_5 = FUNC_7 ();
  VAR_4 = FUNC_2 (VAR_1, ".interp");
  if (VAR_4 == ((void*)0)
      && (FUNC_1 (VAR_1) & VAR_0) != 0
      && FUNC_3 (VAR_1) != VAR_5)
    {
      struct cleanup *VAR_6;
      struct section_offsets *VAR_7;
      int VAR_8, VAR_9;
      CORE_ADDR VAR_10;
      VAR_10 = VAR_5 - FUNC_3 (VAR_1);
      VAR_9 = 0;

      VAR_7 = FUNC_8 (VAR_2->num_sections,
        sizeof (struct section_offsets));
      VAR_6 = FUNC_5 (VAR_3, VAR_7);

      for (VAR_8 = 0; VAR_8 < VAR_2->num_sections; VAR_8++)
 {
   if (VAR_10 != FUNC_0 (VAR_2->section_offsets, VAR_8))
     VAR_9 = 1;
   VAR_7->offsets[VAR_8] = VAR_10;
 }

      if (VAR_9)
 FUNC_6 (VAR_2, VAR_7);

      FUNC_4 (VAR_6);
    }
}
