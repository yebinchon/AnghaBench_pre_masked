
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xfs_trans {int dummy; } ;
struct TYPE_6__ {int sb_blocklog; } ;
struct xfs_mount {TYPE_2__ m_sb; } ;
struct xfs_inode {int dummy; } ;
struct xfs_ifork {TYPE_1__* if_broot; } ;
struct TYPE_7__ {int whichfork; scalar_t__ flags; scalar_t__ allocated; int * flist; int firstblock; struct xfs_inode* ip; int forksize; } ;
struct TYPE_8__ {TYPE_3__ b; } ;
struct xfs_btree_cur {int bc_flags; TYPE_4__ bc_private; int * bc_ops; int bc_blocklog; int bc_btnum; scalar_t__ bc_nlevels; struct xfs_mount* bc_mp; struct xfs_trans* bc_tp; } ;
struct TYPE_5__ {int bb_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct xfs_ifork* FUNC_0 (struct xfs_inode*,int) ;
 int FUNC_1 (struct xfs_inode*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 struct xfs_btree_cur* FUNC_3 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

struct xfs_btree_cur *
FUNC_4(
 struct xfs_mount *VAR_7,
 struct xfs_trans *VAR_8,
 struct xfs_inode *VAR_9,
 int VAR_10)
{
 struct xfs_ifork *VAR_11 = FUNC_0(VAR_9, VAR_10);
 struct xfs_btree_cur *VAR_12;

 VAR_12 = FUNC_3(VAR_6, VAR_0);

 VAR_12->bc_tp = VAR_8;
 VAR_12->bc_mp = VAR_7;
 VAR_12->bc_nlevels = FUNC_2(VAR_11->if_broot->bb_level) + 1;
 VAR_12->bc_btnum = VAR_2;
 VAR_12->bc_blocklog = VAR_7->m_sb.sb_blocklog;

 VAR_12->bc_ops = &VAR_5;
 VAR_12->bc_flags = VAR_3 | VAR_4;

 VAR_12->bc_private.b.forksize = FUNC_1(VAR_9, VAR_10);
 VAR_12->bc_private.b.ip = VAR_9;
 VAR_12->bc_private.b.firstblock = VAR_1;
 VAR_12->bc_private.b.flist = ((void*)0);
 VAR_12->bc_private.b.allocated = 0;
 VAR_12->bc_private.b.flags = 0;
 VAR_12->bc_private.b.whichfork = VAR_10;

 return VAR_12;
}
