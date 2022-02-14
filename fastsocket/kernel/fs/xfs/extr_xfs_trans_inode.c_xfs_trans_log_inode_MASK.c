
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
struct TYPE_13__ {TYPE_3__* i_itemp; TYPE_4__* i_transp; } ;
typedef TYPE_5__ xfs_inode_t ;
typedef int uint ;
struct TYPE_9__ {TYPE_2__* li_desc; } ;
struct TYPE_11__ {int ili_fields; int ili_last_fields; TYPE_1__ ili_item; } ;
struct TYPE_10__ {int lid_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*,int ) ;

void
FUNC_2(
 xfs_trans_t *VAR_3,
 xfs_inode_t *VAR_4,
 uint VAR_5)
{
 FUNC_0(VAR_4->i_transp == VAR_3);
 FUNC_0(VAR_4->i_itemp != ((void*)0));
 FUNC_0(FUNC_1(VAR_4, VAR_0));

 VAR_3->t_flags |= VAR_2;
 VAR_4->i_itemp->ili_item.li_desc->lid_flags |= VAR_1;
 VAR_5 |= VAR_4->i_itemp->ili_last_fields;
 VAR_4->i_itemp->ili_fields |= VAR_5;
}
