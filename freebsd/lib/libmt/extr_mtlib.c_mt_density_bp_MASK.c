
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct densities {int dens; int bpi; int bpmm; } ;


 struct densities* VAR_0 ;

int
FUNC_0(int VAR_1, int VAR_2)
{
 struct densities *VAR_3;

 for (VAR_3 = VAR_0; VAR_3->dens; VAR_3++)
  if (VAR_3->dens == VAR_1)
   break;
 if (VAR_3->dens == 0)
  return (0);
 if (VAR_2)
  return (VAR_3->bpi);
 else
  return (VAR_3->bpmm);
}
