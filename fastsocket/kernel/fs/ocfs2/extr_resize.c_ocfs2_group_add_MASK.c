
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct ocfs2_super {int s_clustersize_bits; int sb; } ;
struct ocfs2_new_group_input {size_t chain; int clusters; int frees; scalar_t__ group; } ;
struct ocfs2_group_desc {int bg_next_group; } ;
struct TYPE_6__ {int i_used; int i_total; } ;
struct TYPE_7__ {TYPE_2__ bitmap1; } ;
struct ocfs2_chain_list {int cl_next_free_rec; struct ocfs2_chain_rec* cl_recs; int cl_bpc; int cl_cpg; } ;
struct TYPE_5__ {struct ocfs2_chain_list i_chain; } ;
struct ocfs2_dinode {int i_size; int i_clusters; TYPE_3__ id1; TYPE_1__ id2; } ;
struct ocfs2_chain_rec {int c_free; int c_total; int c_blkno; } ;
struct inode {int i_mutex; int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_8__ {int ip_lock; int ip_clusters; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_2 (struct inode*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct ocfs2_super* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct inode*,int ) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct ocfs2_chain_rec*,int ,int) ;
 int FUNC_16 (int ,char*,...) ;
 int FUNC_17 () ;
 int FUNC_18 (int) ;
 int FUNC_19 () ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct ocfs2_super*,int *) ;
 struct inode* FUNC_23 (struct ocfs2_super*,int ,int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (struct inode*,struct buffer_head**,int) ;
 int FUNC_26 (struct inode*,int) ;
 scalar_t__ FUNC_27 (struct ocfs2_super*) ;
 scalar_t__ FUNC_28 (struct ocfs2_super*) ;
 int FUNC_29 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_30 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_31 (int *,struct buffer_head*) ;
 int FUNC_32 (struct ocfs2_super*,scalar_t__,int,struct buffer_head**) ;
 int FUNC_33 (int ,struct buffer_head*) ;
 int * FUNC_34 (struct ocfs2_super*,int ) ;
 int FUNC_35 (struct inode*,int) ;
 int FUNC_36 (struct inode*,struct ocfs2_dinode*,struct ocfs2_new_group_input*,struct buffer_head*) ;
 int FUNC_37 (int *) ;
 int FUNC_38 (int *) ;

int FUNC_39(struct inode *VAR_7, struct ocfs2_new_group_input *VAR_8)
{
 int VAR_9;
 handle_t *VAR_10;
 struct buffer_head *VAR_11 = ((void*)0);
 struct inode *VAR_12 = ((void*)0);
 struct ocfs2_dinode *VAR_13 = ((void*)0);
 struct ocfs2_super *VAR_14 = FUNC_3(VAR_7->i_sb);
 struct buffer_head *VAR_15 = ((void*)0);
 struct ocfs2_group_desc *VAR_16 = ((void*)0);
 struct ocfs2_chain_list *VAR_17;
 struct ocfs2_chain_rec *VAR_18;
 u16 VAR_19;

 FUNC_17();

 if (FUNC_27(VAR_14) || FUNC_28(VAR_14))
  return -VAR_1;

 VAR_12 = FUNC_23(VAR_14,
          VAR_2,
          VAR_5);
 if (!VAR_12) {
  VAR_9 = -VAR_0;
  FUNC_18(VAR_9);
  goto out;
 }

 FUNC_20(&VAR_12->i_mutex);

 VAR_9 = FUNC_25(VAR_12, &VAR_11, 1);
 if (VAR_9 < 0) {
  FUNC_18(VAR_9);
  goto out_mutex;
 }

 VAR_13 = (struct ocfs2_dinode *)VAR_11->b_data;

 if (FUNC_10(VAR_13->id2.i_chain.cl_cpg) !=
     FUNC_24(VAR_14->sb) * 8) {
  FUNC_16(VAR_3, "The disk is too old and small."
       " Force to do offline resize.");
  VAR_9 = -VAR_0;
  goto out_unlock;
 }

 VAR_9 = FUNC_32(VAR_14, VAR_8->group, 1, &VAR_15);
 if (VAR_9 < 0) {
  FUNC_16(VAR_3, "Can't read the group descriptor # %llu "
       "from the device.", (unsigned long long)VAR_8->group);
  goto out_unlock;
 }

 FUNC_33(FUNC_0(VAR_7), VAR_15);

 VAR_9 = FUNC_36(VAR_12, VAR_13, VAR_8, VAR_15);
 if (VAR_9) {
  FUNC_18(VAR_9);
  goto out_unlock;
 }

 FUNC_16(0, "Add a new group  %llu in chain = %u, length = %u\n",
      (unsigned long long)VAR_8->group, VAR_8->chain, VAR_8->clusters);

 VAR_10 = FUNC_34(VAR_14, VAR_4);
 if (FUNC_1(VAR_10)) {
  FUNC_18(FUNC_4(VAR_10));
  VAR_9 = -VAR_0;
  goto out_unlock;
 }

 VAR_19 = FUNC_10(VAR_13->id2.i_chain.cl_bpc);
 VAR_17 = &VAR_13->id2.i_chain;
 VAR_18 = &VAR_17->cl_recs[VAR_8->chain];

 VAR_9 = FUNC_30(VAR_10, FUNC_0(VAR_12),
          VAR_15, VAR_6);
 if (VAR_9 < 0) {
  FUNC_18(VAR_9);
  goto out_commit;
 }

 VAR_16 = (struct ocfs2_group_desc *)VAR_15->b_data;
 VAR_16->bg_next_group = VAR_18->c_blkno;

 VAR_9 = FUNC_31(VAR_10, VAR_15);
 if (VAR_9 < 0) {
  FUNC_18(VAR_9);
  goto out_commit;
 }

 VAR_9 = FUNC_29(VAR_10, FUNC_0(VAR_12),
          VAR_11, VAR_6);
 if (VAR_9 < 0) {
  FUNC_18(VAR_9);
  goto out_commit;
 }

 if (VAR_8->chain == FUNC_10(VAR_17->cl_next_free_rec)) {
  FUNC_9(&VAR_17->cl_next_free_rec, 1);
  FUNC_15(VAR_18, 0, sizeof(struct ocfs2_chain_rec));
 }

 VAR_18->c_blkno = FUNC_6(VAR_8->group);
 FUNC_11(&VAR_18->c_total, VAR_8->clusters * VAR_19);
 FUNC_11(&VAR_18->c_free, VAR_8->frees * VAR_19);

 FUNC_11(&VAR_13->id1.bitmap1.i_total, VAR_8->clusters *VAR_19);
 FUNC_11(&VAR_13->id1.bitmap1.i_used,
       (VAR_8->clusters - VAR_8->frees) * VAR_19);
 FUNC_11(&VAR_13->i_clusters, VAR_8->clusters);

 FUNC_31(VAR_10, VAR_11);

 FUNC_37(&FUNC_2(VAR_12)->ip_lock);
 FUNC_2(VAR_12)->ip_clusters = FUNC_12(VAR_13->i_clusters);
 FUNC_13(&VAR_13->i_size, VAR_8->clusters << VAR_14->s_clustersize_bits);
 FUNC_38(&FUNC_2(VAR_12)->ip_lock);
 FUNC_7(VAR_12, FUNC_14(VAR_13->i_size));

 FUNC_35(VAR_12, VAR_8->clusters);

out_commit:
 FUNC_22(VAR_14, VAR_10);
out_unlock:
 FUNC_5(VAR_15);
 FUNC_5(VAR_11);

 FUNC_26(VAR_12, 1);

out_mutex:
 FUNC_21(&VAR_12->i_mutex);
 FUNC_8(VAR_12);

out:
 FUNC_19();
 return VAR_9;
}
