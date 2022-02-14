
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
struct eventtimer {void* et_frequency; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 struct eventtimer* VAR_0 ;

void
FUNC_3(struct eventtimer *VAR_1, uint64_t VAR_2)
{

 FUNC_0();
 if (VAR_1 == VAR_0) {
  FUNC_2(0);
  VAR_1->et_frequency = VAR_2;
  FUNC_2(1);
 } else
  VAR_1->et_frequency = VAR_2;
 FUNC_1();
}
