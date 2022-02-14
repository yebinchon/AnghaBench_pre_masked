
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct dentry* s_root; } ;
struct inode {int * i_op; int * i_fop; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct inode* FUNC_0 (int,struct super_block*) ;
 struct dentry* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_7)
{
 struct inode *VAR_8 =
  FUNC_0(VAR_1 | VAR_2 | VAR_4 | VAR_3, VAR_7);
 struct dentry *VAR_9;

 if (!VAR_8)
  return -VAR_0;

 VAR_8->i_fop = &VAR_6;
 VAR_8->i_op = &VAR_5;

 FUNC_2(VAR_8);
 VAR_9 = FUNC_1(VAR_8);
 if (!VAR_9) {
  FUNC_3(VAR_8);
  return -VAR_0;
 }
 VAR_7->s_root = VAR_9;
 return 0;
}
