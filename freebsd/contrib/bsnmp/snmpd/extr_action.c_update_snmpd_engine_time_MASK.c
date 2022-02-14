
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct TYPE_2__ {unsigned long long engine_time; } ;


 unsigned long long VAR_0 ;
 unsigned long long FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__ VAR_1 ;
 unsigned long long VAR_2 ;

void
FUNC_2(void)
{
 uint64_t VAR_3;

 VAR_3 = (FUNC_0() - VAR_2) / 100ULL;
 if (VAR_3 < VAR_0)
  VAR_1.engine_time = VAR_3;
 else {
  VAR_2 = FUNC_0();
  (void)FUNC_1();
  VAR_1.engine_time = VAR_2;
 }
}
