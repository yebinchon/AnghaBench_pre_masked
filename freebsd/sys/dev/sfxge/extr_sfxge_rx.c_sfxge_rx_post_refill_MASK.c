
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct sfxge_softc {struct sfxge_evq** evq; } ;
struct sfxge_rxq {unsigned int index; scalar_t__ init_state; struct sfxge_softc* sc; } ;
struct sfxge_evq {scalar_t__ init_state; int common; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct sfxge_rxq*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_3)
{
 struct sfxge_rxq *VAR_4 = VAR_3;
 struct sfxge_softc *VAR_5;
 unsigned int VAR_6;
 struct sfxge_evq *VAR_7;
 uint16_t VAR_8;

 VAR_5 = VAR_4->sc;
 VAR_6 = VAR_4->index;
 VAR_7 = VAR_5->evq[VAR_6];
 VAR_8 = FUNC_2(VAR_2, VAR_4);


 FUNC_0(VAR_7->init_state == VAR_0,
     ("evq not started"));
 FUNC_0(VAR_4->init_state == VAR_1,
     ("rxq not started"));
 FUNC_1(VAR_7->common, VAR_8);
}
