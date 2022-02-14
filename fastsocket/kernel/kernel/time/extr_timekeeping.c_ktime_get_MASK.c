
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ s64 ;
typedef int ktime_t ;
struct TYPE_4__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_5__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_6__ {TYPE_1__ wall_to_monotonic; TYPE_2__ xtime; int lock; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 unsigned int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,unsigned int) ;
 TYPE_3__ VAR_0 ;
 scalar_t__ FUNC_6 () ;
 int VAR_1 ;

ktime_t FUNC_7(void)
{
 unsigned int VAR_2;
 s64 VAR_3, VAR_4;

 FUNC_0(VAR_1);

 do {
  VAR_2 = FUNC_4(&VAR_0.lock);
  VAR_3 = VAR_0.xtime.tv_sec +
    VAR_0.wall_to_monotonic.tv_sec;
  VAR_4 = VAR_0.xtime.tv_nsec +
    VAR_0.wall_to_monotonic.tv_nsec;
  VAR_4 += FUNC_6();

  VAR_4 += FUNC_1();

 } while (FUNC_5(&VAR_0.lock, VAR_2));




 return FUNC_2(FUNC_3(VAR_3, 0), VAR_4);
}
