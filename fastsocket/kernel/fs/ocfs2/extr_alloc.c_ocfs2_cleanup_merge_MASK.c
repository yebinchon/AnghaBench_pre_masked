
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_extent_rec {scalar_t__ e_leaf_clusters; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ocfs2_extent_rec*,struct ocfs2_extent_rec*,unsigned int) ;
 int FUNC_2 (struct ocfs2_extent_rec*,int ,int) ;
 int FUNC_3 (struct ocfs2_extent_rec*) ;

__attribute__((used)) static void FUNC_4(struct ocfs2_extent_list *VAR_0,
    int VAR_1)
{
 struct ocfs2_extent_rec *VAR_2 = &VAR_0->l_recs[VAR_1];
 unsigned int VAR_3;

 if (VAR_2->e_leaf_clusters == 0) {
  if (VAR_1 > 0) {
   FUNC_0(FUNC_3(&VAR_0->l_recs[0]));
   VAR_3 = VAR_1 * sizeof(struct ocfs2_extent_rec);
   FUNC_1(&VAR_0->l_recs[1], &VAR_0->l_recs[0], VAR_3);
  }






  FUNC_2(&VAR_0->l_recs[0], 0, sizeof(struct ocfs2_extent_rec));
 }
}
