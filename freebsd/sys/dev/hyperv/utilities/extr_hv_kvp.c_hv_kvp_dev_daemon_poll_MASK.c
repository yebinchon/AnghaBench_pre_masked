
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct cdev {scalar_t__ si_drv1; } ;
struct TYPE_2__ {int daemon_busy; int pending_mutex; int hv_kvp_selinfo; } ;
typedef TYPE_1__ hv_kvp_sc ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_1, int VAR_2, struct thread *VAR_3)
{
 int VAR_4 = 0;
 hv_kvp_sc *VAR_5 = (hv_kvp_sc*)VAR_1->si_drv1;

 FUNC_0(&VAR_5->pending_mutex);






 if (VAR_5->daemon_busy == 1)
  VAR_4 = VAR_0;
 else
  FUNC_2(VAR_3, &VAR_5->hv_kvp_selinfo);

 FUNC_1(&VAR_5->pending_mutex);

 return (VAR_4);
}
