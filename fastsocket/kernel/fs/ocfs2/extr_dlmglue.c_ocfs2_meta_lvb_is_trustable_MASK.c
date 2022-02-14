
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_meta_lvb {scalar_t__ lvb_version; int lvb_igeneration; } ;
struct ocfs2_lock_res {int l_lksb; } ;
struct inode {scalar_t__ i_generation; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct ocfs2_meta_lvb* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(struct inode *VAR_1,
           struct ocfs2_lock_res *VAR_2)
{
 struct ocfs2_meta_lvb *VAR_3 = FUNC_1(&VAR_2->l_lksb);

 if (FUNC_2(&VAR_2->l_lksb)
     && VAR_3->lvb_version == VAR_0
     && FUNC_0(VAR_3->lvb_igeneration) == VAR_1->i_generation)
  return 1;
 return 0;
}
