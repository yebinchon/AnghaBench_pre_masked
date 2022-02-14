
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_extent_rec {int dummy; } ;
struct ocfs2_extent_list {scalar_t__ l_next_free_rec; scalar_t__ l_tree_depth; scalar_t__ l_count; int * l_recs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int,char*,int,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct ocfs2_extent_list*) ;

__attribute__((used)) static void FUNC_7(struct ocfs2_extent_list *VAR_0)
{
 int VAR_1 = FUNC_2(VAR_0->l_next_free_rec);

 FUNC_0(FUNC_2(VAR_0->l_tree_depth) != 0);

 if (VAR_1 == 0)
  goto set_and_inc;

 if (FUNC_5(&VAR_0->l_recs[0]))
  return;

 FUNC_4(VAR_0->l_count == VAR_0->l_next_free_rec,
   "Asked to create an empty extent in a full list:\n"
   "count = %u, tree depth = %u",
   FUNC_2(VAR_0->l_count),
   FUNC_2(VAR_0->l_tree_depth));

 FUNC_6(VAR_0);

set_and_inc:
 FUNC_1(&VAR_0->l_next_free_rec, 1);
 FUNC_3(&VAR_0->l_recs[0], 0, sizeof(struct ocfs2_extent_rec));
}
