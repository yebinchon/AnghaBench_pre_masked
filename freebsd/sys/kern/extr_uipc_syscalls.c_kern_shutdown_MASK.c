
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; } ;
struct socket {int dummy; } ;
struct file {struct socket* f_data; } ;
struct TYPE_2__ {scalar_t__ p_osrel; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct file*,struct thread*) ;
 int FUNC_2 (struct thread*,int,int *,struct file**,int *,int *) ;
 int FUNC_3 (struct socket*,int) ;

int
FUNC_4(struct thread *VAR_3, int VAR_4, int VAR_5)
{
 struct socket *VAR_6;
 struct file *VAR_7;
 int VAR_8;

 FUNC_0(VAR_4);
 VAR_8 = FUNC_2(VAR_3, VAR_4, &VAR_2,
     &VAR_7, ((void*)0), ((void*)0));
 if (VAR_8 == 0) {
  VAR_6 = VAR_7->f_data;
  VAR_8 = FUNC_3(VAR_6, VAR_5);






  if (VAR_8 == VAR_0 &&
      VAR_3->td_proc->p_osrel < VAR_1)
   VAR_8 = 0;
  FUNC_1(VAR_7, VAR_3);
 }
 return (VAR_8);
}
