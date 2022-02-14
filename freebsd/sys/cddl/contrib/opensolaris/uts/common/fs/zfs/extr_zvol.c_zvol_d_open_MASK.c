
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ zv_total_opens; int zv_flags; int zv_sync_cnt; int zv_zilog; } ;
typedef TYPE_1__ zvol_state_t ;
struct thread {int dummy; } ;
struct cdev {TYPE_1__* si_drv2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_9 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_10, int VAR_11, int VAR_12, struct thread *VAR_13)
{
 zvol_state_t *VAR_14 = VAR_10->si_drv2;
 int VAR_15 = 0;

 FUNC_1(&VAR_9);
 if (VAR_14->zv_total_opens == 0)
  VAR_15 = FUNC_4(VAR_14);
 if (VAR_15) {
  FUNC_2(&VAR_9);
  return (VAR_15);
 }
 if ((VAR_11 & VAR_5) && (VAR_14->zv_flags & VAR_8)) {
  VAR_15 = FUNC_0(VAR_1);
  goto out;
 }
 if (VAR_14->zv_flags & VAR_6) {
  VAR_15 = FUNC_0(VAR_0);
  goto out;
 }
 VAR_14->zv_total_opens++;
 if (VAR_11 & (VAR_4 | VAR_2)) {
  VAR_14->zv_sync_cnt++;
  if (VAR_14->zv_sync_cnt == 1)
   FUNC_3(VAR_14->zv_zilog, VAR_7);
 }
 FUNC_2(&VAR_9);
 return (VAR_15);
out:
 if (VAR_14->zv_total_opens == 0)
  FUNC_5(VAR_14);
 FUNC_2(&VAR_9);
 return (VAR_15);
}
