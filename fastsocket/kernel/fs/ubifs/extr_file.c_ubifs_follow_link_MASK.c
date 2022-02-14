
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_inode {int data; } ;
struct nameidata {int dummy; } ;
struct dentry {int d_inode; } ;


 int FUNC_0 (struct nameidata*,int ) ;
 struct ubifs_inode* FUNC_1 (int ) ;

__attribute__((used)) static void *FUNC_2(struct dentry *VAR_0, struct nameidata *VAR_1)
{
 struct ubifs_inode *VAR_2 = FUNC_1(VAR_0->d_inode);

 FUNC_0(VAR_1, VAR_2->data);
 return ((void*)0);
}
