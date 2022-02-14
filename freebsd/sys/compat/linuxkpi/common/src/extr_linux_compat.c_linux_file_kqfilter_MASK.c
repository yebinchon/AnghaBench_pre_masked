
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct TYPE_4__ {int si_note; } ;
struct linux_file {int f_kqflags; int f_kqlock; TYPE_2__ f_selinfo; TYPE_1__* f_op; int f_flags; } ;
struct knote {int kn_filter; struct linux_file* kn_hook; int * kn_fop; } ;
struct file {int f_flag; scalar_t__ f_data; } ;
struct TYPE_3__ {int * poll; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 struct thread* VAR_3 ;
 int FUNC_0 (int *,struct knote*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct linux_file*,int) ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct file *VAR_6, struct knote *VAR_7)
{
 struct linux_file *VAR_8;
 struct thread *VAR_9;
 int VAR_10;

 VAR_9 = VAR_3;
 VAR_8 = (struct linux_file *)VAR_6->f_data;
 VAR_8->f_flags = VAR_6->f_flag;
 if (VAR_8->f_op->poll == ((void*)0))
  return (VAR_0);

 FUNC_3(&VAR_8->f_kqlock);
 switch (VAR_7->kn_filter) {
 case 129:
  VAR_8->f_kqflags |= VAR_1;
  VAR_7->kn_fop = &VAR_4;
  VAR_7->kn_hook = VAR_8;
  FUNC_0(&VAR_8->f_selinfo.si_note, VAR_7, 1);
  VAR_10 = 0;
  break;
 case 128:
  VAR_8->f_kqflags |= VAR_2;
  VAR_7->kn_fop = &VAR_5;
  VAR_7->kn_hook = VAR_8;
  FUNC_0(&VAR_8->f_selinfo.si_note, VAR_7, 1);
  VAR_10 = 0;
  break;
 default:
  VAR_10 = VAR_0;
  break;
 }
 FUNC_4(&VAR_8->f_kqlock);

 if (VAR_10 == 0) {
  FUNC_2(VAR_9);


  FUNC_1(VAR_8,
      VAR_1 | VAR_2);
 }
 return (VAR_10);
}
