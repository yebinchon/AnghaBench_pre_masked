
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int b_flags; int b_rbnode; int b_lru_ref; int b_hold; int b_lru; struct xfs_perag* b_pag; } ;
typedef TYPE_1__ xfs_buf_t ;
struct xfs_perag {int pag_buf_lock; int pag_buf_tree; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (struct xfs_perag*) ;

void
FUNC_13(
 xfs_buf_t *VAR_4)
{
 struct xfs_perag *VAR_5 = VAR_4->b_pag;

 FUNC_8(VAR_4, VAR_2);

 if (!VAR_5) {
  FUNC_0(FUNC_5(&VAR_4->b_lru));
  FUNC_0(FUNC_1(&VAR_4->b_rbnode));
  if (FUNC_3(&VAR_4->b_hold))
   FUNC_9(VAR_4);
  return;
 }

 FUNC_0(!FUNC_1(&VAR_4->b_rbnode));

 FUNC_0(FUNC_4(&VAR_4->b_hold) > 0);
 if (FUNC_2(&VAR_4->b_hold, &VAR_5->pag_buf_lock)) {
  if (!(VAR_4->b_flags & VAR_1) &&
      FUNC_4(&VAR_4->b_lru_ref)) {
   FUNC_10(VAR_4);
   FUNC_7(&VAR_5->pag_buf_lock);
  } else {
   FUNC_11(VAR_4);
   FUNC_0(!(VAR_4->b_flags & (VAR_0|VAR_3)));
   FUNC_6(&VAR_4->b_rbnode, &VAR_5->pag_buf_tree);
   FUNC_7(&VAR_5->pag_buf_lock);
   FUNC_12(VAR_5);
   FUNC_9(VAR_4);
  }
 }
}
