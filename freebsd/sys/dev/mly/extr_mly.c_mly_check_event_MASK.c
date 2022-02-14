
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mly_softc {scalar_t__ mly_event_change; scalar_t__ mly_event_waiting; scalar_t__ mly_event_counter; TYPE_3__* mly_mmbox; } ;
struct TYPE_5__ {scalar_t__ change_counter; scalar_t__ next_event; } ;
struct TYPE_4__ {TYPE_2__ status; } ;
struct TYPE_6__ {TYPE_1__ mmm_health; } ;


 int FUNC_0 (int,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct mly_softc*) ;
 int FUNC_2 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_3(struct mly_softc *VAR_0)
{







    if (VAR_0->mly_mmbox->mmm_health.status.change_counter != VAR_0->mly_event_change) {
 VAR_0->mly_event_change = VAR_0->mly_mmbox->mmm_health.status.change_counter;
 FUNC_0(1, "event change %d, event status update, %d -> %d", VAR_0->mly_event_change,
       VAR_0->mly_event_waiting, VAR_0->mly_mmbox->mmm_health.status.next_event);
 VAR_0->mly_event_waiting = VAR_0->mly_mmbox->mmm_health.status.next_event;


 FUNC_2(&VAR_0->mly_event_change);
    }
    if (VAR_0->mly_event_counter != VAR_0->mly_event_waiting)
    FUNC_1(VAR_0);
}
