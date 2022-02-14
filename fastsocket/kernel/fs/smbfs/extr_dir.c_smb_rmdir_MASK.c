
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(struct inode *VAR_1, struct dentry *VAR_2)
{
 struct inode *VAR_3 = VAR_2->d_inode;
 int VAR_4;




 FUNC_1();
 FUNC_2(VAR_3);




 VAR_4 = -VAR_0;
 if (!FUNC_0(VAR_2))
  goto out;

 FUNC_3(VAR_1);
 VAR_4 = FUNC_4(VAR_2);

out:
 FUNC_5();
 return VAR_4;
}
