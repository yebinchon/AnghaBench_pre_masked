
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct clocksource {int shift; int mult; int (* read ) (struct clocksource*) ;int cycle_last; } ;
typedef scalar_t__ cycle_t ;
struct TYPE_2__ {int xtime_interval; int xtime_remainder; int raw_interval; int shift; int mult; scalar_t__ ntp_error_shift; scalar_t__ ntp_error; scalar_t__ xtime_nsec; scalar_t__ cycle_interval; struct clocksource* clock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct clocksource*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_2(struct clocksource *VAR_3)
{
 cycle_t VAR_4;
 u64 VAR_5, VAR_6;

 VAR_2.clock = VAR_3;
 VAR_3->cycle_last = VAR_3->read(VAR_3);


 VAR_5 = VAR_0;
 VAR_5 <<= VAR_3->shift;
 VAR_6 = VAR_5;
 VAR_5 += VAR_3->mult/2;
 FUNC_0(VAR_5, VAR_3->mult);
 if (VAR_5 == 0)
  VAR_5 = 1;

 VAR_4 = (cycle_t) VAR_5;
 VAR_2.cycle_interval = VAR_4;


 VAR_2.xtime_interval = (u64) VAR_4 * VAR_3->mult;
 VAR_2.xtime_remainder = VAR_6 - VAR_2.xtime_interval;
 VAR_2.raw_interval =
  ((u64) VAR_4 * VAR_3->mult) >> VAR_3->shift;

 VAR_2.xtime_nsec = 0;
 VAR_2.shift = VAR_3->shift;

 VAR_2.ntp_error = 0;
 VAR_2.ntp_error_shift = VAR_1 - VAR_3->shift;






 VAR_2.mult = VAR_3->mult;
}
