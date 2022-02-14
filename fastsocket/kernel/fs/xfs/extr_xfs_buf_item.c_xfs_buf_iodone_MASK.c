
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xfs_log_item {struct xfs_ail* li_ailp; } ;
struct xfs_buf {int dummy; } ;
struct xfs_ail {int xa_lock; } ;
struct TYPE_3__ {struct xfs_buf* bli_buf; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct xfs_log_item*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct xfs_buf*) ;
 int FUNC_5 (struct xfs_ail*,struct xfs_log_item*,int ) ;

void
FUNC_6(
 struct xfs_buf *VAR_1,
 struct xfs_log_item *VAR_2)
{
 struct xfs_ail *VAR_3 = VAR_2->li_ailp;

 FUNC_0(FUNC_1(VAR_2)->bli_buf == VAR_1);

 FUNC_4(VAR_1);
 FUNC_2(&VAR_3->xa_lock);
 FUNC_5(VAR_3, VAR_2, VAR_0);
 FUNC_3(FUNC_1(VAR_2));
}
