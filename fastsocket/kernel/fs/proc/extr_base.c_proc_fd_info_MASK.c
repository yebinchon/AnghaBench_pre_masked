
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct path {int dummy; } ;
struct inode {int dummy; } ;
struct files_struct {int file_lock; } ;
struct file {scalar_t__ f_pos; int f_flags; struct path f_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct file* FUNC_0 (struct files_struct*,int) ;
 struct files_struct* FUNC_1 (struct task_struct*) ;
 struct task_struct* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct path*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct files_struct*) ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 (char*,int ,char*,long long,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_2, struct path *VAR_3, char *VAR_4)
{
 struct task_struct *VAR_5 = FUNC_2(VAR_2);
 struct files_struct *VAR_6 = ((void*)0);
 struct file *VAR_7;
 int VAR_8 = FUNC_4(VAR_2);

 if (VAR_5) {
  VAR_6 = FUNC_1(VAR_5);
  FUNC_6(VAR_5);
 }
 if (VAR_6) {




  FUNC_8(&VAR_6->file_lock);
  VAR_7 = FUNC_0(VAR_6, VAR_8);
  if (VAR_7) {
   if (VAR_3) {
    *VAR_3 = VAR_7->f_path;
    FUNC_3(&VAR_7->f_path);
   }
   if (VAR_4)
    FUNC_7(VAR_4, VAR_1,
      "pos:\t%lli\n"
      "flags:\t0%o\n",
      (long long) VAR_7->f_pos,
      VAR_7->f_flags);
   FUNC_9(&VAR_6->file_lock);
   FUNC_5(VAR_6);
   return 0;
  }
  FUNC_9(&VAR_6->file_lock);
  FUNC_5(VAR_6);
 }
 return -VAR_0;
}
