
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct algo_needs {int* needs; } ;


 int VAR_0 ;

int FUNC_0(struct algo_needs* VAR_1)
{
 int VAR_2;

 for(VAR_2=0; VAR_2<VAR_0; VAR_2++)
  if(VAR_1->needs[VAR_2] == 2)
   return 0;

 for(VAR_2=0; VAR_2<VAR_0; VAR_2++)
  if(VAR_1->needs[VAR_2] == 1)
   return VAR_2;
 return 0;
}
