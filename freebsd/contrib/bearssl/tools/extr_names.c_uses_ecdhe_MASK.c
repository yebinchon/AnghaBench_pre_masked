
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int suite; int req; scalar_t__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

int
FUNC_0(unsigned VAR_3)
{
 size_t VAR_4;

 for (VAR_4 = 0; VAR_2[VAR_4].name; VAR_4 ++) {
  if (VAR_2[VAR_4].suite == VAR_3) {
   return (VAR_2[VAR_4].req
    & (VAR_1 | VAR_0)) != 0;
  }
 }
 return 0;
}
