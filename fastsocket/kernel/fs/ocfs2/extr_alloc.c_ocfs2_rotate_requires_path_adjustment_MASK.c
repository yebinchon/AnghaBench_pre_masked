
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ocfs2_path {int dummy; } ;
struct ocfs2_extent_rec {int e_cpos; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; int l_next_free_rec; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct ocfs2_extent_list* FUNC_2 (struct ocfs2_path*) ;

__attribute__((used)) static int FUNC_3(struct ocfs2_path *VAR_0,
       u32 VAR_1)
{
 struct ocfs2_extent_list *VAR_2;
 struct ocfs2_extent_rec *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_2(VAR_0);
 VAR_4 = FUNC_0(VAR_2->l_next_free_rec);
 VAR_3 = &VAR_2->l_recs[VAR_4 - 1];

 if (VAR_1 > FUNC_1(VAR_3->e_cpos))
  return 1;
 return 0;
}
