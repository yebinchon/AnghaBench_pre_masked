
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xfs_agnumber_t ;
struct xfs_trans {int dummy; } ;
struct TYPE_4__ {int sb_blocklog; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
struct xfs_buf {int dummy; } ;
struct TYPE_5__ {int agno; struct xfs_buf* agbp; } ;
struct TYPE_6__ {TYPE_2__ a; } ;
struct xfs_btree_cur {TYPE_3__ bc_private; int * bc_ops; int bc_blocklog; int bc_btnum; int bc_nlevels; struct xfs_mount* bc_mp; struct xfs_trans* bc_tp; } ;
struct xfs_agi {int agi_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xfs_agi* FUNC_0 (struct xfs_buf*) ;
 int FUNC_1 (int ) ;
 struct xfs_btree_cur* FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

struct xfs_btree_cur *
FUNC_3(
 struct xfs_mount *VAR_4,
 struct xfs_trans *VAR_5,
 struct xfs_buf *VAR_6,
 xfs_agnumber_t VAR_7)
{
 struct xfs_agi *VAR_8 = FUNC_0(VAR_6);
 struct xfs_btree_cur *VAR_9;

 VAR_9 = FUNC_2(VAR_2, VAR_0);

 VAR_9->bc_tp = VAR_5;
 VAR_9->bc_mp = VAR_4;
 VAR_9->bc_nlevels = FUNC_1(VAR_8->agi_level);
 VAR_9->bc_btnum = VAR_1;
 VAR_9->bc_blocklog = VAR_4->m_sb.sb_blocklog;

 VAR_9->bc_ops = &VAR_3;

 VAR_9->bc_private.a.agbp = VAR_6;
 VAR_9->bc_private.a.agno = VAR_7;

 return VAR_9;
}
