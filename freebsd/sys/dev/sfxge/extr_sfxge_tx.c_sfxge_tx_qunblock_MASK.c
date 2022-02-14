
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_txq {size_t evq_index; scalar_t__ init_state; unsigned int added; unsigned int completed; scalar_t__ blocked; int entries; struct sfxge_softc* sc; } ;
struct sfxge_softc {struct sfxge_evq** evq; } ;
struct sfxge_evq {int dummy; } ;


 int FUNC_0 (struct sfxge_evq*) ;
 int FUNC_1 (struct sfxge_txq*) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct sfxge_txq*) ;
 int FUNC_5 (struct sfxge_txq*) ;

__attribute__((used)) static void
FUNC_6(struct sfxge_txq *VAR_1)
{
 struct sfxge_softc *VAR_2;
 struct sfxge_evq *VAR_3;

 VAR_2 = VAR_1->sc;
 VAR_3 = VAR_2->evq[VAR_1->evq_index];

 FUNC_0(VAR_3);

 if (FUNC_3(VAR_1->init_state != VAR_0))
  return;

 FUNC_1(VAR_1);

 if (VAR_1->blocked) {
  unsigned int VAR_4;

  VAR_4 = VAR_1->added - VAR_1->completed;
  if (VAR_4 <= FUNC_2(VAR_1->entries)) {

   FUNC_5(VAR_1);
   VAR_1->blocked = 0;
  }
 }

 FUNC_4(VAR_1);

}
