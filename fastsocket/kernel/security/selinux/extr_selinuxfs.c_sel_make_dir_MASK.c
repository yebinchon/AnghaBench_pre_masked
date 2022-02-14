
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {unsigned long i_ino; int * i_fop; int * i_op; int i_sb; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dentry*,struct inode*) ;
 int FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_6, struct dentry *VAR_7,
   unsigned long *VAR_8)
{
 int VAR_9 = 0;
 struct inode *VAR_10;

 VAR_10 = FUNC_2(VAR_6->i_sb, VAR_1 | VAR_2 | VAR_3);
 if (!VAR_10) {
  VAR_9 = -VAR_0;
  goto out;
 }
 VAR_10->i_op = &VAR_4;
 VAR_10->i_fop = &VAR_5;
 VAR_10->i_ino = ++(*VAR_8);

 FUNC_1(VAR_10);
 FUNC_0(VAR_7, VAR_10);

 FUNC_1(VAR_6);
out:
 return VAR_9;
}
