
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xfs_lsn_t ;
struct TYPE_3__ {scalar_t__ li_lsn; } ;
typedef TYPE_1__ xfs_log_item_t ;
struct xfs_ail {int xa_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (struct xfs_ail*) ;

xfs_lsn_t
FUNC_3(
 struct xfs_ail *VAR_0)
{
 xfs_lsn_t VAR_1;
 xfs_log_item_t *VAR_2;

 FUNC_0(&VAR_0->xa_lock);
 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 == ((void*)0)) {
  VAR_1 = (xfs_lsn_t)0;
 } else {
  VAR_1 = VAR_2->li_lsn;
 }
 FUNC_1(&VAR_0->xa_lock);

 return VAR_1;
}
