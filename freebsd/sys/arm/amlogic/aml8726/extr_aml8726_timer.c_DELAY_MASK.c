
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int tc_frequency; } ;
struct TYPE_3__ {TYPE_2__ tc; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 () ;

void
FUNC_4(int VAR_1)
{
 uint32_t VAR_2;
 uint32_t VAR_3, VAR_4, VAR_5, VAR_6;


 if (VAR_0 == ((void*)0)) {
  for (; VAR_1 > 0; VAR_1--)
   for (VAR_2 = 200; VAR_2 > 0; VAR_2--) {

    FUNC_3();
   }
  return;
 }
 FUNC_0();
 VAR_6 = VAR_1 * ((VAR_0->tc.tc_frequency + 999999) /
     1000000);





 VAR_6 += 1;

 VAR_5 = FUNC_2(&VAR_0->tc);

 for ( ; ; ) {
  VAR_4 = FUNC_2(&VAR_0->tc);
  VAR_3 = VAR_4 - VAR_5;

  if (VAR_3 >= VAR_6)
   break;

  VAR_5 = VAR_4;
  VAR_6 -= VAR_3;
 }
 FUNC_1();
}
