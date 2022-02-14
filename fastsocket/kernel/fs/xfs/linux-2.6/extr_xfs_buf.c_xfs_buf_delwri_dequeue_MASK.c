
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int b_flags; int b_list; TYPE_1__* b_target; } ;
typedef TYPE_2__ xfs_buf_t ;
typedef int spinlock_t ;
struct TYPE_6__ {int bt_delwrite_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;

void
FUNC_7(
 xfs_buf_t *VAR_3)
{
 spinlock_t *VAR_4 = &VAR_3->b_target->bt_delwrite_lock;
 int VAR_5 = 0;

 FUNC_3(VAR_4);
 if ((VAR_3->b_flags & VAR_0) && !FUNC_2(&VAR_3->b_list)) {
  FUNC_0(VAR_3->b_flags & VAR_2);
  FUNC_1(&VAR_3->b_list);
  VAR_5 = 1;
 }
 VAR_3->b_flags &= ~(VAR_0|VAR_2);
 FUNC_4(VAR_4);

 if (VAR_5)
  FUNC_6(VAR_3);

 FUNC_5(VAR_3, VAR_1);
}
