
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_intr {scalar_t__ type; scalar_t__ state; } ;
struct sfxge_softc {struct sfxge_intr intr; int * enp; } ;
struct sfxge_evq {unsigned int index; struct sfxge_softc* sc; } ;
typedef int efx_nic_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned int,scalar_t__*) ;
 int FUNC_5 (struct sfxge_evq*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_2)
{
 struct sfxge_evq *VAR_3;
 struct sfxge_softc *VAR_4;
 efx_nic_t *VAR_5;
 struct sfxge_intr *VAR_6;
 unsigned int VAR_7;
 boolean_t VAR_8;

 VAR_3 = (struct sfxge_evq *)VAR_2;
 VAR_4 = VAR_3->sc;
 VAR_5 = VAR_4->enp;
 VAR_6 = &VAR_4->intr;
 VAR_7 = VAR_3->index;

 FUNC_0(VAR_6 != ((void*)0), ("intr == NULL"));
 FUNC_0(VAR_6->type == VAR_0,
     ("intr->type != EFX_INTR_MESSAGE"));

 if (FUNC_1(VAR_6->state != VAR_1))
  return;

 (void)FUNC_4(VAR_5, VAR_7, &VAR_8);

 if (VAR_8) {
  (void)FUNC_2(VAR_5);
  (void)FUNC_3(VAR_5);
  return;
 }

 (void)FUNC_5(VAR_3);
}
