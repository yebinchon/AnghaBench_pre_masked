
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct pid_entry {int dummy; } ;
struct inode {int i_ino; } ;
struct TYPE_2__ {struct dentry* dentry; } ;
struct file {int f_pos; TYPE_1__ f_path; } ;
struct dentry {struct inode* d_inode; } ;
typedef int ino_t ;
typedef int (* filldir_t ) (void*,char*,int,int,int ,int ) ;


 int VAR_0 ;
 int VAR_1 ;
 struct task_struct* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct file*,void*,int (*) (void*,char*,int,int,int ,int ),struct task_struct*,struct pid_entry const*) ;
 int FUNC_3 (struct task_struct*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2,
  void *VAR_3, filldir_t VAR_4,
  const struct pid_entry *VAR_5, unsigned int VAR_6)
{
 int VAR_7;
 struct dentry *VAR_8 = VAR_2->f_path.dentry;
 struct inode *VAR_9 = VAR_8->d_inode;
 struct task_struct *VAR_10 = FUNC_0(VAR_9);
 const struct pid_entry *VAR_11, *VAR_12;
 ino_t VAR_13;
 int VAR_14;

 VAR_14 = -VAR_1;
 if (!VAR_10)
  goto out_no_task;

 VAR_14 = 0;
 VAR_7 = VAR_2->f_pos;
 switch (VAR_7) {
 case 0:
  VAR_13 = VAR_9->i_ino;
  if (VAR_4(VAR_3, ".", 1, VAR_7, VAR_13, VAR_0) < 0)
   goto out;
  VAR_7++;
  VAR_2->f_pos++;

 case 1:
  VAR_13 = FUNC_1(VAR_8);
  if (VAR_4(VAR_3, "..", 2, VAR_7, VAR_13, VAR_0) < 0)
   goto out;
  VAR_7++;
  VAR_2->f_pos++;

 default:
  VAR_7 -= 2;
  if (VAR_7 >= VAR_6) {
   VAR_14 = 1;
   goto out;
  }
  VAR_11 = VAR_5 + VAR_7;
  VAR_12 = &VAR_5[VAR_6 - 1];
  while (VAR_11 <= VAR_12) {
   if (FUNC_2(VAR_2, VAR_3, VAR_4, VAR_10, VAR_11) < 0)
    goto out;
   VAR_2->f_pos++;
   VAR_11++;
  }
 }

 VAR_14 = 1;
out:
 FUNC_3(VAR_10);
out_no_task:
 return VAR_14;
}
