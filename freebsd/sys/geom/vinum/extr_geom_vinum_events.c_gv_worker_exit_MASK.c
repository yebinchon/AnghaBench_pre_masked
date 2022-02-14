
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_softc {int equeue_mtx; int worker; int equeue; } ;
struct gv_event {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct gv_event*,int ) ;
 int VAR_4 ;
 struct gv_event* FUNC_1 (int,int) ;
 int FUNC_2 (int ,int *,int ,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct gv_softc*) ;

void
FUNC_5(struct gv_softc *VAR_5)
{
 struct gv_event *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1 | VAR_2);
 VAR_6->type = VAR_0;

 FUNC_3(&VAR_5->equeue_mtx);
 FUNC_0(&VAR_5->equeue, VAR_6, VAR_4);
 FUNC_4(VAR_5);
 FUNC_2(VAR_5->worker, &VAR_5->equeue_mtx, VAR_3, "gv_wor", 0);
}
