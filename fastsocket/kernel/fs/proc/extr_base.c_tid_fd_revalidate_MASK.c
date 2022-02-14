
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct nameidata {int dummy; } ;
struct inode {int i_mode; scalar_t__ i_gid; scalar_t__ i_uid; } ;
struct files_struct {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
struct cred {scalar_t__ egid; scalar_t__ euid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cred* FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (struct files_struct*,int) ;
 struct files_struct* FUNC_3 (struct task_struct*) ;
 struct task_struct* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct files_struct*) ;
 int FUNC_7 (struct task_struct*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct task_struct*,struct inode*) ;
 scalar_t__ FUNC_11 (struct task_struct*) ;

__attribute__((used)) static int FUNC_12(struct dentry *VAR_2, struct nameidata *VAR_3)
{
 struct inode *VAR_4 = VAR_2->d_inode;
 struct task_struct *VAR_5 = FUNC_4(VAR_4);
 int VAR_6 = FUNC_5(VAR_4);
 struct files_struct *VAR_7;
 const struct cred *VAR_8;

 if (VAR_5) {
  VAR_7 = FUNC_3(VAR_5);
  if (VAR_7) {
   FUNC_8();
   if (FUNC_2(VAR_7, VAR_6)) {
    FUNC_9();
    FUNC_6(VAR_7);
    if (FUNC_11(VAR_5)) {
     FUNC_8();
     VAR_8 = FUNC_0(VAR_5);
     VAR_4->i_uid = VAR_8->euid;
     VAR_4->i_gid = VAR_8->egid;
     FUNC_9();
    } else {
     VAR_4->i_uid = 0;
     VAR_4->i_gid = 0;
    }
    VAR_4->i_mode &= ~(VAR_1 | VAR_0);
    FUNC_10(VAR_5, VAR_4);
    FUNC_7(VAR_5);
    return 1;
   }
   FUNC_9();
   FUNC_6(VAR_7);
  }
  FUNC_7(VAR_5);
 }
 FUNC_1(VAR_2);
 return 0;
}
