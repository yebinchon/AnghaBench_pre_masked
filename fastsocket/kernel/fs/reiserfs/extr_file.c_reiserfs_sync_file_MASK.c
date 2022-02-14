
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; int i_mapping; int i_mode; } ;
struct file {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_4__ {int s_bdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_1,
         struct dentry *VAR_2, int VAR_3)
{
 struct inode *VAR_4 = VAR_2->d_inode;
 int VAR_5;
 int VAR_6;

 FUNC_0(!FUNC_1(VAR_4->i_mode));
 VAR_5 = FUNC_7(VAR_4->i_mapping);
 FUNC_5(VAR_4->i_sb);
 VAR_6 = FUNC_4(VAR_4);
 FUNC_6(VAR_4->i_sb);
 if (VAR_6 != 1 && FUNC_3(VAR_4->i_sb))
  FUNC_2(VAR_4->i_sb->s_bdev, ((void*)0));
 if (VAR_6 < 0)
  return VAR_6;
 return (VAR_5 < 0) ? -VAR_0 : 0;
}
