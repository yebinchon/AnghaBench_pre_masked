
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int linktype; int dlt; } ;


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







 if (VAR_7 == VAR_4)
  return (VAR_0);
 if (VAR_7 == VAR_5)
  return (VAR_1);





 if (VAR_7 >= VAR_3 &&
     VAR_7 <= VAR_2)
  return (VAR_7);




 for (VAR_8 = 0; VAR_6[VAR_8].linktype != -1; VAR_8++) {
  if (VAR_6[VAR_8].linktype == VAR_7)
   return (VAR_6[VAR_8].dlt);
 }






 return VAR_7;
}
