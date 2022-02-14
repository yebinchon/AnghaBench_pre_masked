
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameidata {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 struct dentry* FUNC_1 (int ,struct inode*,struct dentry*) ;

struct dentry *FUNC_2(struct inode *VAR_0, struct dentry *VAR_1,
  struct nameidata *VAR_2)
{
 return FUNC_1(FUNC_0(VAR_0), VAR_0, VAR_1);
}
