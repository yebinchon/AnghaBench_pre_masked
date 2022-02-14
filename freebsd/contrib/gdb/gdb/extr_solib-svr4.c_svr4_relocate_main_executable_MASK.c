
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
 int FUNC_3 (struct cleanup*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int VAR_2 ;
 struct cleanup* FUNC_5 (int ,struct section_offsets*) ;
 int FUNC_6 (TYPE_1__*,struct section_offsets*) ;
 scalar_t__ FUNC_7 () ;
 TYPE_1__* VAR_3 ;
 struct section_offsets* FUNC_8 (int,int) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_9 (void)
{
  asection *VAR_5;
  CORE_ADDR VAR_6 = FUNC_7 ();
  VAR_5 = FUNC_2 (VAR_1, ".interp");
  if (VAR_5 == ((void*)0)
      && (FUNC_1 (VAR_1) & VAR_0) != 0
      && (FUNC_4 (VAR_1, &VAR_2) != VAR_6))
    {
      struct cleanup *VAR_7;
      struct section_offsets *VAR_8;
      int VAR_9, VAR_10;
      CORE_ADDR VAR_11;
      VAR_11 = VAR_6 - FUNC_4 (VAR_1, &VAR_2);
      VAR_10 = 0;

      VAR_8 = FUNC_8 (VAR_3->num_sections,
        sizeof (struct section_offsets));
      VAR_7 = FUNC_5 (VAR_4, VAR_8);

      for (VAR_9 = 0; VAR_9 < VAR_3->num_sections; VAR_9++)
 {
   if (VAR_11 != FUNC_0 (VAR_3->section_offsets, VAR_9))
     VAR_10 = 1;
   VAR_8->offsets[VAR_9] = VAR_11;
 }

      if (VAR_10)
 FUNC_6 (VAR_3, VAR_8);

      FUNC_3 (VAR_7);
    }
}
