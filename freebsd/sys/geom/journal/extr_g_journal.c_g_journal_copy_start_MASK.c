
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_journal_softc {int sc_journal_copying; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct g_journal_softc*) ;
 int FUNC_2 (struct g_journal_softc*) ;

__attribute__((used)) static void
FUNC_3(struct g_journal_softc *VAR_0)
{






 if (!VAR_0->sc_journal_copying) {
  VAR_0->sc_journal_copying = 1;
  FUNC_0(1, "Starting copy of journal.");
  FUNC_2(VAR_0);
 }
 FUNC_1(VAR_0);
}
