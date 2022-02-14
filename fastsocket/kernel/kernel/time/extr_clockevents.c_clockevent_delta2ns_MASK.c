
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct clock_event_device {int shift; int mult; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int) ;

unsigned long FUNC_3(unsigned long VAR_1,
      struct clock_event_device *VAR_2)
{
 u64 VAR_3 = ((u64) VAR_1 << VAR_2->shift);

 if (FUNC_2(!VAR_2->mult)) {
  VAR_2->mult = 1;
  FUNC_0(1);
 }

 FUNC_1(VAR_3, VAR_2->mult);
 if (VAR_3 < 1000)
  VAR_3 = 1000;
 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;

 return (unsigned long) VAR_3;
}
