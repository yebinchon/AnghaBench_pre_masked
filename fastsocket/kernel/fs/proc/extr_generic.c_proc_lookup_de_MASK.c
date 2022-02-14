
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc_dir_entry {scalar_t__ namelen; unsigned int low_ino; int name; struct proc_dir_entry* next; struct proc_dir_entry* subdir; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {scalar_t__ len; int name; } ;
struct dentry {int * d_op; TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int) ;
 int FUNC_1 (struct dentry*,struct inode*) ;
 int FUNC_2 (struct proc_dir_entry*) ;
 int FUNC_3 (struct proc_dir_entry*) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int VAR_2 ;
 struct inode* FUNC_5 (int ,unsigned int,struct proc_dir_entry*) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

struct dentry *FUNC_8(struct proc_dir_entry *VAR_4, struct inode *VAR_5,
  struct dentry *VAR_6)
{
 struct inode *VAR_7 = ((void*)0);
 int VAR_8 = -VAR_1;

 FUNC_6(&VAR_3);
 for (VAR_4 = VAR_4->subdir; VAR_4 ; VAR_4 = VAR_4->next) {
  if (VAR_4->namelen != VAR_6->d_name.len)
   continue;
  if (!FUNC_4(VAR_6->d_name.name, VAR_4->name, VAR_4->namelen)) {
   unsigned int VAR_9;

   VAR_9 = VAR_4->low_ino;
   FUNC_2(VAR_4);
   FUNC_7(&VAR_3);
   VAR_8 = -VAR_0;
   VAR_7 = FUNC_5(VAR_5->i_sb, VAR_9, VAR_4);
   goto out_unlock;
  }
 }
 FUNC_7(&VAR_3);
out_unlock:

 if (VAR_7) {
  VAR_6->d_op = &VAR_2;
  FUNC_1(VAR_6, VAR_7);
  return ((void*)0);
 }
 if (VAR_4)
  FUNC_3(VAR_4);
 return FUNC_0(VAR_8);
}
