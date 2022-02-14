
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct super_block {int dummy; } ;
struct ocfs2_extent_list {int * l_recs; int l_next_free_rec; } ;
struct TYPE_3__ {int l_tree_depth; } ;
struct TYPE_4__ {TYPE_1__ i_list; } ;
struct ocfs2_dinode {TYPE_2__ id2; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct super_block*) ;
 unsigned int FUNC_3 (struct ocfs2_extent_list*,int *) ;

__attribute__((used)) static inline int FUNC_4(struct super_block *VAR_1,
      unsigned int VAR_2,
      struct ocfs2_dinode *VAR_3,
      struct ocfs2_extent_list *VAR_4)
{

 u16 VAR_5 = FUNC_1(VAR_4->l_next_free_rec);
 u16 VAR_6 = FUNC_1(VAR_3->id2.i_list.l_tree_depth);
 int VAR_7 = 1 + VAR_6 + 1;
 int VAR_8;

 VAR_8 = VAR_5 - 1;
 FUNC_0(VAR_8 < 0);



 if (VAR_6 && VAR_5 == 1 &&
     FUNC_3(VAR_4, &VAR_4->l_recs[VAR_8]) == VAR_2)
  VAR_7 += 1 + VAR_6;


 VAR_7 += VAR_0;

 VAR_7 += FUNC_2(VAR_1);

 return VAR_7;
}
