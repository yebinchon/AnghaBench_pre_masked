
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct clocksource {int (* read ) (struct clocksource*) ;int cycle_last; int mask; } ;
typedef scalar_t__ s64 ;
typedef int cycle_t ;
struct TYPE_5__ {int tv_sec; } ;
struct TYPE_4__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_6__ {int cycle_interval; scalar_t__ xtime_nsec; scalar_t__ shift; scalar_t__ ntp_error; scalar_t__ ntp_error_shift; int lock; TYPE_2__ wall_to_monotonic; TYPE_1__ xtime; struct clocksource* clock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct clocksource*) ;
 TYPE_3__ VAR_1 ;
 int FUNC_8 (int) ;
 int VAR_2 ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_13(void)
{
 struct clocksource *VAR_3;
 cycle_t VAR_4;
 int VAR_5 = 0, VAR_6;
 unsigned long VAR_7;

 FUNC_11(&VAR_1.lock, VAR_7);


 if (FUNC_10(VAR_2))
  goto out;

 VAR_3 = VAR_1.clock;




 VAR_4 = (VAR_3->read(VAR_3) - VAR_3->cycle_last) & VAR_3->mask;

 VAR_1.xtime_nsec = (s64)VAR_1.xtime.tv_nsec <<
      VAR_1.shift;
 VAR_5 = FUNC_1(VAR_4) - FUNC_1(VAR_1.cycle_interval);
 VAR_5 = FUNC_3(0, VAR_5);

 VAR_6 = (64 - (FUNC_1(FUNC_5())+1)) - 1;
 VAR_5 = FUNC_4(VAR_5, VAR_6);
 while (VAR_4 >= VAR_1.cycle_interval) {
  VAR_4 = FUNC_2(VAR_4, VAR_5);
  if(VAR_4 < VAR_1.cycle_interval<<VAR_5)
   VAR_5--;
 }


 FUNC_8(VAR_4);
 if (FUNC_10((s64)VAR_1.xtime_nsec < 0)) {
  s64 VAR_8 = -(s64)VAR_1.xtime_nsec;
  VAR_1.xtime_nsec = 0;
  VAR_1.ntp_error += VAR_8 << VAR_1.ntp_error_shift;
 }






 VAR_1.xtime.tv_nsec = ((s64)VAR_1.xtime_nsec >>
      VAR_1.shift) + 1;
 VAR_1.xtime_nsec -= (s64)VAR_1.xtime.tv_nsec <<
      VAR_1.shift;
 VAR_1.ntp_error += VAR_1.xtime_nsec <<
    VAR_1.ntp_error_shift;





 if (FUNC_10(VAR_1.xtime.tv_nsec >= VAR_0)) {
  int VAR_9;
  VAR_1.xtime.tv_nsec -= VAR_0;
  VAR_1.xtime.tv_sec++;
  VAR_9 = FUNC_6(VAR_1.xtime.tv_sec);
  VAR_1.xtime.tv_sec += VAR_9;
  VAR_1.wall_to_monotonic.tv_sec -= VAR_9;
  if (VAR_9)
   FUNC_0();
 }

 FUNC_9(0);

out:
 FUNC_12(&VAR_1.lock, VAR_7);

}
