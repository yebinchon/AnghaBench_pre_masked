
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_insert_type {int ins_contig_index; int ins_contig; } ;
struct ocfs2_extent_tree {unsigned int et_max_leaf_clusters; } ;
struct ocfs2_extent_rec {int e_leaf_clusters; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; int l_next_free_rec; int l_tree_depth; } ;
typedef enum ocfs2_contig_type { ____Placeholder_ocfs2_contig_type } ocfs2_contig_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ocfs2_extent_tree*,struct ocfs2_extent_rec*,struct ocfs2_extent_rec*) ;

__attribute__((used)) static void FUNC_3(struct ocfs2_extent_tree *VAR_1,
         struct ocfs2_insert_type *VAR_2,
         struct ocfs2_extent_list *VAR_3,
         struct ocfs2_extent_rec *VAR_4)
{
 int VAR_5;
 enum ocfs2_contig_type VAR_6 = VAR_0;

 FUNC_0(FUNC_1(VAR_3->l_tree_depth) != 0);

 for(VAR_5 = 0; VAR_5 < FUNC_1(VAR_3->l_next_free_rec); VAR_5++) {
  VAR_6 = FUNC_2(VAR_1, &VAR_3->l_recs[VAR_5],
           VAR_4);
  if (VAR_6 != VAR_0) {
   VAR_2->ins_contig_index = VAR_5;
   break;
  }
 }
 VAR_2->ins_contig = VAR_6;

 if (VAR_2->ins_contig != VAR_0) {
  struct ocfs2_extent_rec *VAR_7 =
    &VAR_3->l_recs[VAR_2->ins_contig_index];
  unsigned int VAR_8 = FUNC_1(VAR_7->e_leaf_clusters) +
       FUNC_1(VAR_4->e_leaf_clusters);





  if (VAR_1->et_max_leaf_clusters &&
      (VAR_8 > VAR_1->et_max_leaf_clusters))
   VAR_2->ins_contig = VAR_0;
 }
}
