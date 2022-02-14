
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* i_itemp; } ;
typedef TYPE_1__ xfs_inode_t ;
struct TYPE_8__ {int li_flags; struct xfs_ail* li_ailp; } ;
struct TYPE_7__ {scalar_t__ ili_fields; scalar_t__ ili_last_fields; scalar_t__ ili_logged; TYPE_3__ ili_item; } ;
typedef TYPE_2__ xfs_inode_log_item_t ;
struct xfs_ail {int xa_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct xfs_ail*,TYPE_3__*,int ) ;

void
FUNC_4(
 xfs_inode_t *VAR_3,
 bool VAR_4)
{
 xfs_inode_log_item_t *VAR_5 = VAR_3->i_itemp;

 if (VAR_5) {
  struct xfs_ail *VAR_6 = VAR_5->ili_item.li_ailp;
  if (VAR_5->ili_item.li_flags & VAR_2) {
   FUNC_0(&VAR_6->xa_lock);
   if (VAR_5->ili_item.li_flags & VAR_2) {

    FUNC_3(VAR_6, &VAR_5->ili_item,
      VAR_4 ?
       VAR_1 :
       VAR_0);
   } else
    FUNC_1(&VAR_6->xa_lock);
  }
  VAR_5->ili_logged = 0;




  VAR_5->ili_last_fields = 0;




  VAR_5->ili_fields = 0;
 }



 FUNC_2(VAR_3);
}
