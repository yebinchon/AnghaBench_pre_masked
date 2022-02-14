
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_softc {int equeue_mtx; int equeue; } ;
struct gv_event {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 struct gv_event* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct gv_event *
FUNC_4(struct gv_softc *VAR_0)
{
 struct gv_event *VAR_1;

 FUNC_0(VAR_0 != ((void*)0), ("NULL sc"));
 FUNC_2(&VAR_0->equeue_mtx);
 VAR_1 = FUNC_1(&VAR_0->equeue);
 FUNC_3(&VAR_0->equeue_mtx);
 return (VAR_1);
}
