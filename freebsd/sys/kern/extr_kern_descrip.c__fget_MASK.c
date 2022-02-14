
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; } ;
struct filedesc {int dummy; } ;
struct file {int f_flag; int * f_ops; } ;
typedef int seqc_t ;
typedef int cap_rights_t ;
struct TYPE_2__ {struct filedesc* p_fd; } ;


 int VAR_0 ;



 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct file*,struct thread*) ;
 int FUNC_2 (struct filedesc*,int,int *,struct file**,int *) ;

__attribute__((used)) static __inline int
FUNC_3(struct thread *VAR_2, int VAR_3, struct file **VAR_4, int VAR_5,
    cap_rights_t *VAR_6, seqc_t *VAR_7)
{
 struct filedesc *VAR_8;
 struct file *VAR_9;
 int VAR_10;

 *VAR_4 = ((void*)0);
 VAR_8 = VAR_2->td_proc->p_fd;
 VAR_10 = FUNC_2(VAR_8, VAR_3, VAR_6, &VAR_9, VAR_7);
 if (VAR_10 != 0)
  return (VAR_10);
 if (VAR_9->f_ops == &VAR_1) {
  FUNC_1(VAR_9, VAR_2);
  return (VAR_0);
 }




 VAR_10 = 0;
 switch (VAR_5) {
 case 129:
 case 128:
  if ((VAR_9->f_flag & VAR_5) == 0)
   VAR_10 = VAR_0;
  break;
 case 130:
      if ((VAR_9->f_flag & (129 | 130)) == 0 ||
      ((VAR_9->f_flag & 128) != 0))
   VAR_10 = VAR_0;
  break;
 case 0:
  break;
 default:
  FUNC_0(0, ("wrong flags"));
 }

 if (VAR_10 != 0) {
  FUNC_1(VAR_9, VAR_2);
  return (VAR_10);
 }

 *VAR_4 = VAR_9;
 return (0);
}
