
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct pid_entry {scalar_t__ len; int name; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {scalar_t__ len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 int FUNC_0 (struct pid_entry*) ;
 int VAR_0 ;
 struct dentry* FUNC_1 (int ) ;
 struct task_struct* FUNC_2 (struct inode*) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 struct dentry* FUNC_4 (struct inode*,struct dentry*,struct task_struct*,struct pid_entry const*) ;
 struct pid_entry* VAR_1 ;
 int FUNC_5 (struct task_struct*) ;

__attribute__((used)) static struct dentry *FUNC_6(struct inode *VAR_2, struct dentry *VAR_3)
{
 struct dentry *VAR_4;
 struct task_struct *VAR_5 = FUNC_2(VAR_2);
 const struct pid_entry *VAR_6, *VAR_7;

 VAR_4 = FUNC_1(-VAR_0);

 if (!VAR_5)
  goto out_no_task;


 VAR_7 = &VAR_1[FUNC_0(VAR_1) - 1];
 for (VAR_6 = VAR_1; VAR_6 <= VAR_7; VAR_6++) {
  if (VAR_6->len != VAR_3->d_name.len)
   continue;
  if (!FUNC_3(VAR_3->d_name.name, VAR_6->name, VAR_6->len))
   break;
 }
 if (VAR_6 > VAR_7)
  goto out;

 VAR_4 = FUNC_4(VAR_2, VAR_3, VAR_5, VAR_6);

out:
 FUNC_5(VAR_5);
out_no_task:
 return VAR_4;
}
