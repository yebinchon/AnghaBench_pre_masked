
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_size; int i_atime; int i_mtime; int i_ctime; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct inode*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_2, struct dentry *VAR_3)
{
   struct inode *VAR_4 = VAR_3->d_inode;

 VAR_2->i_ctime = VAR_2->i_mtime = VAR_2->i_atime = VAR_0;
 VAR_2->i_size -= VAR_1;
   FUNC_1(VAR_4);
   FUNC_0(VAR_3);
   return 0;
}
