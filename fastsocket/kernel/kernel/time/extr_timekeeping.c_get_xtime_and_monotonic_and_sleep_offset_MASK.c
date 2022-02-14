
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct TYPE_2__ {struct timespec total_sleep_time; struct timespec wall_to_monotonic; struct timespec xtime; int lock; } ;


 unsigned long FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned long) ;
 TYPE_1__ VAR_0 ;

void FUNC_2(struct timespec *VAR_1,
    struct timespec *VAR_2, struct timespec *VAR_3)
{
 unsigned long VAR_4;

 do {
  VAR_4 = FUNC_0(&VAR_0.lock);
  *VAR_1 = VAR_0.xtime;
  *VAR_2 = VAR_0.wall_to_monotonic;
  *VAR_3 = VAR_0.total_sleep_time;
 } while (FUNC_1(&VAR_0.lock, VAR_4));
}
