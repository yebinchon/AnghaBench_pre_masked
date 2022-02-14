
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int d_inode; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(struct inode *VAR_0, struct dentry *VAR_1)
{
 int VAR_2;




 FUNC_0();
 FUNC_1(VAR_1->d_inode);

 FUNC_2(VAR_0);
 VAR_2 = FUNC_3(VAR_1);
 if (!VAR_2)
  FUNC_4(VAR_1);
 FUNC_5();
 return VAR_2;
}
