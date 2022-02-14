
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mst_watchdog; } ;
struct TYPE_3__ {int ic_oerrors; } ;
struct malo_softc {scalar_t__ malo_timer; TYPE_2__ malo_stats; TYPE_1__ malo_ic; int malo_dev; int malo_invalid; scalar_t__ malo_running; int malo_watchdog_timer; } ;


 int FUNC_0 (int *,int ,void (*) (void*),struct malo_softc*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct malo_softc *VAR_2 = VAR_1;

 FUNC_0(&VAR_2->malo_watchdog_timer, VAR_0, FUNC_3, VAR_2);
 if (VAR_2->malo_timer == 0 || --VAR_2->malo_timer > 0)
  return;

 if (VAR_2->malo_running && !VAR_2->malo_invalid) {
  FUNC_2(VAR_2->malo_dev, "watchdog timeout\n");



  FUNC_1(VAR_2->malo_ic.ic_oerrors, 1);
  VAR_2->malo_stats.mst_watchdog++;
 }
}
