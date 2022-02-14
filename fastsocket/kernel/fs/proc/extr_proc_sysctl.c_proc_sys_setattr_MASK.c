
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct iattr {int ia_valid; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*,struct iattr*) ;
 int FUNC_1 (struct inode*,struct iattr*) ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_4, struct iattr *VAR_5)
{
 struct inode *VAR_6 = VAR_4->d_inode;
 int VAR_7;

 if (VAR_5->ia_valid & (VAR_1 | VAR_2 | VAR_0))
  return -VAR_3;

 VAR_7 = FUNC_0(VAR_6, VAR_5);
 if (!VAR_7)
  VAR_7 = FUNC_1(VAR_6, VAR_5);

 return VAR_7;
}
