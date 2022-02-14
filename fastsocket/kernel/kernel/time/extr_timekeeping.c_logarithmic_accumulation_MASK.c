
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int cycle_t ;
struct TYPE_9__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_8__ {int tv_sec; } ;
struct TYPE_7__ {scalar_t__ tv_sec; } ;
struct TYPE_10__ {scalar_t__ shift; int cycle_interval; scalar_t__ xtime_nsec; int xtime_interval; int raw_interval; int ntp_error; int xtime_remainder; int ntp_error_shift; TYPE_4__ raw_time; TYPE_3__ wall_to_monotonic; TYPE_2__ xtime; TYPE_1__* clock; } ;
struct TYPE_6__ {int cycle_last; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 TYPE_5__ VAR_1 ;

__attribute__((used)) static cycle_t FUNC_4(cycle_t VAR_2, int VAR_3)
{
 u64 VAR_4 = (u64)VAR_0 << VAR_1.shift;
 u64 VAR_5;


 if (VAR_2 < VAR_1.cycle_interval<<VAR_3)
  return VAR_2;


 VAR_2 -= VAR_1.cycle_interval << VAR_3;
 VAR_1.clock->cycle_last += VAR_1.cycle_interval << VAR_3;

 VAR_1.xtime_nsec += VAR_1.xtime_interval << VAR_3;
 while (VAR_1.xtime_nsec >= VAR_4) {
  int VAR_6;
  VAR_1.xtime_nsec -= VAR_4;
  VAR_1.xtime.tv_sec++;
  VAR_6 = FUNC_3(VAR_1.xtime.tv_sec);
  VAR_1.xtime.tv_sec += VAR_6;
  VAR_1.wall_to_monotonic.tv_sec -= VAR_6;
  if (VAR_6)
   FUNC_0();
 }


 VAR_5 = VAR_1.raw_interval << VAR_3;
 VAR_5 += VAR_1.raw_time.tv_nsec;
 if (VAR_5 >= VAR_0) {
  u64 VAR_7 = VAR_5;
  VAR_5 = FUNC_1(VAR_7, VAR_0);
  VAR_1.raw_time.tv_sec += VAR_7;
 }
 VAR_1.raw_time.tv_nsec = VAR_5;


 VAR_1.ntp_error += FUNC_2() << VAR_3;
 VAR_1.ntp_error -=
     (VAR_1.xtime_interval + VAR_1.xtime_remainder) <<
    (VAR_1.ntp_error_shift + VAR_3);

 return VAR_2;
}
