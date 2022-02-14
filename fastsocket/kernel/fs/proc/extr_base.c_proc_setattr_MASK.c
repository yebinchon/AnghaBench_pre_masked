
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct iattr {int ia_valid; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,struct iattr*) ;
 int FUNC_1 (struct inode*,struct iattr*) ;

int FUNC_2(struct dentry *VAR_2, struct iattr *VAR_3)
{
 int VAR_4;
 struct inode *VAR_5 = VAR_2->d_inode;

 if (VAR_3->ia_valid & VAR_0)
  return -VAR_1;

 VAR_4 = FUNC_0(VAR_5, VAR_3);
 if (!VAR_4)
  VAR_4 = FUNC_1(VAR_5, VAR_3);
 return VAR_4;
}
