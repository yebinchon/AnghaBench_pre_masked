
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_2__ {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct dentry*,struct inode*,struct dentry*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_3, struct dentry *VAR_4,
       struct inode *VAR_5, struct dentry *VAR_6)
{
 if (!FUNC_0(VAR_4->d_inode->i_mode))
  return -VAR_2;
 if (VAR_6->d_inode)
  return -VAR_0;
 if (VAR_3 != VAR_5)
  return -VAR_1;
 return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
}
