
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int li_flags; struct xfs_ail* li_ailp; } ;
typedef TYPE_3__ xfs_log_item_t ;
struct TYPE_6__ {int di_mode; } ;
struct xfs_inode {int i_flags_lock; scalar_t__ i_ino; int i_flags; int i_flush; int i_pincount; int i_iocount; TYPE_2__* i_itemp; int i_mount; scalar_t__ i_afp; TYPE_1__ i_d; } ;
struct xfs_ail {int xa_lock; } ;
struct rcu_head {int dummy; } ;
struct TYPE_9__ {int i_dentry; } ;
struct TYPE_7__ {TYPE_3__ ili_item; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;


 int VAR_1 ;

 TYPE_5__* FUNC_1 (struct xfs_inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct rcu_head*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct xfs_inode*,int ) ;
 int VAR_6 ;
 int FUNC_10 (struct xfs_inode*) ;
 int FUNC_11 (struct xfs_ail*,TYPE_3__*,int ) ;

void
FUNC_12(
 struct xfs_inode *VAR_7)
{
 switch (VAR_7->i_d.di_mode & VAR_1) {
 case 128:
 case 130:
 case 129:
  FUNC_9(VAR_7, VAR_3);
  break;
 }

 if (VAR_7->i_afp)
  FUNC_9(VAR_7, VAR_2);

 if (VAR_7->i_itemp) {





  xfs_log_item_t *VAR_8 = &VAR_7->i_itemp->ili_item;
  struct xfs_ail *VAR_9 = VAR_8->li_ailp;

  FUNC_0(((VAR_8->li_flags & VAR_5) == 0) ||
           FUNC_2(VAR_7->i_mount));
  if (VAR_8->li_flags & VAR_5) {
   FUNC_7(&VAR_9->xa_lock);
   if (VAR_8->li_flags & VAR_5)
    FUNC_11(VAR_9, VAR_8,
           VAR_0);
   else
    FUNC_8(&VAR_9->xa_lock);
  }
  FUNC_10(VAR_7);
  VAR_7->i_itemp = ((void*)0);
 }


 FUNC_0(FUNC_3(&VAR_7->i_iocount) == 0);
 FUNC_0(FUNC_3(&VAR_7->i_pincount) == 0);
 FUNC_0(!FUNC_6(&VAR_7->i_flags_lock));
 FUNC_0(FUNC_5(&VAR_7->i_flush));







 FUNC_7(&VAR_7->i_flags_lock);
 VAR_7->i_flags = VAR_4;
 VAR_7->i_ino = 0;
 FUNC_8(&VAR_7->i_flags_lock);
 FUNC_4((struct rcu_head *)&FUNC_1(VAR_7)->i_dentry, VAR_6);
}
