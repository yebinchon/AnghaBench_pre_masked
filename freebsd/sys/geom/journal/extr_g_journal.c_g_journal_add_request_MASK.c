
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int queue; } ;
struct g_journal_softc {scalar_t__ sc_delayed_count; scalar_t__ sc_flush_count; TYPE_1__ sc_delayed_queue; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int,struct bio*,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,struct bio*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (struct g_journal_softc*,struct bio*) ;

__attribute__((used)) static void
FUNC_5(struct g_journal_softc *VAR_1, struct bio *VAR_2)
{




 if (VAR_1->sc_delayed_count > 0 ||
     VAR_1->sc_flush_count >= VAR_0) {
  FUNC_0(4, VAR_2, "DELAYED");
  FUNC_3(&VAR_1->sc_delayed_queue, VAR_2);
  VAR_1->sc_delayed_count++;
  return;
 }

 FUNC_1(FUNC_2(&VAR_1->sc_delayed_queue.queue),
     ("DELAYED queue not empty."));
 FUNC_4(VAR_1, VAR_2);
}
