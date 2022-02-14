
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int t_flags; } ;
typedef TYPE_4__ xfs_trans_t ;
struct TYPE_10__ {TYPE_1__* li_desc; } ;
struct TYPE_11__ {TYPE_2__ qli_item; } ;
struct TYPE_13__ {TYPE_3__ q_logitem; TYPE_4__* q_transp; } ;
typedef TYPE_5__ xfs_dquot_t ;
struct TYPE_9__ {int lid_flags; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_2(
 xfs_trans_t *VAR_2,
 xfs_dquot_t *VAR_3)
{
 FUNC_0(VAR_3->q_transp == VAR_2);
 FUNC_0(FUNC_1(VAR_3));

 VAR_2->t_flags |= VAR_1;
 VAR_3->q_logitem.qli_item.li_desc->lid_flags |= VAR_0;
}
