
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct ocfs2_path {int dummy; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_rec {int e_flags; int e_blkno; int e_leaf_clusters; int e_cpos; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; int l_next_free_rec; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ocfs2_extent_rec*,int ,int) ;
 int FUNC_5 (int ,char*,unsigned long long,int) ;
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

int FUNC_17(handle_t *VAR_4,
        struct ocfs2_extent_tree *VAR_5,
        u32 VAR_6, u32 VAR_7, u32 VAR_8,
        struct ocfs2_alloc_context *VAR_9,
        struct ocfs2_cached_dealloc_ctxt *VAR_10,
        int VAR_11, int VAR_12)
{
 int VAR_13, VAR_14;
 struct super_block *VAR_15 = FUNC_11(VAR_5->et_ci);
 u64 VAR_16 = FUNC_7(VAR_15, VAR_8);
 struct ocfs2_extent_rec VAR_17;
 struct ocfs2_path *VAR_18 = ((void*)0);
 struct ocfs2_extent_list *VAR_19;
 struct ocfs2_extent_rec *VAR_20;

 VAR_18 = FUNC_13(VAR_5);
 if (!VAR_18) {
  VAR_13 = -VAR_1;
  FUNC_6(VAR_13);
  goto out;
 }

 VAR_13 = FUNC_9(VAR_5->et_ci, VAR_18, VAR_6);
 if (VAR_13) {
  FUNC_6(VAR_13);
  goto out;
 }
 VAR_19 = FUNC_16(VAR_18);

 VAR_14 = FUNC_14(VAR_19, VAR_6);
 if (VAR_14 == -1 || VAR_14 >= FUNC_3(VAR_19->l_next_free_rec)) {
  FUNC_8(VAR_15,
       "Owner %llu has an extent at cpos %u which can no "
       "longer be found.\n",
        (unsigned long long)
        FUNC_12(VAR_5->et_ci), VAR_6);
  VAR_13 = -VAR_2;
  goto out;
 }

 VAR_13 = -VAR_0;
 VAR_20 = &VAR_19->l_recs[VAR_14];
 if (VAR_11 && (VAR_20->e_flags & VAR_11)) {
  FUNC_5(VAR_3, "Owner %llu tried to set %d flags on an "
       "extent that already had them",
       (unsigned long long)FUNC_12(VAR_5->et_ci),
       VAR_11);
  goto out;
 }

 if (VAR_12 && !(VAR_20->e_flags & VAR_12)) {
  FUNC_5(VAR_3, "Owner %llu tried to clear %d flags on an "
       "extent that didn't have them",
       (unsigned long long)FUNC_12(VAR_5->et_ci),
       VAR_12);
  goto out;
 }

 FUNC_4(&VAR_17, 0, sizeof(struct ocfs2_extent_rec));
 VAR_17.e_cpos = FUNC_1(VAR_6);
 VAR_17.e_leaf_clusters = FUNC_0(VAR_7);
 VAR_17.e_blkno = FUNC_2(VAR_16);
 VAR_17.e_flags = VAR_20->e_flags;
 if (VAR_11)
  VAR_17.e_flags |= VAR_11;
 if (VAR_12)
  VAR_17.e_flags &= ~VAR_12;

 VAR_13 = FUNC_15(VAR_4, VAR_5, VAR_18,
     VAR_14, &VAR_17, VAR_9,
     VAR_10);
 if (VAR_13)
  FUNC_6(VAR_13);

out:
 FUNC_10(VAR_18);
 return VAR_13;

}
