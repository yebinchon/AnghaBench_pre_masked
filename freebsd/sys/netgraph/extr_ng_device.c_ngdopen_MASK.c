
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct cdev {int si_drv1; } ;
typedef TYPE_1__* priv_p ;
struct TYPE_2__ {int ngd_mtx; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_2, int VAR_3, int VAR_4, struct thread *VAR_5)
{
 priv_p VAR_6 = (priv_p )VAR_2->si_drv1;

 VAR_0;

 FUNC_0(&VAR_6->ngd_mtx);
 VAR_6->flags |= VAR_1;
 FUNC_1(&VAR_6->ngd_mtx);

 return(0);
}
