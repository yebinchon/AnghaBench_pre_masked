
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_5__ {int qli_item; TYPE_2__* qli_dquot; } ;
struct TYPE_6__ {int * q_transp; TYPE_1__ q_logitem; } ;
typedef TYPE_2__ xfs_dquot_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *) ;

void
FUNC_3(
 xfs_trans_t *VAR_0,
 xfs_dquot_t *VAR_1)
{
 FUNC_0(VAR_1->q_transp != VAR_0);
 FUNC_0(FUNC_1(VAR_1));
 FUNC_0(VAR_1->q_logitem.qli_dquot == VAR_1);




 FUNC_2(VAR_0, &VAR_1->q_logitem.qli_item);





 VAR_1->q_transp = VAR_0;
}
