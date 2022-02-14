
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buftarg {int bt_delwrite_lock; int bt_delwrite_queue; } ;
struct xfs_buf {int b_flags; long b_queuetime; int b_list; struct xfs_buftarg* b_target; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;

void
FUNC_5(
 struct xfs_buf *VAR_4)
{
 struct xfs_buftarg *VAR_5 = VAR_4->b_target;
 long VAR_6 = VAR_3 * FUNC_2(10) + 1;

 FUNC_0(VAR_4->b_flags & VAR_0);
 FUNC_0(VAR_4->b_flags & VAR_1);





 if (VAR_4->b_queuetime < VAR_2 - VAR_6)
  return;
 VAR_4->b_queuetime = VAR_2 - VAR_6;
 FUNC_3(&VAR_5->bt_delwrite_lock);
 FUNC_1(&VAR_4->b_list, &VAR_5->bt_delwrite_queue);
 FUNC_4(&VAR_5->bt_delwrite_lock);
}
