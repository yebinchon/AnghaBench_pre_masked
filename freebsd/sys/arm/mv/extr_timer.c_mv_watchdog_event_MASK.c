
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint64_t ;
struct TYPE_4__ {int timer_mtx; TYPE_1__* config; } ;
struct TYPE_3__ {unsigned int clock_src; int (* watchdog_enable ) () ;int (* watchdog_disable ) () ;} ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static void
FUNC_6(void *VAR_4, unsigned int VAR_5, int *VAR_6)
{
 uint64_t VAR_7;
 uint64_t VAR_8;

 FUNC_0(&VAR_3->timer_mtx);
 if (VAR_5 == 0) {
  if (VAR_3->config->watchdog_disable != ((void*)0))
   VAR_3->config->watchdog_disable();
 } else {




  VAR_7 = (uint64_t)1 << (VAR_5 & VAR_2);
  VAR_8 = (uint64_t)(VAR_7 * VAR_3->config->clock_src) / 1000000000;
  if (VAR_8 > VAR_0) {
   if (VAR_3->config->watchdog_disable != ((void*)0))
    VAR_3->config->watchdog_disable();
  } else {
   FUNC_2(VAR_1, VAR_8);
   if (VAR_3->config->watchdog_enable != ((void*)0))
    VAR_3->config->watchdog_enable();
   *VAR_6 = 0;
  }
 }
 FUNC_1(&VAR_3->timer_mtx);
}
