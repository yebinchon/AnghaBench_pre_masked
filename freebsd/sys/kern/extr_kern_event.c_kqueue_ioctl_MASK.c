
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct kqueue {int kq_sigio; int kq_state; } ;
struct file {struct kqueue* f_data; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static int
FUNC_2(struct file *VAR_2, u_long VAR_3, void *VAR_4,
 struct ucred *VAR_5, struct thread *VAR_6)
{
 return (VAR_0);
}
