
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u64 ;
typedef int u32 ;
struct super_block {unsigned int s_blocksize_bits; scalar_t__ s_blocksize; } ;
struct ocfs2_super {struct super_block* sb; } ;
struct ocfs2_inode_info {int ip_alloc_sem; int ip_lock; int ip_dyn_features; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_dir_lookup_result {struct buffer_head* dl_dx_root_bh; struct buffer_head* dl_dx_leaf_bh; int dl_hinfo; } ;
struct TYPE_4__ {int id_data; } ;
struct TYPE_5__ {TYPE_1__ i_data; } ;
struct ocfs2_dinode {int i_mtime_nsec; int i_ctime_nsec; void* i_mtime; void* i_ctime; void* i_size; int i_dyn_features; TYPE_2__ id2; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct TYPE_6__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct inode {struct super_block* i_sb; int i_blocks; TYPE_3__ i_ctime; TYPE_3__ i_mtime; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int *) ;
 struct ocfs2_inode_info* FUNC_3 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct ocfs2_super* FUNC_4 (struct super_block*) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,int ,int *,struct ocfs2_alloc_context*,struct buffer_head**,int,unsigned int*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 void* FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct buffer_head*) ;
 scalar_t__ FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*,scalar_t__) ;
 int FUNC_15 (struct buffer_head**) ;
 int FUNC_16 (scalar_t__,int ,scalar_t__) ;
 int FUNC_17 (scalar_t__,int ,scalar_t__) ;
 int FUNC_18 (int) ;
 scalar_t__ FUNC_19 (struct super_block*) ;
 int FUNC_20 (struct ocfs2_super*,int *,struct ocfs2_alloc_context*,int,int*,int*) ;
 int FUNC_21 (struct super_block*,unsigned int) ;
 unsigned int FUNC_22 (struct super_block*,int) ;
 int FUNC_23 (struct super_block*,int) ;
 int FUNC_24 (struct ocfs2_super*,int *) ;
 int FUNC_25 (struct inode*,struct ocfs2_dinode*) ;
 int FUNC_26 (struct ocfs2_super*,int *,struct inode*,struct buffer_head*,struct buffer_head*,struct ocfs2_alloc_context*,int,int,struct buffer_head**) ;
 unsigned int FUNC_27 (struct ocfs2_super*,int *) ;
 int FUNC_28 (struct inode*,int *,struct buffer_head**,int,int*,struct buffer_head*) ;
 int FUNC_29 (struct inode*,struct buffer_head*,struct buffer_head*) ;
 struct buffer_head** FUNC_30 (struct super_block*,int*) ;
 int FUNC_31 (scalar_t__,scalar_t__,struct inode*) ;
 int FUNC_32 (struct ocfs2_alloc_context*) ;
 int FUNC_33 (struct ocfs2_extent_tree*,int ,struct buffer_head*) ;
 int FUNC_34 (struct inode*,struct buffer_head*,int) ;
 int FUNC_35 (struct ocfs2_extent_tree*,int ,struct buffer_head*) ;
 int FUNC_36 (struct super_block*) ;
 int FUNC_37 (struct inode*) ;
 int FUNC_38 (int *,struct ocfs2_extent_tree*,int,unsigned int,int,int ,int *) ;
 int FUNC_39 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_40 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_41 (int *,struct buffer_head*) ;
 scalar_t__ FUNC_42 (struct inode*) ;
 int FUNC_43 (struct inode*,struct buffer_head*) ;
 int FUNC_44 (struct ocfs2_super*,int,struct ocfs2_alloc_context**) ;
 int FUNC_45 (struct ocfs2_super*,int,struct ocfs2_alloc_context**) ;
 int FUNC_46 (int ,struct buffer_head*) ;
 int * FUNC_47 (struct ocfs2_super*,int) ;
 scalar_t__ FUNC_48 (struct ocfs2_super*) ;
 struct buffer_head* FUNC_49 (struct super_block*,unsigned int) ;
 int FUNC_50 (int *) ;
 int FUNC_51 (int *) ;
 int FUNC_52 (int *) ;
 scalar_t__ FUNC_53 (struct inode*,int) ;
 int FUNC_54 (struct inode*,int) ;

