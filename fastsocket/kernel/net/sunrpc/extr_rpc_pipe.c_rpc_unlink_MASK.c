
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mutex; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,struct dentry*) ;
 struct dentry* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct dentry *VAR_1)
{
 struct dentry *VAR_2;
 struct inode *VAR_3;
 int VAR_4 = 0;

 VAR_2 = FUNC_1(VAR_1);
 VAR_3 = VAR_2->d_inode;
 FUNC_3(&VAR_3->i_mutex, VAR_0);
 VAR_4 = FUNC_0(VAR_3, VAR_1);
 FUNC_4(&VAR_3->i_mutex);
 FUNC_2(VAR_2);
 return VAR_4;
}
