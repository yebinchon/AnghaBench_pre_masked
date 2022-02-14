
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct qstr {char const* name; int len; int hash; } ;
struct inode {int i_ino; int i_mode; } ;
struct TYPE_2__ {struct dentry* dentry; } ;
struct file {int f_pos; TYPE_1__ f_path; } ;
struct dentry {struct inode* d_inode; } ;
typedef struct dentry* (* instantiate_t ) (struct inode*,struct dentry*,struct task_struct*,void const*) ;
typedef int ino_t ;
typedef int (* filldir_t ) (void*,char const*,int,int ,int,unsigned int) ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (struct dentry*,struct qstr*) ;
 struct dentry* FUNC_2 (struct dentry*,struct qstr*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*,struct qstr*) ;
 int FUNC_5 (char const*,int) ;

int FUNC_6(struct file *VAR_1, void *VAR_2, filldir_t VAR_3,
 const char *VAR_4, int VAR_5,
 instantiate_t VAR_6, struct task_struct *VAR_7, const void *VAR_8)
{
 struct dentry *VAR_9, *VAR_10 = VAR_1->f_path.dentry;
 struct inode *VAR_11;
 struct qstr VAR_12;
 ino_t VAR_13 = 0;
 unsigned VAR_14 = VAR_0;

 VAR_12.name = VAR_4;
 VAR_12.len = VAR_5;
 VAR_12.hash = FUNC_5(VAR_4, VAR_5);

 VAR_9 = FUNC_2(VAR_10, &VAR_12);
 if (!VAR_9) {
  struct dentry *VAR_15;
  VAR_15 = FUNC_1(VAR_10, &VAR_12);
  if (VAR_15) {
   VAR_9 = VAR_6(VAR_10->d_inode, VAR_15, VAR_7, VAR_8);
   if (VAR_9)
    FUNC_3(VAR_15);
   else
    VAR_9 = VAR_15;
  }
 }
 if (!VAR_9 || FUNC_0(VAR_9) || !VAR_9->d_inode)
  goto end_instantiate;
 VAR_11 = VAR_9->d_inode;
 if (VAR_11) {
  VAR_13 = VAR_11->i_ino;
  VAR_14 = VAR_11->i_mode >> 12;
 }
 FUNC_3(VAR_9);
end_instantiate:
 if (!VAR_13)
  VAR_13 = FUNC_4(VAR_10, &VAR_12);
 if (!VAR_13)
  VAR_13 = 1;
 return VAR_3(VAR_2, VAR_4, VAR_5, VAR_1->f_pos, VAR_13, VAR_14);
}