__attribute__((used)) static int FUNC_55(struct inode *VAR_7, struct buffer_head *VAR_8,
       unsigned int VAR_9,
       struct ocfs2_dir_lookup_result *VAR_10,
       struct buffer_head **VAR_11)
{
 u32 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16 = 0;
 struct super_block *VAR_17 = VAR_7->i_sb;
 int VAR_18, VAR_19, VAR_20 = 0, VAR_21 = 0,
  VAR_22 = FUNC_36(VAR_17);
 u64 VAR_23, VAR_24,
  VAR_25 = VAR_9 << VAR_17->s_blocksize_bits;
 struct ocfs2_super *VAR_26 = FUNC_4(VAR_7->i_sb);
 struct ocfs2_inode_info *VAR_27 = FUNC_3(VAR_7);
 struct ocfs2_alloc_context *VAR_28;
 struct ocfs2_alloc_context *VAR_29 = ((void*)0);
 struct buffer_head *VAR_30 = ((void*)0);
 struct buffer_head *VAR_31 = ((void*)0);
 struct buffer_head **VAR_32 = ((void*)0);
 struct ocfs2_dinode *VAR_33 = (struct ocfs2_dinode *)VAR_8->b_data;
 handle_t *VAR_34;
 struct ocfs2_extent_tree VAR_35;
 struct ocfs2_extent_tree VAR_36;
 int VAR_37 = 0, VAR_38 = 0;

 FUNC_33(&VAR_35, FUNC_1(VAR_7), VAR_8);

 VAR_12 = FUNC_21(VAR_17, VAR_25);
 VAR_13 = 0;

 FUNC_11(&VAR_27->ip_alloc_sem);

 if (FUNC_48(VAR_26)) {
  VAR_22 += FUNC_19(VAR_17);

  VAR_21 = FUNC_43(VAR_7, VAR_8);
  if (!VAR_21) {

   VAR_13++;
   VAR_32 = FUNC_30(VAR_17,
        &VAR_20);
   if (!VAR_32) {
    VAR_18 = -VAR_3;
    FUNC_18(VAR_18);
    goto out;
   }
  }


  VAR_18 = FUNC_45(VAR_26, 1, &VAR_29);
  if (VAR_18) {
   FUNC_18(VAR_18);
   goto out;
  }
 }
 FUNC_0(VAR_12 > 2);

 VAR_18 = FUNC_44(VAR_26, VAR_12 + VAR_13, &VAR_28);
 if (VAR_18) {
  FUNC_18(VAR_18);
  goto out;
 }





 if (VAR_12 == 2)
  VAR_22 += VAR_6;

 VAR_34 = FUNC_47(VAR_26, VAR_22);
 if (FUNC_2(VAR_34)) {
  VAR_18 = FUNC_5(VAR_34);
  FUNC_18(VAR_18);
  goto out;
 }

 if (FUNC_53(VAR_7,
    FUNC_23(VAR_26->sb,
       VAR_12 + VAR_13))) {
  VAR_18 = -VAR_1;
  goto out_commit;
 }
 VAR_37 = 1;

 if (FUNC_48(VAR_26) && !VAR_21) {





  VAR_18 = FUNC_6(VAR_7, 0, VAR_34, VAR_28,
       VAR_32, VAR_20,
       &VAR_23);
  if (VAR_18) {
   FUNC_18(VAR_18);
   goto out_commit;
  }
  VAR_38 += FUNC_23(VAR_7->i_sb, 1);
 }






 VAR_18 = FUNC_20(VAR_26, VAR_34, VAR_28, 1, &VAR_14, &VAR_15);
 if (VAR_18) {
  FUNC_18(VAR_18);
  goto out_commit;
 }
 VAR_38 += FUNC_23(VAR_7->i_sb, 1);






 VAR_24 = FUNC_22(VAR_7->i_sb, VAR_14);
 VAR_30 = FUNC_49(VAR_17, VAR_24);
 if (!VAR_30) {
  VAR_18 = -VAR_2;
  FUNC_18(VAR_18);
  goto out_commit;
 }

 FUNC_46(FUNC_1(VAR_7), VAR_30);

 VAR_18 = FUNC_39(VAR_34, FUNC_1(VAR_7), VAR_30,
          VAR_5);
 if (VAR_18) {
  FUNC_18(VAR_18);
  goto out_commit;
 }

 FUNC_16(VAR_30->b_data, VAR_33->id2.i_data.id_data, FUNC_13(VAR_7));
 FUNC_17(VAR_30->b_data + FUNC_13(VAR_7), 0,
        VAR_17->s_blocksize - FUNC_13(VAR_7));
 VAR_19 = FUNC_31(VAR_30->b_data, FUNC_13(VAR_7), VAR_7);
 if (FUNC_42(VAR_7)) {






  FUNC_34(VAR_7, VAR_30, VAR_19);
 }

