
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_inode_info {int i_bmap; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 struct nilfs_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (struct inode*,unsigned long) ;
 int FUNC_3 (struct inode*) ;

int FUNC_4(struct inode *VAR_1, unsigned long VAR_2)
{
 struct nilfs_inode_info *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3->i_bmap, VAR_2);
 if (!VAR_4 || VAR_4 == -VAR_0) {
  FUNC_3(VAR_1);
  FUNC_2(VAR_1, VAR_2);
 }
 return VAR_4;
}
