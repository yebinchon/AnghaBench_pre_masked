
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zv_flags; int zv_total_opens; int zv_sync_cnt; } ;
typedef TYPE_1__ zvol_state_t ;
struct thread {int dummy; } ;
struct cdev {TYPE_1__* si_drv2; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_4, int VAR_5, int VAR_6, struct thread *VAR_7)
{
 zvol_state_t *VAR_8 = VAR_4->si_drv2;

 FUNC_1(&VAR_3);
 if (VAR_8->zv_flags & VAR_2) {
  FUNC_0(VAR_8->zv_total_opens == 1);
  VAR_8->zv_flags &= ~VAR_2;
 }





 FUNC_0(VAR_8->zv_total_opens != 0);




 VAR_8->zv_total_opens--;
 if (VAR_5 & (VAR_1 | VAR_0))
  VAR_8->zv_sync_cnt--;

 if (VAR_8->zv_total_opens == 0)
  FUNC_3(VAR_8);

 FUNC_2(&VAR_3);
 return (0);
}
