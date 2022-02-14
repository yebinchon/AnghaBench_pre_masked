
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; int * i_fop; } ;
struct dentry {int d_inode; int d_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_1 (struct dentry*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct dentry*,int *) ;
 struct inode* FUNC_4 (int ,int) ;
 int FUNC_5 (char*,int,struct dentry*) ;

__attribute__((used)) static int FUNC_6(char *VAR_5, int VAR_6,
     struct dentry *VAR_7)
{
 struct dentry *VAR_8 = ((void*)0);
 struct inode *VAR_9 = ((void*)0);
 int VAR_10;

 VAR_8 = FUNC_1(VAR_7, "index");
 if (!VAR_8) {
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_9 = FUNC_4(VAR_7->d_sb, VAR_1|VAR_2);
 if (!VAR_9) {
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_9->i_fop = &VAR_4;
 VAR_9->i_ino = FUNC_2(VAR_6);
 FUNC_0(VAR_8, VAR_9);

 VAR_8 = FUNC_1(VAR_7, "perms");
 if (!VAR_8) {
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_10 = FUNC_3(VAR_7->d_inode, VAR_8, &VAR_3);
 if (VAR_10)
  goto out;

 VAR_10 = FUNC_5(VAR_5, VAR_6, VAR_8);

out:
 return VAR_10;
}
