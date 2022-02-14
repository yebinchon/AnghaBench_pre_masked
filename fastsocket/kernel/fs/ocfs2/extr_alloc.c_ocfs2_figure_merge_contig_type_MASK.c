
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct ocfs2_path {scalar_t__ p_tree_depth; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_rec {scalar_t__ e_cpos; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; int l_next_free_rec; int l_count; } ;
struct ocfs2_extent_block {int h_blkno; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef enum ocfs2_contig_type { ____Placeholder_ocfs2_contig_type } ocfs2_contig_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct super_block*,char*,unsigned long long,int,...) ;
 int FUNC_3 (struct ocfs2_extent_tree*,struct ocfs2_extent_rec*,struct ocfs2_extent_rec*) ;
 int FUNC_4 (struct super_block*,struct ocfs2_path*,scalar_t__*) ;
 int FUNC_5 (struct super_block*,struct ocfs2_path*,scalar_t__*) ;
 int FUNC_6 (int ,struct ocfs2_path*,scalar_t__) ;
 int FUNC_7 (struct ocfs2_path*) ;
 scalar_t__ FUNC_8 (struct ocfs2_extent_rec*) ;
 struct super_block* FUNC_9 (int ) ;
 struct ocfs2_path* FUNC_10 (struct ocfs2_path*) ;
 struct buffer_head* FUNC_11 (struct ocfs2_path*) ;
 struct ocfs2_extent_list* FUNC_12 (struct ocfs2_path*) ;

__attribute__((used)) static enum ocfs2_contig_type
FUNC_13(struct ocfs2_extent_tree *VAR_5,
          struct ocfs2_path *VAR_6,
          struct ocfs2_extent_list *VAR_7, int VAR_8,
          struct ocfs2_extent_rec *VAR_9)
{
 int VAR_10;
 enum ocfs2_contig_type VAR_11 = VAR_2;
 u32 VAR_12, VAR_13;
 struct ocfs2_extent_rec *VAR_14 = ((void*)0);
 struct ocfs2_extent_list *VAR_15;
 struct ocfs2_path *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
 struct buffer_head *VAR_18;
 struct ocfs2_extent_block *VAR_19;
 struct super_block *VAR_20 = FUNC_9(VAR_5->et_ci);

 if (VAR_8 > 0) {
  VAR_14 = &VAR_7->l_recs[VAR_8 - 1];
 } else if (VAR_6->p_tree_depth > 0) {
  VAR_10 = FUNC_4(VAR_20, VAR_6, &VAR_12);
  if (VAR_10)
   goto out;

  if (VAR_12 != 0) {
   VAR_16 = FUNC_10(VAR_6);
   if (!VAR_16)
    goto out;

   VAR_10 = FUNC_6(VAR_5->et_ci, VAR_16,
       VAR_12);
   if (VAR_10)
    goto out;

   VAR_15 = FUNC_12(VAR_16);

   if (FUNC_0(VAR_15->l_next_free_rec) !=
       FUNC_0(VAR_15->l_count)) {
    VAR_18 = FUNC_11(VAR_16);
    VAR_19 = (struct ocfs2_extent_block *)VAR_18->b_data;
    FUNC_2(VAR_20,
         "Extent block #%llu has an "
         "invalid l_next_free_rec of "
         "%d.  It should have "
         "matched the l_count of %d",
         (unsigned long long)FUNC_1(VAR_19->h_blkno),
         FUNC_0(VAR_15->l_next_free_rec),
         FUNC_0(VAR_15->l_count));
    VAR_10 = -VAR_4;
    goto out;
   }
   VAR_14 = &VAR_15->l_recs[
    FUNC_0(VAR_15->l_next_free_rec) - 1];
  }
 }





 if (VAR_14) {
  if (VAR_8 == 1 && FUNC_8(VAR_14)) {
   if (VAR_9->e_cpos == VAR_7->l_recs[VAR_8].e_cpos)
    VAR_11 = VAR_3;
  } else {
   VAR_11 = FUNC_3(VAR_5, VAR_14, VAR_9);
  }
 }

 VAR_14 = ((void*)0);
 if (VAR_8 < (FUNC_0(VAR_7->l_next_free_rec) - 1))
  VAR_14 = &VAR_7->l_recs[VAR_8 + 1];
 else if (FUNC_0(VAR_7->l_next_free_rec) == FUNC_0(VAR_7->l_count) &&
   VAR_6->p_tree_depth > 0) {
  VAR_10 = FUNC_5(VAR_20, VAR_6, &VAR_13);
  if (VAR_10)
   goto out;

  if (VAR_13 == 0)
   goto out;

  VAR_17 = FUNC_10(VAR_6);
  if (!VAR_17)
   goto out;

  VAR_10 = FUNC_6(VAR_5->et_ci, VAR_17, VAR_13);
  if (VAR_10)
   goto out;

  VAR_15 = FUNC_12(VAR_17);
  VAR_14 = &VAR_15->l_recs[0];
  if (FUNC_8(VAR_14)) {
   if (FUNC_0(VAR_15->l_next_free_rec) <= 1) {
    VAR_18 = FUNC_11(VAR_17);
    VAR_19 = (struct ocfs2_extent_block *)VAR_18->b_data;
    FUNC_2(VAR_20,
         "Extent block #%llu has an "
         "invalid l_next_free_rec of %d",
         (unsigned long long)FUNC_1(VAR_19->h_blkno),
         FUNC_0(VAR_15->l_next_free_rec));
    VAR_10 = -VAR_4;
    goto out;
   }
   VAR_14 = &VAR_15->l_recs[1];
  }
 }

 if (VAR_14) {
  enum ocfs2_contig_type VAR_21;

  VAR_21 = FUNC_3(VAR_5, VAR_14, VAR_9);

  if (VAR_21 == VAR_0 && VAR_11 == VAR_3)
   VAR_11 = VAR_1;
  else if (VAR_11 == VAR_2)
   VAR_11 = VAR_21;
 }

out:
 if (VAR_16)
  FUNC_7(VAR_16);
 if (VAR_17)
  FUNC_7(VAR_17);

 return VAR_11;
}
