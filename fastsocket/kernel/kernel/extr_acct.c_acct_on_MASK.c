
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct pid_namespace {struct bsd_acct_struct* bacct; } ;
struct TYPE_8__ {struct vfsmount* mnt; TYPE_2__* dentry; } ;
struct file {TYPE_4__ f_path; TYPE_3__* f_op; } ;
struct bsd_acct_struct {int dummy; } ;
struct TYPE_7__ {int write; } ;
struct TYPE_6__ {TYPE_1__* d_inode; } ;
struct TYPE_5__ {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bsd_acct_struct*,struct file*,struct pid_namespace*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct file*,int *) ;
 struct file* FUNC_5 (char const*,int,int ) ;
 int FUNC_6 (struct bsd_acct_struct*) ;
 struct bsd_acct_struct* FUNC_7 (int,int ) ;
 int FUNC_8 (struct vfsmount*) ;
 int FUNC_9 (struct vfsmount*) ;
 int FUNC_10 (struct file*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct pid_namespace* FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(const char *VAR_9)
{
 struct file *VAR_10;
 struct vfsmount *VAR_11;
 int VAR_12;
 struct pid_namespace *VAR_13;
 struct bsd_acct_struct *VAR_14 = ((void*)0);


 VAR_10 = FUNC_5(VAR_9, VAR_6|VAR_4|VAR_5, 0);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 if (!FUNC_2(VAR_10->f_path.dentry->d_inode->i_mode)) {
  FUNC_4(VAR_10, ((void*)0));
  return -VAR_0;
 }

 if (!VAR_10->f_op->write) {
  FUNC_4(VAR_10, ((void*)0));
  return -VAR_1;
 }

 VAR_13 = FUNC_13(VAR_8);
 if (VAR_13->bacct == ((void*)0)) {
  VAR_14 = FUNC_7(sizeof(struct bsd_acct_struct), VAR_3);
  if (VAR_14 == ((void*)0)) {
   FUNC_4(VAR_10, ((void*)0));
   return -VAR_2;
  }
 }

 VAR_12 = FUNC_10(VAR_10);
 if (VAR_12) {
  FUNC_6(VAR_14);
  FUNC_4(VAR_10, ((void*)0));
  return VAR_12;
 }

 FUNC_11(&VAR_7);
 if (VAR_13->bacct == ((void*)0)) {
  VAR_13->bacct = VAR_14;
  VAR_14 = ((void*)0);
 }

 VAR_11 = VAR_10->f_path.mnt;
 FUNC_8(VAR_11);
 FUNC_3(VAR_13->bacct, VAR_10, VAR_13);
 FUNC_12(&VAR_7);

 FUNC_9(VAR_11);
 FUNC_6(VAR_14);

 return 0;
}
