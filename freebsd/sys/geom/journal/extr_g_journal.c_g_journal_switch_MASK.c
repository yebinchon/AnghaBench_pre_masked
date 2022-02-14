
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct g_provider {scalar_t__ acw; scalar_t__ sectorsize; } ;
struct TYPE_6__ {int * jj_queue; scalar_t__ jj_offset; } ;
struct TYPE_5__ {int * jj_queue; scalar_t__ jj_offset; } ;
struct g_journal_softc {int sc_flags; int sc_mtx; TYPE_3__ sc_active; scalar_t__ sc_journal_offset; TYPE_2__ sc_inactive; int sc_journal_next_id; int sc_journal_id; int sc_journal_previous_id; struct g_provider* sc_jprovider; TYPE_1__* sc_geom; int sc_name; } ;
struct TYPE_4__ {int name; int provider; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (scalar_t__,struct g_journal_softc*) ;
 scalar_t__ FUNC_2 (struct g_journal_softc*) ;
 struct g_provider* FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (struct g_journal_softc*) ;
 int FUNC_6 (struct g_journal_softc*) ;
 int FUNC_7 (struct g_journal_softc*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(struct g_journal_softc *VAR_2)
{
 struct g_provider *VAR_3;

 if (FUNC_2(VAR_2)) {
  FUNC_0(3, "No need for %s switch.", VAR_2->sc_name);
  VAR_3 = FUNC_3(&VAR_2->sc_geom->provider);
  if (!(VAR_2->sc_flags & VAR_0) && VAR_3->acw == 0) {
   VAR_2->sc_flags |= VAR_0;
   FUNC_0(1, "Marking %s as clean.", VAR_2->sc_name);
   FUNC_6(VAR_2);
  }
 } else {
  FUNC_0(3, "Switching journal %s.", VAR_2->sc_geom->name);

  VAR_3 = VAR_2->sc_jprovider;

  VAR_2->sc_journal_previous_id = VAR_2->sc_journal_id;

  VAR_2->sc_journal_id = VAR_2->sc_journal_next_id;
  VAR_2->sc_journal_next_id = FUNC_4();

  FUNC_1(VAR_2->sc_journal_offset, VAR_2);

  FUNC_7(VAR_2);

  VAR_2->sc_inactive.jj_offset = VAR_2->sc_active.jj_offset;
  VAR_2->sc_inactive.jj_queue = VAR_2->sc_active.jj_queue;

  VAR_2->sc_active.jj_offset =
      VAR_2->sc_journal_offset - VAR_3->sectorsize;
  VAR_2->sc_active.jj_queue = ((void*)0);





  FUNC_5(VAR_2);
 }
 FUNC_8(&VAR_2->sc_mtx);
 VAR_2->sc_flags &= ~VAR_1;
 FUNC_9(&VAR_2->sc_mtx);
}
