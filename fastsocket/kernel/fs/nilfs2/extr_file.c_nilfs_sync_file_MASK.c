
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct file {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct inode*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;

int FUNC_3(struct file *VAR_1, struct dentry *VAR_2, int VAR_3)
{
 struct inode *VAR_4 = VAR_2->d_inode;
 int VAR_5;

 if (!FUNC_2(VAR_4))
  return 0;

 if (VAR_3)
  VAR_5 = FUNC_0(VAR_4->i_sb, VAR_4, 0,
          VAR_0);
 else
  VAR_5 = FUNC_1(VAR_4->i_sb);

 return VAR_5;
}
