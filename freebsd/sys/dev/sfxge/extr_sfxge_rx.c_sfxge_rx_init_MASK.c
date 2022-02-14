
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_intr {int n_alloc; scalar_t__ state; } ;
struct sfxge_softc {int rxq_count; struct sfxge_intr intr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct sfxge_softc*,int) ;
 int FUNC_5 (struct sfxge_softc*,int) ;
 int FUNC_6 (struct sfxge_softc*) ;
 int VAR_6 ;

int
FUNC_7(struct sfxge_softc *VAR_7)
{
 struct sfxge_intr *VAR_8;
 int VAR_9;
 int VAR_10;
 VAR_8 = &VAR_7->intr;

 VAR_7->rxq_count = VAR_8->n_alloc;

 FUNC_1(VAR_8->state == VAR_2,
     ("intr->state != SFXGE_INTR_INITIALIZED"));


 for (VAR_9 = 0; VAR_9 < VAR_7->rxq_count; VAR_9++) {
  if ((VAR_10 = FUNC_5(VAR_7, VAR_9)) != 0)
   goto fail;
 }

 FUNC_6(VAR_7);

 return (0);

fail:

 while (--VAR_9 >= 0)
  FUNC_4(VAR_7, VAR_9);

 VAR_7->rxq_count = 0;




 return (VAR_10);
}
