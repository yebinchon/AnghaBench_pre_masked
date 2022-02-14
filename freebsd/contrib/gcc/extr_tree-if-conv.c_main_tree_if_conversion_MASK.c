
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct loop {int dummy; } ;
struct TYPE_2__ {unsigned int num; struct loop** parray; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct loop*,int) ;

__attribute__((used)) static unsigned int
FUNC_1 (void)
{
  unsigned VAR_1, VAR_2;
  struct loop *VAR_3;

  if (!VAR_0)
    return 0;

  VAR_2 = VAR_0->num;
  for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++)
    {
      VAR_3 = VAR_0->parray[VAR_1];
      if (!VAR_3)
      continue;

      FUNC_0 (VAR_3, 1);
    }
  return 0;
}
