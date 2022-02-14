
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_intr {scalar_t__ state; } ;
struct sfxge_softc {int evq_count; int * enp; struct sfxge_intr intr; } ;
typedef int efx_nic_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sfxge_softc*,int) ;

void
FUNC_3(struct sfxge_softc *VAR_1)
{
 struct sfxge_intr *VAR_2;
 efx_nic_t *VAR_3;
 int VAR_4;

 VAR_2 = &VAR_1->intr;
 VAR_3 = VAR_1->enp;

 FUNC_0(VAR_2->state == VAR_0,
     ("Interrupts not started"));


 VAR_4 = VAR_1->evq_count;
 while (--VAR_4 >= 0)
  FUNC_2(VAR_1, VAR_4);


 FUNC_1(VAR_3);
}
