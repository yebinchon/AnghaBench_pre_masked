
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_intr {scalar_t__ state; } ;
struct sfxge_softc {int enp; struct sfxge_intr intr; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sfxge_softc*) ;

void
FUNC_4(struct sfxge_softc *VAR_2)
{
 struct sfxge_intr *VAR_3;

 VAR_3 = &VAR_2->intr;

 FUNC_0(VAR_3->state == VAR_1,
     ("Interrupts not started"));

 VAR_3->state = VAR_0;


 FUNC_1(VAR_2->enp);


 FUNC_3(VAR_2);


 FUNC_2(VAR_2->enp);
}
