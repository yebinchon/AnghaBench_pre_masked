
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_ucred; } ;
struct socket {int dummy; } ;
struct file {struct socket* f_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct file*,struct thread*) ;
 int FUNC_2 (struct thread*,int,int *,struct file**,int *,int *) ;
 int FUNC_3 (int ,struct socket*) ;
 int FUNC_4 (struct socket*,int,struct thread*) ;

int
FUNC_5(struct thread *VAR_1, int VAR_2, int VAR_3)
{
 struct socket *VAR_4;
 struct file *VAR_5;
 int VAR_6;

 FUNC_0(VAR_2);
 VAR_6 = FUNC_2(VAR_1, VAR_2, &VAR_0,
     &VAR_5, ((void*)0), ((void*)0));
 if (VAR_6 == 0) {
  VAR_4 = VAR_5->f_data;




   VAR_6 = FUNC_4(VAR_4, VAR_3, VAR_1);
  FUNC_1(VAR_5, VAR_1);
 }
 return (VAR_6);
}
