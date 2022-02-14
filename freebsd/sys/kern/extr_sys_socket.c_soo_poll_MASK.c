
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct socket {int dummy; } ;
struct file {int f_cred; struct socket* f_data; } ;


 int FUNC_0 (struct ucred*,struct socket*) ;
 int FUNC_1 (struct socket*,int,int ,struct thread*) ;

__attribute__((used)) static int
FUNC_2(struct file *VAR_0, int VAR_1, struct ucred *VAR_2,
    struct thread *VAR_3)
{
 struct socket *VAR_4 = VAR_0->f_data;







 return (FUNC_1(VAR_4, VAR_1, VAR_0->f_cred, VAR_3));
}
