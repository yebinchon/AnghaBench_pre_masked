
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct proc_ns_operations {int dummy; } ;
struct inode {int i_ino; } ;
struct TYPE_2__ {struct dentry* dentry; } ;
struct file {int f_pos; TYPE_1__ f_path; } ;
struct dentry {struct inode* d_inode; } ;
typedef int ino_t ;
typedef int (* filldir_t ) (void*,char*,int,int,int ,int ) ;


 int FUNC_0 (struct proc_ns_operations**) ;
 int VAR_0 ;
 int VAR_1 ;
 struct task_struct* FUNC_1 (struct inode*) ;
 struct proc_ns_operations** VAR_2 ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct file*,void*,int (*) (void*,char*,int,int,int ,int ),struct task_struct*,struct proc_ns_operations const*) ;
 int FUNC_4 (struct task_struct*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3, void *VAR_4,
    filldir_t VAR_5)
{
 int VAR_6;
 struct dentry *VAR_7 = VAR_3->f_path.dentry;
 struct inode *VAR_8 = VAR_7->d_inode;
 struct task_struct *VAR_9 = FUNC_1(VAR_8);
 const struct proc_ns_operations **VAR_10, **VAR_11;
 ino_t VAR_12;
 int VAR_13;

 VAR_13 = -VAR_1;
 if (!VAR_9)
  goto out_no_task;

 VAR_13 = 0;
 VAR_6 = VAR_3->f_pos;
 switch (VAR_6) {
 case 0:
  VAR_12 = VAR_8->i_ino;
  if (VAR_5(VAR_4, ".", 1, VAR_6, VAR_12, VAR_0) < 0)
   goto out;
  VAR_6++;
  VAR_3->f_pos++;

 case 1:
  VAR_12 = FUNC_2(VAR_7);
  if (VAR_5(VAR_4, "..", 2, VAR_6, VAR_12, VAR_0) < 0)
   goto out;
  VAR_6++;
  VAR_3->f_pos++;

 default:
  VAR_6 -= 2;
  if (VAR_6 >= FUNC_0(VAR_2)) {
   VAR_13 = 1;
   goto out;
  }
  VAR_10 = VAR_2 + VAR_6;
  VAR_11 = &VAR_2[FUNC_0(VAR_2) - 1];
  while (VAR_10 <= VAR_11) {
   if (FUNC_3(VAR_3, VAR_4, VAR_5,
      VAR_9, *VAR_10) < 0)
    goto out;
   VAR_3->f_pos++;
   VAR_10++;
  }
 }

 VAR_13 = 1;
out:
 FUNC_4(VAR_9);
out_no_task:
 return VAR_13;
}
