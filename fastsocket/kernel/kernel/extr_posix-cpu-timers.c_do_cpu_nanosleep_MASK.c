
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timespec {int tv_sec; int tv_nsec; } ;
struct TYPE_6__ {scalar_t__ sched; } ;
struct TYPE_4__ {TYPE_3__ expires; } ;
struct TYPE_5__ {TYPE_1__ cpu; } ;
struct k_itimer {int it_overrun; struct timespec it_value; int it_lock; TYPE_2__ it; int it_process; int it_clock; } ;
struct itimerspec {int it_overrun; struct timespec it_value; int it_lock; TYPE_2__ it; int it_process; int it_clock; } ;
typedef int clockid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct k_itimer*,int ,int) ;
 int FUNC_2 (struct k_itimer*) ;
 int FUNC_3 (struct k_itimer*,int,struct k_itimer*,struct k_itimer*) ;
 int FUNC_4 (int const,TYPE_3__,struct timespec*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(const clockid_t VAR_3, int VAR_4,
       struct timespec *VAR_5, struct itimerspec *VAR_6)
{
 struct k_itimer VAR_7;
 int VAR_8;




 FUNC_1(&VAR_7, 0, sizeof VAR_7);
 FUNC_7(&VAR_7.it_lock);
 VAR_7.it_clock = VAR_3;
 VAR_7.it_overrun = -1;
 VAR_8 = FUNC_2(&VAR_7);
 VAR_7.it_process = VAR_2;
 if (!VAR_8) {
  static struct itimerspec VAR_9;

  FUNC_1(VAR_6, 0, sizeof *VAR_6);
  VAR_6->it_value = *VAR_5;

  FUNC_8(&VAR_7.it_lock);
  VAR_8 = FUNC_3(&VAR_7, VAR_4, VAR_6, ((void*)0));
  if (VAR_8) {
   FUNC_9(&VAR_7.it_lock);
   return VAR_8;
  }

  while (!FUNC_6(VAR_2)) {
   if (VAR_7.it.cpu.expires.sched == 0) {



    FUNC_9(&VAR_7.it_lock);
    return 0;
   }




   FUNC_0(VAR_1);
   FUNC_9(&VAR_7.it_lock);
   FUNC_5();
   FUNC_8(&VAR_7.it_lock);
  }




  FUNC_4(VAR_3, VAR_7.it.cpu.expires, VAR_5);
  FUNC_3(&VAR_7, 0, &VAR_9, VAR_6);
  FUNC_9(&VAR_7.it_lock);

  if ((VAR_6->it_value.tv_sec | VAR_6->it_value.tv_nsec) == 0) {



   return 0;
  }

  VAR_8 = -VAR_0;
 }

 return VAR_8;
}
