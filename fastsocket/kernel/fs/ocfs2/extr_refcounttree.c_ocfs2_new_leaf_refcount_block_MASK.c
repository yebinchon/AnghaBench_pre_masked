
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
typedef int u16 ;
struct super_block {int s_blocksize; } ;
struct TYPE_4__ {void* rl_count; } ;
struct ocfs2_refcount_block {int rf_generation; TYPE_1__ rf_records; void* rf_flags; void* rf_parent; void* rf_blkno; void* rf_fs_generation; void* rf_suballoc_bit; void* rf_suballoc_slot; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_caching_info {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_5__ {int fs_generation; int slot_num; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct buffer_head*) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (struct ocfs2_refcount_block*,int ,int ) ;
 int FUNC_8 (int ,char*,unsigned long long,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_2__*,int *,struct ocfs2_alloc_context*,int,int *,int *,scalar_t__*) ;
 int FUNC_11 (struct buffer_head*,struct buffer_head*,int *) ;
 int FUNC_12 (struct ocfs2_extent_tree*,struct ocfs2_caching_info*,struct buffer_head*) ;
 int FUNC_13 (int *,struct ocfs2_extent_tree*,int ,scalar_t__,int,int ,struct ocfs2_alloc_context*) ;
 int FUNC_14 (int *,struct ocfs2_caching_info*,struct buffer_head*,int ) ;
 int FUNC_15 (int *,struct buffer_head*) ;
 struct super_block* FUNC_16 (struct ocfs2_caching_info*) ;
 int FUNC_17 (struct super_block*) ;
 int FUNC_18 (struct ocfs2_caching_info*,struct buffer_head*) ;
 struct buffer_head* FUNC_19 (struct super_block*,scalar_t__) ;
 int FUNC_20 (void*,int ) ;

__attribute__((used)) static int FUNC_21(handle_t *VAR_6,
      struct ocfs2_caching_info *VAR_7,
      struct buffer_head *VAR_8,
      struct buffer_head *VAR_9,
      struct ocfs2_alloc_context *VAR_10)
{
 int VAR_11;
 u16 VAR_12;
 u32 VAR_13, VAR_14;
 u64 VAR_15;
 struct super_block *VAR_16 = FUNC_16(VAR_7);
 struct ocfs2_refcount_block *VAR_17 =
   (struct ocfs2_refcount_block *)VAR_8->b_data;
 struct buffer_head *VAR_18 = ((void*)0);
 struct ocfs2_refcount_block *VAR_19;
 struct ocfs2_extent_tree VAR_20;

 FUNC_0(!(FUNC_6(VAR_17->rf_flags) & VAR_5));

 VAR_11 = FUNC_14(VAR_6, VAR_7, VAR_8,
          VAR_2);
 if (VAR_11) {
  FUNC_9(VAR_11);
  goto out;
 }

 VAR_11 = FUNC_14(VAR_6, VAR_7, VAR_9,
          VAR_2);
 if (VAR_11) {
  FUNC_9(VAR_11);
  goto out;
 }

 VAR_11 = FUNC_10(FUNC_1(VAR_16), VAR_6, VAR_10, 1,
       &VAR_12, &VAR_13,
       &VAR_15);
 if (VAR_11) {
  FUNC_9(VAR_11);
  goto out;
 }

 VAR_18 = FUNC_19(VAR_16, VAR_15);
 if (VAR_18 == ((void*)0)) {
  VAR_11 = -VAR_0;
  FUNC_9(VAR_11);
  goto out;
 }
 FUNC_18(VAR_7, VAR_18);

 VAR_11 = FUNC_14(VAR_6, VAR_7, VAR_18,
          VAR_1);
 if (VAR_11) {
  FUNC_9(VAR_11);
  goto out;
 }


 VAR_19 = (struct ocfs2_refcount_block *)VAR_18->b_data;
 FUNC_7(VAR_19, 0, VAR_16->s_blocksize);
 FUNC_20((void *)VAR_19, VAR_3);
 VAR_19->rf_suballoc_slot = FUNC_3(FUNC_1(VAR_16)->slot_num);
 VAR_19->rf_suballoc_bit = FUNC_3(VAR_12);
 VAR_19->rf_fs_generation = FUNC_4(FUNC_1(VAR_16)->fs_generation);
 VAR_19->rf_blkno = FUNC_5(VAR_15);
 VAR_19->rf_parent = FUNC_5(VAR_8->b_blocknr);
 VAR_19->rf_flags = FUNC_4(VAR_4);
 VAR_19->rf_records.rl_count =
    FUNC_3(FUNC_17(VAR_16));
 VAR_19->rf_generation = VAR_17->rf_generation;

 VAR_11 = FUNC_11(VAR_9, VAR_18, &VAR_14);
 if (VAR_11) {
  FUNC_9(VAR_11);
  goto out;
 }

 FUNC_15(VAR_6, VAR_9);
 FUNC_15(VAR_6, VAR_18);

 FUNC_12(&VAR_20, VAR_7, VAR_8);

 FUNC_8(0, "insert new leaf block %llu at %u\n",
      (unsigned long long)VAR_18->b_blocknr, VAR_14);


 VAR_11 = FUNC_13(VAR_6, &VAR_20, VAR_14, VAR_18->b_blocknr,
      1, 0, VAR_10);
 if (VAR_11)
  FUNC_9(VAR_11);

out:
 FUNC_2(VAR_18);
 return VAR_11;
}
