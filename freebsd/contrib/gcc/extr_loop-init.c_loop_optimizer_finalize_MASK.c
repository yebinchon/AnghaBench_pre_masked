
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loops {unsigned int num; scalar_t__* parray; } ;


 int FUNC_0 (struct loops*) ;
 int FUNC_1 (struct loops*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;

void
FUNC_4 (struct loops *VAR_0)
{
  unsigned VAR_1;

  if (!VAR_0)
    return;

  for (VAR_1 = 1; VAR_1 < VAR_0->num; VAR_1++)
    if (VAR_0->parray[VAR_1])
      FUNC_2 (VAR_0->parray[VAR_1]);


  FUNC_0 (VAR_0);
  FUNC_1 (VAR_0);





}
