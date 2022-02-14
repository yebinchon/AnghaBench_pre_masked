
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct socket {int dummy; } ;
struct file {struct socket* f_data; int * f_ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct socket*) ;

__attribute__((used)) static int
FUNC_1(struct file *VAR_1, struct thread *VAR_2)
{
 int VAR_3 = 0;
 struct socket *VAR_4;

 VAR_4 = VAR_1->f_data;
 VAR_1->f_ops = &VAR_0;
 VAR_1->f_data = ((void*)0);

 if (VAR_4)
  VAR_3 = FUNC_0(VAR_4);
 return (VAR_3);
}
