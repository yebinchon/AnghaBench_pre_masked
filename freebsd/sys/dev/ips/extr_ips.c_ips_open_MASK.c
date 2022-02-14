
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct cdev {TYPE_1__* si_drv1; } ;
struct TYPE_2__ {int queue_mtx; int state; } ;
typedef TYPE_1__ ips_softc_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{
 ips_softc_t *VAR_5 = VAR_1->si_drv1;
 FUNC_0(&VAR_5->queue_mtx);
 VAR_5->state |= VAR_0;
 FUNC_1(&VAR_5->queue_mtx);
        return 0;
}
