
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct TYPE_2__ {int si_note; } ;
struct linux_file {int f_kqflags; int f_kqlock; TYPE_1__ f_selinfo; int _file; } ;
struct linux_cdev {int dummy; } ;
struct file_operations {int (* poll ) (struct linux_file*,int *) ;} ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct thread*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct thread* VAR_4 ;
 int FUNC_2 (struct linux_cdev*) ;
 int FUNC_3 (struct linux_file*,struct file_operations const**,struct linux_cdev**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct linux_file*,int *) ;

__attribute__((used)) static void
FUNC_7(struct linux_file *VAR_5, int VAR_6)
{
 struct thread *VAR_7;
 const struct file_operations *VAR_8;
 struct linux_cdev *VAR_9;
 int VAR_10;

 if ((VAR_5->f_kqflags & VAR_6) == 0)
  return;

 VAR_7 = VAR_4;

 FUNC_3(VAR_5, &VAR_8, &VAR_9);

 VAR_10 = FUNC_1(VAR_5->_file, VAR_7, VAR_8->poll(VAR_5, ((void*)0)));
 FUNC_2(VAR_9);

 FUNC_4(&VAR_5->f_kqlock);

 VAR_5->f_kqflags &= ~(VAR_0 |
     VAR_1);

 if ((VAR_10 & (VAR_2 | VAR_3)) != 0) {
  if ((VAR_10 & VAR_2) != 0)
   VAR_5->f_kqflags |= VAR_0;
  if ((VAR_10 & VAR_3) != 0)
   VAR_5->f_kqflags |= VAR_1;


  FUNC_0(&VAR_5->f_selinfo.si_note, 0);
 }
 FUNC_5(&VAR_5->f_kqlock);
}
