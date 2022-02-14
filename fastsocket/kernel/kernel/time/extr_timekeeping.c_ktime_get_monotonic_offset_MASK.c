
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
typedef int ktime_t ;
struct TYPE_2__ {struct timespec wall_to_monotonic; int lock; } ;


 unsigned long FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned long) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (struct timespec) ;

ktime_t FUNC_3(void)
{
 unsigned long VAR_1;
 struct timespec VAR_2;

 do {
  VAR_1 = FUNC_0(&VAR_0.lock);
  VAR_2 = VAR_0.wall_to_monotonic;
 } while (FUNC_1(&VAR_0.lock, VAR_1));

 return FUNC_2(VAR_2);
}
