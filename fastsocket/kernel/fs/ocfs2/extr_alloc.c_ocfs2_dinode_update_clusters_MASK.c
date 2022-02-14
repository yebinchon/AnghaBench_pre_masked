
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_inode_info {int ip_lock; int ip_clusters; } ;
struct ocfs2_extent_tree {struct ocfs2_dinode* et_object; int et_ci; } ;
struct ocfs2_dinode {int i_clusters; } ;


 struct ocfs2_inode_info* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ocfs2_extent_tree *VAR_0,
      u32 VAR_1)
{
 struct ocfs2_inode_info *VAR_2 = FUNC_0(VAR_0->et_ci);
 struct ocfs2_dinode *VAR_3 = VAR_0->et_object;

 FUNC_1(&VAR_3->i_clusters, VAR_1);
 FUNC_3(&VAR_2->ip_lock);
 VAR_2->ip_clusters = FUNC_2(VAR_3->i_clusters);
 FUNC_4(&VAR_2->ip_lock);
}
