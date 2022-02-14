
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int timer; int callout; int resets; } ;
struct TYPE_3__ {scalar_t__ active_queue_len; scalar_t__ queue_removes; scalar_t__ queue_removes_at_last_tick; int running; } ;
struct cpsw_softc {TYPE_2__ watchdog; TYPE_1__ tx; } ;


 int FUNC_0 (struct cpsw_softc*) ;
 int FUNC_1 (struct cpsw_softc*) ;
 int FUNC_2 (int *,int ,void (*) (void*),struct cpsw_softc*) ;
 scalar_t__ FUNC_3 (struct cpsw_softc*) ;
 int FUNC_4 (struct cpsw_softc*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(void *VAR_1)
{
 struct cpsw_softc *VAR_2;

 VAR_2 = VAR_1;
 FUNC_0(VAR_2);
 if (VAR_2->tx.active_queue_len == 0 || !VAR_2->tx.running) {
  VAR_2->watchdog.timer = 0;
 } else if (VAR_2->tx.queue_removes > VAR_2->tx.queue_removes_at_last_tick) {
  VAR_2->watchdog.timer = 0;
 } else if (FUNC_3(VAR_2) > 0) {
  VAR_2->watchdog.timer = 0;
 } else {

  ++VAR_2->watchdog.timer;
  if (VAR_2->watchdog.timer > 5) {
   VAR_2->watchdog.timer = 0;
   ++VAR_2->watchdog.resets;
   FUNC_4(VAR_2);
  }
 }
 VAR_2->tx.queue_removes_at_last_tick = VAR_2->tx.queue_removes;
 FUNC_1(VAR_2);


 FUNC_2(&VAR_2->watchdog.callout, VAR_0, FUNC_5, VAR_2);
}
