
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_tid {scalar_t__ paused; scalar_t__ sched; scalar_t__ addba_tx_pending; scalar_t__ isfiltered; scalar_t__ bar_tx; scalar_t__ bar_wait; scalar_t__ cleanup_inprogress; scalar_t__ incomp; } ;
struct ath_softc {int dummy; } ;



__attribute__((used)) static void
FUNC_0(struct ath_softc *VAR_0, struct ath_tid *VAR_1)
{
 if (VAR_1->bar_wait) {
  if (VAR_1->paused > 0) {
   VAR_1->paused --;
  }
 }
 if (VAR_1->isfiltered) {
  if (VAR_1->paused > 0) {
   VAR_1->paused --;
  }
 }






 VAR_1->bar_wait = 0;
 VAR_1->bar_tx = 0;
 VAR_1->isfiltered = 0;
 VAR_1->sched = 0;
 VAR_1->addba_tx_pending = 0;
}
