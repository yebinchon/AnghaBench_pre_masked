
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmap {scalar_t__ dvma; scalar_t__ dstart; scalar_t__ tvma; scalar_t__ tstart; int loaded; struct objfile* objfile; } ;
struct section_offsets {scalar_t__* offsets; } ;
struct objfile {int num_sections; int section_offsets; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 size_t FUNC_1 (struct objfile*) ;
 size_t FUNC_2 (struct objfile*) ;
 size_t FUNC_3 (struct objfile*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct objfile*,struct section_offsets*) ;
 struct objfile* VAR_0 ;

__attribute__((used)) static void
FUNC_7 (struct vmap *VAR_1)
{
  struct objfile *VAR_2;
  struct section_offsets *VAR_3;
  int VAR_4;

  VAR_2 = VAR_1->objfile;
  if (VAR_2 == ((void*)0))
    {



      if (VAR_0 == ((void*)0))
 return;
      VAR_2 = VAR_0;
    }
  else if (!VAR_1->loaded)

    return;

  VAR_3 =
    (struct section_offsets *)
    FUNC_5 (FUNC_4 (VAR_2->num_sections));

  for (VAR_4 = 0; VAR_4 < VAR_2->num_sections; ++VAR_4)
    VAR_3->offsets[VAR_4] = FUNC_0 (VAR_2->section_offsets, VAR_4);



  VAR_3->offsets[FUNC_3 (VAR_2)] = VAR_1->tstart - VAR_1->tvma;
  VAR_3->offsets[FUNC_2 (VAR_2)] = VAR_1->dstart - VAR_1->dvma;
  VAR_3->offsets[FUNC_1 (VAR_2)] = VAR_1->dstart - VAR_1->dvma;

  FUNC_6 (VAR_2, VAR_3);
}
