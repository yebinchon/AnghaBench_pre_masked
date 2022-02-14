
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,struct dentry*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct dentry *VAR_2)
{
 int VAR_3 = -VAR_0;
 struct inode *VAR_4 = VAR_2->d_inode;

 if (FUNC_1(VAR_4)) {
  VAR_3 = FUNC_2(VAR_1, VAR_2);
  if (!VAR_3)
   FUNC_0(VAR_4);
 }
 return VAR_3;
}
