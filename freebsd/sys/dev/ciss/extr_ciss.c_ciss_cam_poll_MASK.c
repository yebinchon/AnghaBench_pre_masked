
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ciss_softc {scalar_t__ ciss_perf; } ;
struct cam_sim {int dummy; } ;
typedef int cr_qhead_t ;


 int FUNC_0 (int *) ;
 struct ciss_softc* FUNC_1 (struct cam_sim*) ;
 int FUNC_2 (struct ciss_softc*,int *) ;
 int FUNC_3 (struct ciss_softc*,int *) ;
 int FUNC_4 (struct ciss_softc*,int *) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct cam_sim *VAR_0)
{
    cr_qhead_t VAR_1;
    struct ciss_softc *VAR_2 = FUNC_1(VAR_0);

    FUNC_5(2);

    FUNC_0(&VAR_1);
    if (VAR_2->ciss_perf)
 FUNC_4(VAR_2, &VAR_1);
    else
 FUNC_3(VAR_2, &VAR_1);
    FUNC_2(VAR_2, &VAR_1);
}
