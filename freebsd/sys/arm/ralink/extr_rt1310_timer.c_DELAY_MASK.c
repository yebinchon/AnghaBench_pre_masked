
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int tc_frequency; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;

void
FUNC_3(int VAR_2)
{
 uint32_t VAR_3;
 uint32_t VAR_4, VAR_5;
 int VAR_6 = (VAR_0.tc_frequency / 1000000 + 1) * VAR_2;


 if (!VAR_1) {
  for (; VAR_2 > 0; VAR_2--)
   for (VAR_3 = 100; VAR_3 > 0; VAR_3--)
    ;
  return;
 }
 FUNC_0();

 VAR_4 = FUNC_2(&VAR_0);
 while (VAR_6 > 0) {
  VAR_5 = FUNC_2(&VAR_0);
  if (VAR_5 < VAR_4) {

   VAR_5 = VAR_4;
  }

  VAR_6 -= (VAR_5 - VAR_4);
  VAR_4 = VAR_5;
 }
 FUNC_1();
}
