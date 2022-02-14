
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct super_block {int dummy; } ;
struct qstr {char* name; } ;
struct proc_ns_operations {int (* put ) (void*) ;int (* inum ) (void*) ;void* (* get ) (struct task_struct*) ;} ;
struct proc_inode {void* ns; struct proc_ns_operations const* ns_ops; } ;
struct inode {int i_state; int i_mode; int * i_fop; int * i_op; int i_ctime; int i_atime; int i_mtime; } ;
struct dentry {int * d_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_0 (int ) ;
 int VAR_3 ;
 struct proc_inode* FUNC_1 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct dentry* FUNC_2 (struct super_block*,struct qstr*) ;
 struct dentry* FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (struct dentry*) ;
 struct inode* FUNC_5 (struct super_block*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_6 (struct task_struct*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (struct inode*) ;

__attribute__((used)) static struct dentry *FUNC_12(struct super_block *VAR_9,
 struct task_struct *VAR_10, const struct proc_ns_operations *VAR_11)
{
 struct dentry *VAR_12, *VAR_13;
 struct inode *VAR_14;
 struct proc_inode *VAR_15;
 struct qstr VAR_16 = { .name = "", };
 void *VAR_17;

 VAR_17 = VAR_11->get(VAR_10);
 if (!VAR_17)
  return FUNC_0(-VAR_1);

 VAR_12 = FUNC_2(VAR_9, &VAR_16);
 if (!VAR_12) {
  VAR_11->put(VAR_17);
  return FUNC_0(-VAR_2);
 }

 VAR_14 = FUNC_5(VAR_9, VAR_11->inum(VAR_17));
 if (!VAR_14) {
  FUNC_4(VAR_12);
  VAR_11->put(VAR_17);
  return FUNC_0(-VAR_2);
 }

 VAR_15 = FUNC_1(VAR_14);
 if (VAR_14->i_state & VAR_3) {
  VAR_14->i_mtime = VAR_14->i_atime = VAR_14->i_ctime = VAR_0;
  VAR_14->i_op = &VAR_8;
  VAR_14->i_mode = VAR_4 | VAR_5;
  VAR_14->i_fop = &VAR_7;
  VAR_15->ns_ops = VAR_11;
  VAR_15->ns = VAR_17;
  FUNC_11(VAR_14);
 } else {
  VAR_11->put(VAR_17);
 }

 VAR_12->d_op = &VAR_6;
 VAR_13 = FUNC_3(VAR_12, VAR_14);
 if (VAR_13) {
  FUNC_4(VAR_12);
  VAR_12 = VAR_13;
 }

 return VAR_12;
}
