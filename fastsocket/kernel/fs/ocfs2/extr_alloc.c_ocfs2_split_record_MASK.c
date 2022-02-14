
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_path {int dummy; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_rec {int e_cpos; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; } ;
typedef enum ocfs2_split_type { ____Placeholder_ocfs2_split_type } ocfs2_split_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ocfs2_extent_rec*,int ,int) ;
 int FUNC_3 (struct ocfs2_extent_rec*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ocfs2_extent_list*,struct ocfs2_extent_rec*) ;
 int FUNC_6 (struct ocfs2_extent_list*,int ) ;
 int FUNC_7 (int ,int,struct ocfs2_extent_rec*,struct ocfs2_extent_rec*) ;
 struct ocfs2_extent_list* FUNC_8 (struct ocfs2_path*) ;

__attribute__((used)) static void FUNC_9(struct ocfs2_extent_tree *VAR_1,
          struct ocfs2_path *VAR_2,
          struct ocfs2_path *VAR_3,
          struct ocfs2_extent_rec *VAR_4,
          enum ocfs2_split_type VAR_5)
{
 int VAR_6;
 u32 VAR_7 = FUNC_1(VAR_4->e_cpos);
 struct ocfs2_extent_list *VAR_8 = ((void*)0), *VAR_9, *VAR_10, *VAR_11;
 struct ocfs2_extent_rec *VAR_12, *VAR_13;

 VAR_9 = FUNC_8(VAR_3);
 if (VAR_2)
  VAR_8 = FUNC_8(VAR_2);

 VAR_11 = VAR_9;
 VAR_10 = VAR_9;
 VAR_6 = FUNC_6(VAR_11, VAR_7);
 if (VAR_6 != -1) {
  if (VAR_6 == 0 && VAR_2) {
   FUNC_0(FUNC_3(&VAR_11->l_recs[0]));
   if (VAR_5 == VAR_0) {






    VAR_10 = VAR_8;
   } else {







    VAR_13 = &VAR_9->l_recs[VAR_6];
    FUNC_5(VAR_8, VAR_13);
    VAR_11 = VAR_8;

    FUNC_2(VAR_13, 0, sizeof(*VAR_13));
    VAR_6 = FUNC_6(VAR_8, VAR_7);
    FUNC_0(VAR_6 == -1);
   }
  }
 } else {
  FUNC_0(!VAR_2);
  FUNC_0(!FUNC_3(&VAR_8->l_recs[0]));




  VAR_11 = VAR_8;
  VAR_10 = VAR_8;
  VAR_6 = FUNC_6(VAR_11, VAR_7);
  FUNC_0(VAR_6 == -1);
 }

 VAR_12 = &VAR_11->l_recs[VAR_6];
 FUNC_7(FUNC_4(VAR_1->et_ci),
    VAR_5, VAR_12, VAR_4);
 FUNC_5(VAR_10, VAR_4);
}
