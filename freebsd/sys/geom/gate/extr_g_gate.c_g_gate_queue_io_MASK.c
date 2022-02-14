
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_gate_softc {int sc_flags; scalar_t__ sc_queue_size; scalar_t__ sc_queue_count; int sc_queue_mtx; int sc_inqueue; scalar_t__ sc_seq; } ;
struct bio {void* bio_driver1; TYPE_2__* bio_to; } ;
struct TYPE_4__ {TYPE_1__* geom; } ;
struct TYPE_3__ {struct g_gate_softc* softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct bio*,char*) ;
 int FUNC_1 (int *,struct bio*) ;
 int FUNC_2 (struct bio*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct g_gate_softc*) ;

__attribute__((used)) static void
FUNC_6(struct bio *VAR_3)
{
 struct g_gate_softc *VAR_4;

 VAR_4 = VAR_3->bio_to->geom->softc;
 if (VAR_4 == ((void*)0) || (VAR_4->sc_flags & VAR_2) != 0) {
  FUNC_2(VAR_3, VAR_1);
  return;
 }

 FUNC_3(&VAR_4->sc_queue_mtx);

 if (VAR_4->sc_queue_size > 0 && VAR_4->sc_queue_count > VAR_4->sc_queue_size) {
  FUNC_4(&VAR_4->sc_queue_mtx);
  FUNC_0(1, VAR_3, "Queue full, request canceled.");
  FUNC_2(VAR_3, VAR_0);
  return;
 }

 VAR_3->bio_driver1 = (void *)VAR_4->sc_seq;
 VAR_4->sc_seq++;
 VAR_4->sc_queue_count++;

 FUNC_1(&VAR_4->sc_inqueue, VAR_3);
 FUNC_5(VAR_4);

 FUNC_4(&VAR_4->sc_queue_mtx);
}
