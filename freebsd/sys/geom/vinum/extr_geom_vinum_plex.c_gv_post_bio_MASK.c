
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_softc {int bqueue_mtx; int bqueue_down; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct bio*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct gv_softc*) ;

__attribute__((used)) static void
FUNC_5(struct gv_softc *VAR_0, struct bio *VAR_1)
{

 FUNC_0(VAR_0 != ((void*)0), ("NULL sc"));
 FUNC_0(VAR_1 != ((void*)0), ("NULL bp"));
 FUNC_2(&VAR_0->bqueue_mtx);
 FUNC_1(VAR_0->bqueue_down, VAR_1);
 FUNC_4(VAR_0);
 FUNC_3(&VAR_0->bqueue_mtx);
}
