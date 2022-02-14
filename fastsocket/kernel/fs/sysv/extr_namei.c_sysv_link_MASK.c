
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_nlink; int i_count; int i_ctime; int i_sb; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {scalar_t__ s_link_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*,struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*) ;

__attribute__((used)) static int FUNC_4(struct dentry * VAR_2, struct inode * VAR_3,
 struct dentry * VAR_4)
{
 struct inode *VAR_5 = VAR_2->d_inode;

 if (VAR_5->i_nlink >= FUNC_0(VAR_5->i_sb)->s_link_max)
  return -VAR_1;

 VAR_5->i_ctime = VAR_0;
 FUNC_3(VAR_5);
 FUNC_2(&VAR_5->i_count);

 return FUNC_1(VAR_4, VAR_5);
}
