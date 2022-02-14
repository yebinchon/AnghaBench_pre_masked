
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct super_block {int s_flags; TYPE_1__* s_root; } ;
struct proc_inode {scalar_t__ pid; } ;
struct pid_namespace {int dummy; } ;
struct file_system_type {int dummy; } ;
struct TYPE_2__ {int d_inode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct proc_inode* FUNC_1 (int ) ;
 int FUNC_2 (struct super_block*) ;
 int VAR_3 ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (int,struct pid_namespace*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (char*,struct pid_namespace*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 struct super_block* FUNC_10 (struct file_system_type*,int ,int ,struct pid_namespace*) ;
 int FUNC_11 (struct vfsmount*,struct super_block*) ;
 struct pid_namespace* FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct file_system_type *VAR_6,
 int VAR_7, const char *VAR_8, void *VAR_9, struct vfsmount *VAR_10)
{
 int VAR_11;
 struct super_block *VAR_12;
 struct pid_namespace *VAR_13;
 struct proc_inode *VAR_14;
 char *VAR_15;

 if (VAR_7 & VAR_2) {
  VAR_13 = (struct pid_namespace *)VAR_9;
  VAR_15 = ((void*)0);
 } else {
  VAR_13 = FUNC_12(VAR_3);
  VAR_15 = VAR_9;
 }

 VAR_12 = FUNC_10(VAR_6, VAR_5, VAR_4, VAR_13);
 if (FUNC_0(VAR_12))
  return FUNC_2(VAR_12);

 if (!VAR_12->s_root) {
  VAR_12->s_flags = VAR_7;
  if (!FUNC_7(VAR_15, VAR_13)) {
   FUNC_3(VAR_12);
   return -VAR_0;
  }
  VAR_11 = FUNC_6(VAR_12);
  if (VAR_11) {
   FUNC_3(VAR_12);
   return VAR_11;
  }

  VAR_12->s_flags |= VAR_1;
 }
 VAR_14 = FUNC_1(VAR_12->s_root->d_inode);
 if (!VAR_14->pid) {
  FUNC_8();
  VAR_14->pid = FUNC_5(FUNC_4(1, VAR_13));
  FUNC_9();
 }

 FUNC_11(VAR_10, VAR_12);
 return 0;
}
