
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_2__ {struct timespec wall_to_monotonic; struct timespec xtime; int lock; } ;


 unsigned long FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct timespec*,scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_0 ;

struct timespec FUNC_3(void)
{
 struct timespec VAR_1, VAR_2;
 unsigned long VAR_3;

 do {
  VAR_3 = FUNC_0(&VAR_0.lock);

  VAR_1 = VAR_0.xtime;
  VAR_2 = VAR_0.wall_to_monotonic;
 } while (FUNC_1(&VAR_0.lock, VAR_3));

 FUNC_2(&VAR_1, VAR_1.tv_sec + VAR_2.tv_sec,
    VAR_1.tv_nsec + VAR_2.tv_nsec);
 return VAR_1;
}
