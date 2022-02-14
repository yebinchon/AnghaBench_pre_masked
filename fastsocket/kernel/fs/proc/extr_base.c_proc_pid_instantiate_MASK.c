
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct inode {int i_mode; scalar_t__ i_nlink; int i_flags; int * i_fop; int * i_op; int i_sb; } ;
struct dentry {int * d_op; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct dentry* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct dentry*,int *) ;
 struct inode* FUNC_5 (int ,struct task_struct*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static struct dentry *FUNC_6(struct inode *VAR_9,
        struct dentry * VAR_10,
        struct task_struct *VAR_11, const void *VAR_12)
{
 struct dentry *VAR_13 = FUNC_1(-VAR_0);
 struct inode *VAR_14;

 VAR_14 = FUNC_5(VAR_9->i_sb, VAR_11);
 if (!VAR_14)
  goto out;

 VAR_14->i_mode = VAR_1|VAR_3|VAR_4;
 VAR_14->i_op = &VAR_6;
 VAR_14->i_fop = &VAR_7;
 VAR_14->i_flags|=VAR_2;

 VAR_14->i_nlink = 2 + FUNC_3(VAR_8,
  FUNC_0(VAR_8));

 VAR_10->d_op = &VAR_5;

 FUNC_2(VAR_10, VAR_14);

 if (FUNC_4(VAR_10, ((void*)0)))
  VAR_13 = ((void*)0);
out:
 return VAR_13;
}
