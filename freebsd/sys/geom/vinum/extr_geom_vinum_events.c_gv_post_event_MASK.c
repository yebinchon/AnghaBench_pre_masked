
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_softc {int equeue_mtx; int equeue; } ;
struct gv_event {int type; void* arg4; void* arg3; void* arg2; void* arg1; } ;
typedef void* intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct gv_event*,int ) ;
 int VAR_2 ;
 struct gv_event* FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct gv_softc*) ;

void
FUNC_5(struct gv_softc *VAR_3, int VAR_4, void *VAR_5, void *VAR_6,
    intmax_t VAR_7, intmax_t VAR_8)
{
 struct gv_event *VAR_9;

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_0 | VAR_1);
 VAR_9->type = VAR_4;
 VAR_9->arg1 = VAR_5;
 VAR_9->arg2 = VAR_6;
 VAR_9->arg3 = VAR_7;
 VAR_9->arg4 = VAR_8;

 FUNC_2(&VAR_3->equeue_mtx);
 FUNC_0(&VAR_3->equeue, VAR_9, VAR_2);
 FUNC_4(VAR_3);
 FUNC_3(&VAR_3->equeue_mtx);
}
