
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef int uint16_t ;
struct sfxge_softc {struct sfxge_evq** evq; struct sfxge_rxq** rxq; } ;
struct sfxge_rxq {unsigned int index; } ;
struct sfxge_evq {unsigned int index; scalar_t__ init_state; int common; struct sfxge_softc* sc; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct sfxge_evq*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sfxge_rxq*) ;
 int FUNC_4 (int ,struct sfxge_rxq*) ;

__attribute__((used)) static boolean_t
FUNC_5(void *VAR_3, uint32_t VAR_4)
{
 struct sfxge_evq *VAR_5;
 struct sfxge_softc *VAR_6;
 struct sfxge_rxq *VAR_7;
 unsigned int VAR_8;
 uint16_t VAR_9;

 VAR_5 = (struct sfxge_evq *)VAR_3;
 FUNC_1(VAR_5);

 VAR_6 = VAR_5->sc;
 VAR_7 = VAR_6->rxq[VAR_4];

 FUNC_0(VAR_7 != ((void*)0), ("rxq == NULL"));


 VAR_8 = VAR_7->index;
 if (VAR_8 == VAR_5->index) {
  FUNC_3(VAR_7);
  return (VAR_0);
 }

 VAR_5 = VAR_6->evq[VAR_8];
 VAR_9 = FUNC_4(VAR_2, VAR_7);

 FUNC_0(VAR_5->init_state == VAR_1,
     ("evq not started"));
 FUNC_2(VAR_5->common, VAR_9);

 return (VAR_0);
}
