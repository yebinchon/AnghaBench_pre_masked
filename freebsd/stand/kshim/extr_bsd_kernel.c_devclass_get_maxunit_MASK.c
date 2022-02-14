
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* devclass_t ;
struct TYPE_3__ {scalar_t__* dev_list; } ;


 int VAR_0 ;

int
FUNC_0(devclass_t VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1) {
  VAR_2 = VAR_0;
  while (VAR_2--) {
   if (VAR_1->dev_list[VAR_2]) {
    break;
   }
  }
  VAR_2++;
 }
 return (VAR_2);
}
