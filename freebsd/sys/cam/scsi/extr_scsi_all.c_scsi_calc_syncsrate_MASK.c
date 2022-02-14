
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_3__ {scalar_t__ period_factor; int period; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

u_int
FUNC_1(u_int VAR_1)
{
 u_int VAR_2;
 u_int VAR_3;






 if (VAR_1 == 0) {
  return (3300);
 }

 VAR_3 = FUNC_0(VAR_0);

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {

  if (VAR_1 == VAR_0[VAR_2].period_factor) {

   return (100000000 / VAR_0[VAR_2].period);
  }
 }





 return (10000000 / (VAR_1 * 4 * 10));
}
