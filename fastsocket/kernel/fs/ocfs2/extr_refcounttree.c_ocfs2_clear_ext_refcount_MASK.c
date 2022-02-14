
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct ocfs2_path {int dummy; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_rec {unsigned int e_flags; int e_blkno; int e_leaf_clusters; int e_cpos; } ;
struct ocfs2_extent_list {int l_next_free_rec; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
typedef int replace_rec ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ocfs2_extent_rec*,int ,int) ;
 int FUNC_5 (int ,char*,unsigned long long,int ,int ,int ,unsigned int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct super_block*,int ) ;
 int FUNC_8 (struct super_block*,char*,unsigned long long,int ) ;
 int FUNC_9 (int ,struct ocfs2_path*,int ) ;
 int FUNC_10 (struct ocfs2_path*) ;
 struct super_block* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 struct ocfs2_path* FUNC_13 (struct ocfs2_extent_tree*) ;
 int FUNC_14 (struct ocfs2_extent_list*,int ) ;
 int FUNC_15 (int *,struct ocfs2_extent_tree*,struct ocfs2_path*,int,struct ocfs2_extent_rec*,struct ocfs2_alloc_context*,struct ocfs2_cached_dealloc_ctxt*) ;
 struct ocfs2_extent_list* FUNC_16 (struct ocfs2_path*) ;

__attribute__((used)) static int FUNC_17(handle_t *VAR_3,
        struct ocfs2_extent_tree *VAR_4,
        u32 VAR_5, u32 VAR_6, u32 VAR_7,
        unsigned int VAR_8,
        struct ocfs2_alloc_context *VAR_9,
        struct ocfs2_cached_dealloc_ctxt *VAR_10)
{
 int VAR_11, VAR_12;
 struct ocfs2_extent_rec VAR_13;
 struct ocfs2_path *VAR_14 = ((void*)0);
 struct ocfs2_extent_list *VAR_15;
 struct super_block *VAR_16 = FUNC_11(VAR_4->et_ci);
 u64 VAR_17 = FUNC_12(VAR_4->et_ci);

 FUNC_5(0, "inode %llu cpos %u, len %u, p_cluster %u, ext_flags %u\n",
      (unsigned long long)VAR_17, VAR_5, VAR_7, VAR_6, VAR_8);

 FUNC_4(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.e_cpos = FUNC_1(VAR_5);
 VAR_13.e_leaf_clusters = FUNC_0(VAR_7);
 VAR_13.e_blkno = FUNC_2(FUNC_7(VAR_16,
           VAR_6));
 VAR_13.e_flags = VAR_8;
 VAR_13.e_flags &= ~VAR_2;

 VAR_14 = FUNC_13(VAR_4);
 if (!VAR_14) {
  VAR_11 = -VAR_0;
  FUNC_6(VAR_11);
  goto out;
 }

 VAR_11 = FUNC_9(VAR_4->et_ci, VAR_14, VAR_5);
 if (VAR_11) {
  FUNC_6(VAR_11);
  goto out;
 }

 VAR_15 = FUNC_16(VAR_14);

 VAR_12 = FUNC_14(VAR_15, VAR_5);
 if (VAR_12 == -1 || VAR_12 >= FUNC_3(VAR_15->l_next_free_rec)) {
  FUNC_8(VAR_16,
       "Inode %llu has an extent at cpos %u which can no "
       "longer be found.\n",
       (unsigned long long)VAR_17, VAR_5);
  VAR_11 = -VAR_1;
  goto out;
 }

 VAR_11 = FUNC_15(VAR_3, VAR_4, VAR_14, VAR_12,
     &VAR_13, VAR_9, VAR_10);
 if (VAR_11)
  FUNC_6(VAR_11);

out:
 FUNC_10(VAR_14);
 return VAR_11;
}
