
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_journal_softc {scalar_t__ sc_flush_count; int sc_delayed_count; int sc_delayed_queue; } ;
struct bio {int dummy; } ;


 struct bio* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct g_journal_softc*,struct bio*) ;

__attribute__((used)) static void
FUNC_2(struct g_journal_softc *VAR_1)
{
 struct bio *VAR_2;

 for (;;) {

  if (VAR_1->sc_flush_count >= VAR_0)
   return;
  VAR_2 = FUNC_0(&VAR_1->sc_delayed_queue);
  if (VAR_2 == ((void*)0))
   return;
  VAR_1->sc_delayed_count--;
  FUNC_1(VAR_1, VAR_2);
 }
}
