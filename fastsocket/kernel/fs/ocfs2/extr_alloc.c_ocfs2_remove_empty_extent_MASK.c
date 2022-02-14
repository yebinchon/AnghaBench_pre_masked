
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_extent_rec {int dummy; } ;
struct ocfs2_extent_list {int l_next_free_rec; int * l_recs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ,int) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ocfs2_extent_list *VAR_0)
{
 int VAR_1, VAR_2 = FUNC_2(VAR_0->l_next_free_rec);

 FUNC_0(VAR_2 == 0);

 if (FUNC_5(&VAR_0->l_recs[0])) {
  VAR_2--;
  VAR_1 = VAR_2 * sizeof(struct ocfs2_extent_rec);
  FUNC_3(&VAR_0->l_recs[0], &VAR_0->l_recs[1], VAR_1);
  FUNC_4(&VAR_0->l_recs[VAR_2], 0,
         sizeof(struct ocfs2_extent_rec));
  VAR_0->l_next_free_rec = FUNC_1(VAR_2);
 }
}
