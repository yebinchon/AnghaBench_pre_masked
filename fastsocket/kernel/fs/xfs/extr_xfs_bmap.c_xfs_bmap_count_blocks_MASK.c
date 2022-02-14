
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_16__ {scalar_t__ sb_agcount; scalar_t__ sb_agblocks; } ;
struct TYPE_17__ {TYPE_1__ m_sb; } ;
typedef TYPE_2__ xfs_mount_t ;
struct TYPE_18__ {TYPE_2__* i_mount; } ;
typedef TYPE_3__ xfs_inode_t ;
struct TYPE_19__ {int if_bytes; int if_broot_bytes; struct xfs_btree_block* if_broot; } ;
typedef TYPE_4__ xfs_ifork_t ;
typedef scalar_t__ xfs_fsblock_t ;
typedef int xfs_bmbt_rec_t ;
typedef int uint ;
struct xfs_btree_block {int bb_level; } ;
typedef int __be64 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_1 (TYPE_2__*,struct xfs_btree_block*,int,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int) ;
 TYPE_4__* FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (TYPE_4__*,int ,int,int*) ;
 scalar_t__ FUNC_12 (TYPE_2__*,int *,TYPE_4__*,scalar_t__,int,int*) ;

int
FUNC_13(
 xfs_trans_t *VAR_5,
 xfs_inode_t *VAR_6,
 int VAR_7,
 int *VAR_8)
{
 struct xfs_btree_block *VAR_9;
 xfs_fsblock_t VAR_10;
 xfs_ifork_t *VAR_11;
 int VAR_12;
 xfs_mount_t *VAR_13;
 __be64 *VAR_14;

 VAR_10 = VAR_2;
 VAR_13 = VAR_6->i_mount;
 VAR_11 = FUNC_7(VAR_6, VAR_7);
 if ( FUNC_6(VAR_6, VAR_7) == VAR_3 ) {
  FUNC_11(VAR_11, 0,
   VAR_11->if_bytes / (uint)sizeof(xfs_bmbt_rec_t),
   VAR_8);
  return 0;
 }




 VAR_9 = VAR_11->if_broot;
 VAR_12 = FUNC_8(VAR_9->bb_level);
 FUNC_0(VAR_12 > 0);
 VAR_14 = FUNC_1(VAR_13, VAR_9, 1, VAR_11->if_broot_bytes);
 VAR_10 = FUNC_9(*VAR_14);
 FUNC_0(VAR_10 != VAR_1);
 FUNC_0(FUNC_5(VAR_13, VAR_10) < VAR_13->m_sb.sb_agcount);
 FUNC_0(FUNC_4(VAR_13, VAR_10) < VAR_13->m_sb.sb_agblocks);

 if (FUNC_10(FUNC_12(VAR_13, VAR_5, VAR_11, VAR_10, VAR_12, VAR_8) < 0)) {
  FUNC_3("xfs_bmap_count_blocks(2)", VAR_4,
     VAR_13);
  return FUNC_2(VAR_0);
 }

 return 0;
}
