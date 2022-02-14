
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ciss_softc {int ciss_mtx; int * ciss_notify_thread; int ciss_notify; int ciss_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,int *,int ,char*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct ciss_softc *VAR_2)
{

    if (VAR_2->ciss_notify_thread == ((void*)0))
 return;

    VAR_2->ciss_flags |= VAR_0;
    FUNC_1(&VAR_2->ciss_notify);
    FUNC_0(&VAR_2->ciss_notify_thread, &VAR_2->ciss_mtx, VAR_1, "thtrm", 0);
}
