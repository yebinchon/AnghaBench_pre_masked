
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
typedef scalar_t__ s64 ;
struct TYPE_2__ {struct timespec wall_to_monotonic; struct timespec xtime; int lock; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 unsigned int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (struct timespec*,scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_5 () ;
 int VAR_1 ;

void FUNC_6(struct timespec *VAR_2)
{
 struct timespec VAR_3;
 unsigned int VAR_4;
 s64 VAR_5;

 FUNC_0(VAR_1);

 do {
  VAR_4 = FUNC_2(&VAR_0.lock);
  *VAR_2 = VAR_0.xtime;
  VAR_3 = VAR_0.wall_to_monotonic;
  VAR_5 = FUNC_5();

  VAR_5 += FUNC_1();

 } while (FUNC_3(&VAR_0.lock, VAR_4));

 FUNC_4(VAR_2, VAR_2->tv_sec + VAR_3.tv_sec,
    VAR_2->tv_nsec + VAR_3.tv_nsec + VAR_5);
}
