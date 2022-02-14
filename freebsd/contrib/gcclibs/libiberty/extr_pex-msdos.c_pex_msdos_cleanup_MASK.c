
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pex_obj {int * sysdep; } ;
struct pex_msdos {int dummy; } ;
struct TYPE_3__ {struct TYPE_3__* statuses; struct TYPE_3__** files; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_1 (struct pex_obj *VAR_2)
{
  struct pex_msdos *VAR_3;
  int VAR_4;

  VAR_3 = (struct pex_msdos *) VAR_2->sysdep;
  for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
    if (VAR_1->files[VAR_4] != ((void*)0))
      FUNC_0 (VAR_1->files[VAR_4]);
  if (VAR_1->statuses != ((void*)0))
    FUNC_0 (VAR_1->statuses);
  FUNC_0 (VAR_1);
  VAR_2->sysdep = ((void*)0);
}
