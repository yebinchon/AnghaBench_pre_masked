
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int tv_sec; } ;
struct TYPE_2__ {int tz_minuteswest; } ;


 struct timespec FUNC_0 () ;
 int FUNC_1 (struct timespec*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static inline void FUNC_2(void)
{
 struct timespec VAR_2;

 VAR_2 = FUNC_0();
 if (VAR_1.tz_minuteswest != 0)
  VAR_0 = 1;
 VAR_2.tv_sec += VAR_1.tz_minuteswest * 60;
 FUNC_1(&VAR_2);
}
