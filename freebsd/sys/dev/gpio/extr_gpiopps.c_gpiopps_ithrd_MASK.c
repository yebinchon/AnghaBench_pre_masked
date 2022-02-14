
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pps_softc {int pps_mtx; int pps_state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct pps_softc *VAR_2 = VAR_1;
 FUNC_0(&VAR_2->pps_mtx);
 FUNC_2(&VAR_2->pps_state, VAR_0);
 FUNC_1(&VAR_2->pps_mtx);
}
