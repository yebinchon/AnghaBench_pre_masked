
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buftarg {int bt_lru_lock; int bt_lru_nr; } ;
struct xfs_buf {int b_lru_flags; int b_hold; int b_lru; struct xfs_buftarg* b_target; int b_lru_ref; int b_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(
 struct xfs_buf *VAR_2)
{
 VAR_2->b_flags |= VAR_0;
 FUNC_3(&(VAR_2)->b_lru_ref, 0);
 if (!FUNC_5(&VAR_2->b_lru)) {
  struct xfs_buftarg *VAR_3 = VAR_2->b_target;

  FUNC_6(&VAR_3->bt_lru_lock);
  if (!FUNC_5(&VAR_2->b_lru) &&
      !(VAR_2->b_lru_flags & VAR_1)) {
   FUNC_4(&VAR_2->b_lru);
   VAR_3->bt_lru_nr--;
   FUNC_1(&VAR_2->b_hold);
  }
  FUNC_7(&VAR_3->bt_lru_lock);
 }
 FUNC_0(FUNC_2(&VAR_2->b_hold) >= 1);
}
