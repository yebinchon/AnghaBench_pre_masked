
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct loop {int nb_iterations; } ;
struct TYPE_2__ {unsigned int num; struct loop** parray; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;

void
FUNC_1 (void)
{
  unsigned VAR_3;
  struct loop *VAR_4;

  if (!VAR_2 || !VAR_1)
    return;

  FUNC_0 (VAR_2);
  for (VAR_3 = 1; VAR_3 < VAR_1->num; VAR_3++)
    {
      VAR_4 = VAR_1->parray[VAR_3];
      if (VAR_4)
 VAR_4->nb_iterations = VAR_0;
    }
}