 VAR_18 = FUNC_41(VAR_34, VAR_30);
 if (VAR_18) {
  FUNC_18(VAR_18);
  goto out_commit;
 }

 if (FUNC_48(VAR_26) && !VAR_21) {
  VAR_18 = FUNC_28(VAR_7, VAR_34, VAR_32,
            VAR_20, &VAR_16,
            VAR_30);
  if (VAR_18) {
   FUNC_18(VAR_18);
   goto out_commit;
  }
 }
 VAR_18 = FUNC_40(VAR_34, FUNC_1(VAR_7), VAR_8,
          VAR_5);
 if (VAR_18) {
  FUNC_18(VAR_18);
  goto out_commit;
 }

 FUNC_50(&VAR_27->ip_lock);
 VAR_27->ip_dyn_features &= ~VAR_4;
 VAR_33->i_dyn_features = FUNC_8(VAR_27->ip_dyn_features);
 FUNC_51(&VAR_27->ip_lock);

 FUNC_25(VAR_7, VAR_33);

 FUNC_14(VAR_7, VAR_17->s_blocksize);
 VAR_7->i_mtime = VAR_7->i_ctime = VAR_0;

 VAR_33->i_size = FUNC_10(VAR_17->s_blocksize);
 VAR_33->i_ctime = VAR_33->i_mtime = FUNC_10(VAR_7->i_ctime.tv_sec);
 VAR_33->i_ctime_nsec = VAR_33->i_mtime_nsec = FUNC_9(VAR_7->i_ctime.tv_nsec);





 VAR_18 = FUNC_38(VAR_34, &VAR_35, 0, VAR_24, VAR_15,
      0, ((void*)0));
 if (VAR_18) {
  FUNC_18(VAR_18);
  goto out_commit;
 }





 VAR_7->i_blocks = FUNC_37(VAR_7);

 VAR_18 = FUNC_41(VAR_34, VAR_8);
 if (VAR_18) {
  FUNC_18(VAR_18);
  goto out_commit;
 }

 if (FUNC_48(VAR_26)) {
  VAR_18 = FUNC_26(VAR_26, VAR_34, VAR_7, VAR_8,
      VAR_30, VAR_29, VAR_21,
      VAR_16, &VAR_31);
  if (VAR_18) {
   FUNC_18(VAR_18);
   goto out_commit;
  }

  if (VAR_21) {
   FUNC_29(VAR_7, VAR_31,
            VAR_30);
  } else {
   FUNC_35(&VAR_36,
             FUNC_1(VAR_7),
             VAR_31);
   VAR_18 = FUNC_38(VAR_34, &VAR_36, 0,
        VAR_23, 1, 0, ((void*)0));
   if (VAR_18)
    FUNC_18(VAR_18);
  }
 }





 if (VAR_12 > VAR_15) {
  VAR_18 = FUNC_20(VAR_26, VAR_34, VAR_28, 1, &VAR_14,
        &VAR_15);
  if (VAR_18) {
   FUNC_18(VAR_18);
   goto out_commit;
  }
  VAR_24 = FUNC_22(VAR_7->i_sb, VAR_14);

  VAR_18 = FUNC_38(VAR_34, &VAR_35, 1,
       VAR_24, VAR_15, 0, ((void*)0));
  if (VAR_18) {
   FUNC_18(VAR_18);
   goto out_commit;
  }
  VAR_38 += FUNC_23(VAR_7->i_sb, 1);
 }

 *VAR_11 = VAR_30;
 VAR_30 = ((void*)0);
 if (FUNC_48(VAR_26)) {
  unsigned int VAR_39;

  if (!VAR_21) {




   VAR_39 = FUNC_27(FUNC_4(VAR_7->i_sb),
          &VAR_10->dl_hinfo);
   FUNC_12(VAR_32[VAR_39]);
   VAR_10->dl_dx_leaf_bh = VAR_32[VAR_39];
  }
  VAR_10->dl_dx_root_bh = VAR_31;
  VAR_31 = ((void*)0);
 }

out_commit:
 if (VAR_18 < 0 && VAR_37)
  FUNC_54(VAR_7, VAR_38);

 FUNC_24(VAR_26, VAR_34);

out:
 FUNC_52(&VAR_27->ip_alloc_sem);
 if (VAR_28)
  FUNC_32(VAR_28);
 if (VAR_29)
  FUNC_32(VAR_29);

 if (VAR_32) {
  for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++)
   FUNC_7(VAR_32[VAR_19]);
  FUNC_15(VAR_32);
 }

 FUNC_7(VAR_30);
 FUNC_7(VAR_31);

 return VAR_18;
}
