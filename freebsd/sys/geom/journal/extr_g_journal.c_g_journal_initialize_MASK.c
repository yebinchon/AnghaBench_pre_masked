
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int jj_offset; } ;
struct TYPE_4__ {int jj_offset; } ;
struct g_journal_softc {int sc_jstart; TYPE_1__ sc_active; TYPE_2__ sc_inactive; int sc_journal_offset; void* sc_journal_id; void* sc_journal_previous_id; void* sc_journal_next_id; } ;


 void* FUNC_0 () ;
 int FUNC_1 (struct g_journal_softc*) ;

__attribute__((used)) static void
FUNC_2(struct g_journal_softc *VAR_0)
{

 VAR_0->sc_journal_id = FUNC_0();
 VAR_0->sc_journal_next_id = FUNC_0();
 VAR_0->sc_journal_previous_id = VAR_0->sc_journal_id;
 VAR_0->sc_journal_offset = VAR_0->sc_jstart;
 VAR_0->sc_inactive.jj_offset = VAR_0->sc_jstart;
 FUNC_1(VAR_0);
 VAR_0->sc_active.jj_offset = VAR_0->sc_jstart;
}
