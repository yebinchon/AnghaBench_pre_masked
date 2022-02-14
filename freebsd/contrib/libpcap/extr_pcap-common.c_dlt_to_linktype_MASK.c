
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dlt; int linktype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;

int
FUNC_0(int VAR_7)
{
 int VAR_8;
 if (VAR_7 == VAR_2)
  return (VAR_4);
 if (VAR_7 == VAR_3)
  return (VAR_5);





 if (VAR_7 >= VAR_1 && VAR_7 <= VAR_0)
  return (VAR_7);




 for (VAR_8 = 0; VAR_6[VAR_8].dlt != -1; VAR_8++) {
  if (VAR_6[VAR_8].dlt == VAR_7)
   return (VAR_6[VAR_8].linktype);
 }






 return (-1);
}
