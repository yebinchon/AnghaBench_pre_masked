
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_sb_info {int s_inode_lock; } ;
struct nilfs_inode_info {int i_state; int i_dirty; } ;
struct inode {int i_sb; } ;


 struct nilfs_inode_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct nilfs_sb_info* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

int FUNC_6(struct inode *VAR_2)
{
 struct nilfs_inode_info *VAR_3 = FUNC_0(VAR_2);
 struct nilfs_sb_info *VAR_4 = FUNC_1(VAR_2->i_sb);
 int VAR_5 = 0;

 if (!FUNC_2(&VAR_3->i_dirty)) {
  FUNC_3(&VAR_4->s_inode_lock);
  VAR_5 = FUNC_5(VAR_1, &VAR_3->i_state) ||
   FUNC_5(VAR_0, &VAR_3->i_state);
  FUNC_4(&VAR_4->s_inode_lock);
 }
 return VAR_5;
}
