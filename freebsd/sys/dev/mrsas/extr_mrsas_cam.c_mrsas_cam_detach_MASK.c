
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrsas_softc {int sim_lock; scalar_t__ sim_1; scalar_t__ path_1; scalar_t__ sim_0; scalar_t__ path_0; int * ev_tq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;

void
FUNC_7(struct mrsas_softc *VAR_2)
{
 if (VAR_2->ev_tq != ((void*)0))
  FUNC_4(VAR_2->ev_tq);
 FUNC_2(&VAR_2->sim_lock);
 if (VAR_2->path_0)
  FUNC_6(VAR_2->path_0);
 if (VAR_2->sim_0) {
  FUNC_5(FUNC_1(VAR_2->sim_0));
  FUNC_0(VAR_2->sim_0, VAR_0);
 }
 if (VAR_2->path_1)
  FUNC_6(VAR_2->path_1);
 if (VAR_2->sim_1) {
  FUNC_5(FUNC_1(VAR_2->sim_1));
  FUNC_0(VAR_2->sim_1, VAR_1);
 }
 FUNC_3(&VAR_2->sim_lock);
}
