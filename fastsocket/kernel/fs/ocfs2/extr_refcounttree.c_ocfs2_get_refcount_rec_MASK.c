
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
typedef unsigned int u32 ;
struct super_block {int dummy; } ;
struct ocfs2_refcount_rec {int dummy; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; int l_next_free_rec; scalar_t__ l_tree_depth; } ;
struct ocfs2_refcount_block {struct ocfs2_extent_list rf_list; int rf_flags; } ;
struct ocfs2_extent_rec {int e_blkno; int e_cpos; } ;
struct ocfs2_extent_block {struct ocfs2_extent_list h_list; } ;
struct ocfs2_caching_info {int dummy; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct super_block*,char*,unsigned long long,unsigned long long) ;
 int FUNC_7 (struct ocfs2_caching_info*,struct ocfs2_extent_list*,unsigned int,struct buffer_head**) ;
 int FUNC_8 (struct ocfs2_caching_info*,struct buffer_head*,unsigned int,unsigned int,struct ocfs2_refcount_rec*,int*) ;
 struct super_block* FUNC_9 (struct ocfs2_caching_info*) ;
 scalar_t__ FUNC_10 (struct ocfs2_caching_info*) ;
 int FUNC_11 (struct ocfs2_caching_info*,int ,struct buffer_head**) ;

__attribute__((used)) static int FUNC_12(struct ocfs2_caching_info *VAR_3,
      struct buffer_head *VAR_4,
      u64 VAR_5, unsigned int VAR_6,
      struct ocfs2_refcount_rec *VAR_7,
      int *VAR_8,
      struct buffer_head **VAR_9)
{
 int VAR_10 = 0, VAR_11, VAR_12;
 u32 VAR_13;
 struct ocfs2_extent_list *VAR_14;
 struct ocfs2_extent_rec *VAR_15, *VAR_16 = ((void*)0);
 struct ocfs2_extent_block *VAR_17;
 struct buffer_head *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
 struct super_block *VAR_20 = FUNC_9(VAR_3);
 struct ocfs2_refcount_block *VAR_21 =
   (struct ocfs2_refcount_block *)VAR_4->b_data;

 if (!(FUNC_3(VAR_21->rf_flags) & VAR_2)) {
  FUNC_8(VAR_3, VAR_4, VAR_5, VAR_6,
           VAR_7, VAR_8);
  *VAR_9 = VAR_4;
  FUNC_1(VAR_4);
  return 0;
 }

 VAR_14 = &VAR_21->rf_list;
 VAR_13 = VAR_5 & VAR_1;

 if (VAR_14->l_tree_depth) {
  VAR_10 = FUNC_7(VAR_3, VAR_14, VAR_13, &VAR_18);
  if (VAR_10) {
   FUNC_5(VAR_10);
   goto out;
  }

  VAR_17 = (struct ocfs2_extent_block *) VAR_18->b_data;
  VAR_14 = &VAR_17->h_list;

  if (VAR_14->l_tree_depth) {
   FUNC_6(VAR_20,
   "refcount tree %llu has non zero tree "
   "depth in leaf btree tree block %llu\n",
   (unsigned long long)FUNC_10(VAR_3),
   (unsigned long long)VAR_18->b_blocknr);
   VAR_10 = -VAR_0;
   goto out;
  }
 }

 VAR_12 = 0;
 for (VAR_11 = FUNC_2(VAR_14->l_next_free_rec) - 1; VAR_11 >= 0; VAR_11--) {
  VAR_16 = &VAR_14->l_recs[VAR_11];

  if (FUNC_3(VAR_16->e_cpos) <= VAR_13) {
   VAR_12 = 1;
   break;
  }
 }


 if (VAR_12 && VAR_11 < FUNC_2(VAR_14->l_next_free_rec) - 1) {
  VAR_15 = &VAR_14->l_recs[VAR_11+1];

  if (FUNC_3(VAR_15->e_cpos) < VAR_5 + VAR_6)
   VAR_6 = FUNC_3(VAR_15->e_cpos) - VAR_5;
 }

 VAR_10 = FUNC_11(VAR_3, FUNC_4(VAR_16->e_blkno),
     &VAR_19);
 if (VAR_10) {
  FUNC_5(VAR_10);
  goto out;
 }

 FUNC_8(VAR_3, VAR_19, VAR_5, VAR_6,
          VAR_7, VAR_8);
 *VAR_9 = VAR_19;
out:
 FUNC_0(VAR_18);
 return VAR_10;
}
