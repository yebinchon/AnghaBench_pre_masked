
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef int uint16_t ;
struct sfxge_txq {scalar_t__ init_state; size_t evq_index; } ;
struct sfxge_softc {struct sfxge_evq** evq; struct sfxge_txq** txq; } ;
struct sfxge_evq {size_t index; scalar_t__ init_state; int common; struct sfxge_softc* sc; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct sfxge_evq*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct sfxge_txq*) ;
 int FUNC_4 (struct sfxge_txq*) ;

__attribute__((used)) static boolean_t
FUNC_5(void *VAR_4, uint32_t VAR_5)
{
 struct sfxge_evq *VAR_6;
 struct sfxge_softc *VAR_7;
 struct sfxge_txq *VAR_8;
 uint16_t VAR_9;

 VAR_6 = (struct sfxge_evq *)VAR_4;
 FUNC_1(VAR_6);

 VAR_7 = VAR_6->sc;
 VAR_8 = VAR_7->txq[VAR_5];

 FUNC_0(VAR_8 != ((void*)0), ("txq == NULL"));
 FUNC_0(VAR_8->init_state == VAR_3,
     ("txq not initialized"));

 if (VAR_8->evq_index == VAR_6->index) {
  FUNC_4(VAR_8);
  return (VAR_0);
 }


 VAR_6 = VAR_7->evq[VAR_8->evq_index];
 VAR_9 = FUNC_3(VAR_2, VAR_8);

 FUNC_0(VAR_6->init_state == VAR_1,
     ("evq not started"));
 FUNC_2(VAR_6->common, VAR_9);

 return (VAR_0);
}
