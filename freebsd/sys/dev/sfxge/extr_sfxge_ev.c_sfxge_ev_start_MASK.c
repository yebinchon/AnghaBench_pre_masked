
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_intr {scalar_t__ state; } ;
struct sfxge_softc {int evq_count; int enp; struct sfxge_intr intr; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sfxge_softc*,int) ;
 int FUNC_4 (struct sfxge_softc*,int) ;

int
FUNC_5(struct sfxge_softc *VAR_1)
{
 struct sfxge_intr *VAR_2;
 int VAR_3;
 int VAR_4;

 VAR_2 = &VAR_1->intr;

 FUNC_0(VAR_2->state == VAR_0,
     ("intr->state != SFXGE_INTR_STARTED"));


 if ((VAR_4 = FUNC_2(VAR_1->enp)) != 0)
  return (VAR_4);


 for (VAR_3 = 0; VAR_3 < VAR_1->evq_count; VAR_3++) {
  if ((VAR_4 = FUNC_3(VAR_1, VAR_3)) != 0)
   goto fail;
 }

 return (0);

fail:

 while (--VAR_3 >= 0)
  FUNC_4(VAR_1, VAR_3);


 FUNC_1(VAR_1->enp);

 return (VAR_4);
}
