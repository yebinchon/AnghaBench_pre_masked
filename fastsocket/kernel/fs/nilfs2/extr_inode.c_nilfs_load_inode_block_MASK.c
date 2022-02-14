
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_sb_info {int s_inode_lock; int s_ifile; } ;
struct nilfs_inode_info {struct buffer_head* i_bh; } ;
struct inode {int i_ino; } ;
struct buffer_head {int dummy; } ;


 struct nilfs_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ,int ,struct buffer_head**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct nilfs_sb_info *VAR_0, struct inode *VAR_1,
      struct buffer_head **VAR_2)
{
 struct nilfs_inode_info *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 FUNC_4(&VAR_0->s_inode_lock);
 if (VAR_3->i_bh == ((void*)0)) {
  FUNC_5(&VAR_0->s_inode_lock);
  VAR_4 = FUNC_3(VAR_0->s_ifile, VAR_1->i_ino,
        VAR_2);
  if (FUNC_6(VAR_4))
   return VAR_4;
  FUNC_4(&VAR_0->s_inode_lock);
  if (VAR_3->i_bh == ((void*)0))
   VAR_3->i_bh = *VAR_2;
  else {
   FUNC_1(*VAR_2);
   *VAR_2 = VAR_3->i_bh;
  }
 } else
  *VAR_2 = VAR_3->i_bh;

 FUNC_2(*VAR_2);
 FUNC_5(&VAR_0->s_inode_lock);
 return 0;
}
