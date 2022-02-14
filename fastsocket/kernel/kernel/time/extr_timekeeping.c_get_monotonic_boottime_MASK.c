
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
typedef scalar_t__ s64 ;
struct TYPE_2__ {struct timespec total_sleep_time; struct timespec wall_to_monotonic; struct timespec xtime; int lock; } ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (struct timespec*,scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_4 () ;
 int VAR_1 ;

void FUNC_5(struct timespec *VAR_2)
{
 struct timespec VAR_3, VAR_4;
 unsigned int VAR_5;
 s64 VAR_6;

 FUNC_0(VAR_1);

 do {
  VAR_5 = FUNC_1(&VAR_0.lock);
  *VAR_2 = VAR_0.xtime;
  VAR_3 = VAR_0.wall_to_monotonic;
  VAR_4 = VAR_0.total_sleep_time;
  VAR_6 = FUNC_4();

 } while (FUNC_2(&VAR_0.lock, VAR_5));

 FUNC_3(VAR_2, VAR_2->tv_sec + VAR_3.tv_sec + VAR_4.tv_sec,
   VAR_2->tv_nsec + VAR_3.tv_nsec + VAR_4.tv_nsec + VAR_6);
}
