
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_softc {int pending_lun_queue; int ctl_lock; } ;
struct ctl_be_lun {int dummy; } ;


 int FUNC_0 (int *,struct ctl_be_lun*,int ) ;
 struct ctl_softc* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct ctl_be_lun *VAR_2)
{
 struct ctl_softc *VAR_3 = VAR_0;

 FUNC_1(&VAR_3->ctl_lock);
 FUNC_0(&VAR_3->pending_lun_queue, VAR_2, VAR_1);
 FUNC_2(&VAR_3->ctl_lock);
 FUNC_3(&VAR_3->pending_lun_queue);

 return (0);
}
