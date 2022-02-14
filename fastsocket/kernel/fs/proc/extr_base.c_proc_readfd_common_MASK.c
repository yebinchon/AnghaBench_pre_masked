
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct inode {unsigned int i_ino; } ;
struct files_struct {int dummy; } ;
struct TYPE_3__ {struct dentry* dentry; } ;
struct file {unsigned int f_pos; TYPE_1__ f_path; } ;
struct dentry {struct inode* d_inode; } ;
typedef int name ;
typedef int instantiate_t ;
typedef int (* filldir_t ) (void*,char*,int,int,unsigned int,int ) ;
struct TYPE_4__ {unsigned int max_fds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct files_struct*,unsigned int) ;
 TYPE_2__* FUNC_1 (struct files_struct*) ;
 struct files_struct* FUNC_2 (struct task_struct*) ;
 struct task_struct* FUNC_3 (struct inode*) ;
 unsigned int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct file*,void*,int (*) (void*,char*,int,int,unsigned int,int ),char*,int,int ,struct task_struct*,unsigned int*) ;
 int FUNC_6 (struct files_struct*) ;
 int FUNC_7 (struct task_struct*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (char*,int,char*,unsigned int) ;

__attribute__((used)) static int FUNC_11(struct file * VAR_3, void * VAR_4,
         filldir_t VAR_5, instantiate_t VAR_6)
{
 struct dentry *VAR_7 = VAR_3->f_path.dentry;
 struct inode *VAR_8 = VAR_7->d_inode;
 struct task_struct *VAR_9 = FUNC_3(VAR_8);
 unsigned int VAR_10, VAR_11;
 int VAR_12;
 struct files_struct * VAR_13;

 VAR_12 = -VAR_1;
 if (!VAR_9)
  goto out_no_task;
 VAR_12 = 0;

 VAR_10 = VAR_3->f_pos;
 switch (VAR_10) {
  case 0:
   if (VAR_5(VAR_4, ".", 1, 0, VAR_8->i_ino, VAR_0) < 0)
    goto out;
   VAR_3->f_pos++;
  case 1:
   VAR_11 = FUNC_4(VAR_7);
   if (VAR_5(VAR_4, "..", 2, 1, VAR_11, VAR_0) < 0)
    goto out;
   VAR_3->f_pos++;
  default:
   VAR_13 = FUNC_2(VAR_9);
   if (!VAR_13)
    goto out;
   FUNC_8();
   for (VAR_10 = VAR_3->f_pos-2;
        VAR_10 < FUNC_1(VAR_13)->max_fds;
        VAR_10++, VAR_3->f_pos++) {
    char VAR_14[VAR_2];
    int VAR_15;

    if (!FUNC_0(VAR_13, VAR_10))
     continue;
    FUNC_9();

    VAR_15 = FUNC_10(VAR_14, sizeof(VAR_14), "%d", VAR_10);
    if (FUNC_5(VAR_3, VAR_4, VAR_5,
          VAR_14, VAR_15, VAR_6,
          VAR_9, &VAR_10) < 0) {
     FUNC_8();
     break;
    }
    FUNC_8();
   }
   FUNC_9();
   FUNC_6(VAR_13);
 }
out:
 FUNC_7(VAR_9);
out_no_task:
 return VAR_12;
}
