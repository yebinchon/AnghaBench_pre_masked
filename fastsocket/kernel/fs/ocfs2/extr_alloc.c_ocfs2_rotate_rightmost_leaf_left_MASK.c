
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_path {int dummy; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_list {int * l_recs; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct buffer_head*) ;
 int FUNC_3 (int *,int ,struct ocfs2_path*,scalar_t__) ;
 int FUNC_4 (struct ocfs2_extent_list*) ;
 struct buffer_head* FUNC_5 (struct ocfs2_path*) ;
 struct ocfs2_extent_list* FUNC_6 (struct ocfs2_path*) ;
 scalar_t__ FUNC_7 (struct ocfs2_path*) ;

__attribute__((used)) static int FUNC_8(handle_t *VAR_0,
         struct ocfs2_extent_tree *VAR_1,
         struct ocfs2_path *VAR_2)
{
 int VAR_3;
 struct buffer_head *VAR_4 = FUNC_5(VAR_2);
 struct ocfs2_extent_list *VAR_5 = FUNC_6(VAR_2);

 if (!FUNC_1(&VAR_5->l_recs[0]))
  return 0;

 VAR_3 = FUNC_3(VAR_0, VAR_1->et_ci, VAR_2,
        FUNC_7(VAR_2) - 1);
 if (VAR_3) {
  FUNC_0(VAR_3);
  goto out;
 }

 FUNC_4(VAR_5);

 VAR_3 = FUNC_2(VAR_0, VAR_4);
 if (VAR_3)
  FUNC_0(VAR_3);

out:
 return VAR_3;
}
