
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ocfs2_extent_rec {void* e_int_clusters; void* e_cpos; } ;
struct ocfs2_extent_list {int l_tree_depth; TYPE_1__* l_recs; int l_next_free_rec; } ;
struct TYPE_2__ {void* e_cpos; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void**,scalar_t__) ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (struct ocfs2_extent_list*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct ocfs2_extent_rec *VAR_0,
      struct ocfs2_extent_list *VAR_1,
      struct ocfs2_extent_rec *VAR_2,
      struct ocfs2_extent_list *VAR_3)
{
 u32 VAR_4, VAR_5;
 VAR_4 = FUNC_4(VAR_3->l_recs[0].e_cpos);
 if (!FUNC_5(VAR_3, &VAR_3->l_recs[0])) {
  FUNC_0(VAR_3->l_tree_depth);
  FUNC_0(FUNC_2(VAR_3->l_next_free_rec) <= 1);
  VAR_4 = FUNC_4(VAR_3->l_recs[1].e_cpos);
 }
 VAR_4 -= FUNC_4(VAR_0->e_cpos);
 VAR_0->e_int_clusters = FUNC_1(VAR_4);






 VAR_5 = FUNC_4(VAR_2->e_cpos);
 VAR_5 += FUNC_4(VAR_2->e_int_clusters);

 VAR_2->e_cpos = VAR_0->e_cpos;
 FUNC_3(&VAR_2->e_cpos, VAR_4);

 VAR_5 -= FUNC_4(VAR_2->e_cpos);
 VAR_2->e_int_clusters = FUNC_1(VAR_5);
}
