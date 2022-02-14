
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ciss_softc {int ciss_mtx; } ;
typedef int cr_qhead_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ciss_softc*,int *) ;
 int FUNC_2 (struct ciss_softc*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0)
{
    cr_qhead_t VAR_1;
    struct ciss_softc *VAR_2 = (struct ciss_softc *)VAR_0;





    FUNC_0(&VAR_1);
    FUNC_2(VAR_2, &VAR_1);
    FUNC_3(&VAR_2->ciss_mtx);
    FUNC_1(VAR_2, &VAR_1);
    FUNC_4(&VAR_2->ciss_mtx);
}
