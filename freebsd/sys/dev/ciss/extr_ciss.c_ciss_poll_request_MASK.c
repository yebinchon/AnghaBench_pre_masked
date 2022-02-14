
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ciss_softc {scalar_t__ ciss_perf; } ;
struct ciss_request {int cr_flags; struct ciss_softc* cr_sc; } ;
typedef int cr_qhead_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ciss_softc*,int *) ;
 int FUNC_3 (struct ciss_softc*,int *) ;
 int FUNC_4 (struct ciss_softc*,int *) ;
 int FUNC_5 (struct ciss_request*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct ciss_request *VAR_2, int VAR_3)
{
    cr_qhead_t VAR_4;
    struct ciss_softc *VAR_5;
    int VAR_6;

    FUNC_6(2);

    FUNC_1(&VAR_4);
    VAR_5 = VAR_2->cr_sc;
    VAR_2->cr_flags |= VAR_0;
    if ((VAR_6 = FUNC_5(VAR_2)) != 0)
 return(VAR_6);

    do {
 if (VAR_5->ciss_perf)
     FUNC_4(VAR_5, &VAR_4);
 else
     FUNC_3(VAR_5, &VAR_4);
 FUNC_2(VAR_5, &VAR_4);
 if (!(VAR_2->cr_flags & VAR_0))
     return(0);
 FUNC_0(1000);
    } while (VAR_3-- >= 0);
    return(VAR_1);
}
