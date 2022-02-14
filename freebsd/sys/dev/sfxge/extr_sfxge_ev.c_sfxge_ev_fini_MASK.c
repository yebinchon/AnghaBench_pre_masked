
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_intr {scalar_t__ state; } ;
struct sfxge_softc {int evq_count; scalar_t__ ev_moderation; struct sfxge_intr intr; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct sfxge_softc*,int) ;

void
FUNC_2(struct sfxge_softc *VAR_1)
{
 struct sfxge_intr *VAR_2;
 int VAR_3;

 VAR_2 = &VAR_1->intr;

 FUNC_0(VAR_2->state == VAR_0,
     ("intr->state != SFXGE_INTR_INITIALIZED"));

 VAR_1->ev_moderation = 0;


 VAR_3 = VAR_1->evq_count;
 while (--VAR_3 >= 0)
  FUNC_1(VAR_1, VAR_3);

 VAR_1->evq_count = 0;
}
