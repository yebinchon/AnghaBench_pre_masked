
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int uint64_t ;
struct mv_wdt_softc {int wdt_mtx; TYPE_1__* wdt_config; } ;
struct TYPE_6__ {TYPE_2__* wdt_config; } ;
struct TYPE_5__ {int (* wdt_enable ) () ;int wdt_timer; int (* wdt_disable ) () ;} ;
struct TYPE_4__ {unsigned int wdt_clock_src; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static void
FUNC_6(void *VAR_3, unsigned int VAR_4, int *VAR_5)
{
 struct mv_wdt_softc *VAR_6;
 uint64_t VAR_7;
 uint64_t VAR_8;

 VAR_6 = VAR_3;
 FUNC_0(&VAR_6->wdt_mtx);
 if (VAR_4 == 0) {
  if (VAR_2->wdt_config->wdt_disable != ((void*)0))
   VAR_2->wdt_config->wdt_disable();
 } else {




  VAR_7 = (uint64_t)1 << (VAR_4 & VAR_1);
  VAR_8 = (uint64_t)(VAR_7 * VAR_6->wdt_config->wdt_clock_src) / 1000000000;
  if (VAR_8 > VAR_0) {
   if (VAR_2->wdt_config->wdt_disable != ((void*)0))
    VAR_2->wdt_config->wdt_disable();
  }
  else {
   FUNC_2(VAR_2->wdt_config->wdt_timer, VAR_8);
   if (VAR_2->wdt_config->wdt_enable != ((void*)0))
    VAR_2->wdt_config->wdt_enable();
   *VAR_5 = 0;
  }
 }
 FUNC_1(&VAR_6->wdt_mtx);
}
