
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct socket {int dummy; } ;
struct file {struct socket* f_data; } ;


 int FUNC_0 (struct ucred*,struct socket*) ;
 int FUNC_1 (struct socket*,int ,struct uio*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct file *VAR_0, struct uio *VAR_1, struct ucred *VAR_2,
    int VAR_3, struct thread *VAR_4)
{
 struct socket *VAR_5 = VAR_0->f_data;
 int VAR_6;






 VAR_6 = FUNC_1(VAR_5, 0, VAR_1, 0, 0, 0);
 return (VAR_6);
}
