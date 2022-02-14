
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loops {unsigned int num; int state; int * parray; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

void
FUNC_1 (struct loops *VAR_1, int VAR_2)
{
  unsigned VAR_3;
  for (VAR_3 = 1; VAR_3 < VAR_1->num; VAR_3++)
    FUNC_0 (VAR_1->parray[VAR_3], VAR_2);
  VAR_1->state |= VAR_0;
}
