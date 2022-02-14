
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct file {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, struct dentry *VAR_1,
         int VAR_2)
{
 struct inode *VAR_3 = VAR_1->d_inode;
 int VAR_4;
 FUNC_1(VAR_3->i_sb);
 VAR_4 = FUNC_0(VAR_3);
 FUNC_2(VAR_3->i_sb);
 if (VAR_4 < 0)
  return VAR_4;
 return 0;
}
