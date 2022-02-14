
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loops {int num; struct loop** parray; } ;
struct loop {scalar_t__ inner; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct loops*,struct loop*,int ) ;

unsigned int
FUNC_1 (struct loops *VAR_1)
{
  int VAR_2, VAR_3;
  struct loop *VAR_4;
  bool VAR_5 = 0;


  VAR_3 = VAR_1->num;

  for (VAR_2 = 1; VAR_2 < VAR_3; VAR_2++)
    {

      VAR_4 = VAR_1->parray[VAR_2];
      if (!VAR_4)
 continue;

      if (VAR_4->inner)
 continue;

      VAR_5 |= FUNC_0 (VAR_1, VAR_4, 0);
    }

  if (VAR_5)
    return VAR_0;
  return 0;
}
