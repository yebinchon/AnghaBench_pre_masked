
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct thread {TYPE_1__* td_proc; } ;
struct task_struct {unsigned int bsd_ioctl_len; int * bsd_ioctl_data; } ;
struct linux_file {int dummy; } ;
struct file_operations {int (* unlocked_ioctl ) (struct linux_file*,int ,int ) ;int (* compat_ioctl ) (struct linux_file*,int ,int ) ;} ;
struct file {int dummy; } ;
typedef int * caddr_t ;
struct TYPE_2__ {scalar_t__ p_elf_machine; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct file*,struct thread*,int ) ;
 struct task_struct* VAR_6 ;
 int FUNC_2 (struct linux_file*,int) ;
 int FUNC_3 (struct task_struct*,int) ;
 int FUNC_4 (struct linux_file*,int ,int ) ;
 int FUNC_5 (struct linux_file*,int ,int ) ;
 int FUNC_6 (struct linux_file*,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct file *VAR_7, struct linux_file *VAR_8,
    const struct file_operations *VAR_9, u_long VAR_10, caddr_t VAR_11,
    struct thread *VAR_12)
{
 struct task_struct *VAR_13 = VAR_6;
 unsigned VAR_14;
 int VAR_15;

 VAR_14 = FUNC_0(VAR_10);

 if (VAR_14 > 0) {






  VAR_13->bsd_ioctl_data = VAR_11;
  VAR_13->bsd_ioctl_len = VAR_14;
  VAR_11 = (void *)VAR_3;
 } else {

  VAR_11 = *(void **)VAR_11;
 }

 if (VAR_12->td_proc->p_elf_machine == VAR_0) {

  if (VAR_9->compat_ioctl != ((void*)0)) {
   VAR_15 = -FUNC_1(VAR_7, VAR_12, VAR_9->compat_ioctl(VAR_8,
       VAR_10, (u_long)VAR_11));
  } else {
   VAR_15 = VAR_1;
  }


  if (VAR_15 == VAR_1 && VAR_9->unlocked_ioctl != ((void*)0)) {
   VAR_15 = -FUNC_1(VAR_7, VAR_12, VAR_9->unlocked_ioctl(VAR_8,
       VAR_10, (u_long)VAR_11));
  }
 } else

 {
  if (VAR_9->unlocked_ioctl != ((void*)0)) {
   VAR_15 = -FUNC_1(VAR_7, VAR_12, VAR_9->unlocked_ioctl(VAR_8,
       VAR_10, (u_long)VAR_11));
  } else {
   VAR_15 = VAR_1;
  }
 }
 if (VAR_14 > 0) {
  VAR_13->bsd_ioctl_data = ((void*)0);
  VAR_13->bsd_ioctl_len = 0;
 }

 if (VAR_15 == VAR_2) {

  FUNC_2(VAR_8,
      VAR_4 | VAR_5);
 } else {
  VAR_15 = FUNC_3(VAR_13, VAR_15);
 }
 return (VAR_15);
}
