
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct dentry*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct dentry *VAR_1)
{
 int VAR_2;
 struct inode *VAR_3 = VAR_1->d_inode;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  goto end_unlink;

 FUNC_0(VAR_3);
 FUNC_1(VAR_0);

end_unlink:
 return VAR_2;
}
