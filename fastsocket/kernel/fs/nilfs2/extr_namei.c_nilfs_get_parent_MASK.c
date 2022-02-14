
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_3__ {char* name; int len; } ;
struct dentry {TYPE_2__* d_inode; TYPE_1__ d_name; } ;
struct TYPE_4__ {int i_sb; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct inode*) ;
 struct dentry* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 struct dentry* FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (int ,unsigned long) ;
 unsigned long FUNC_5 (TYPE_2__*,struct dentry*) ;

struct dentry *FUNC_6(struct dentry *VAR_1)
{
 unsigned long VAR_2;
 struct inode *VAR_3;
 struct dentry VAR_4;

 VAR_4.d_name.name = "..";
 VAR_4.d_name.len = 2;

 VAR_2 = FUNC_5(VAR_1->d_inode, &VAR_4);
 if (!VAR_2)
  return FUNC_1(-VAR_0);

 VAR_3 = FUNC_4(VAR_1->d_inode->i_sb, VAR_2);
 if (FUNC_2(VAR_3))
  return FUNC_0(VAR_3);
 return FUNC_3(VAR_3);
}
