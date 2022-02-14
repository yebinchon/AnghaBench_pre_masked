
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct ucred {int dummy; } ;
struct thread {struct file* td_fpop; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int (* fo_ioctl ) (struct file*,int ,void*,struct ucred*,struct thread*) ;} ;


 int FUNC_0 (struct file*,int ,void*,struct ucred*,struct thread*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct file *VAR_1, u_long VAR_2, void *VAR_3, struct ucred *VAR_4, struct thread *VAR_5)
{
 struct file *VAR_6;
 int VAR_7;

 VAR_6 = VAR_5->td_fpop;
 VAR_5->td_fpop = VAR_1;
 VAR_7 = VAR_0.fo_ioctl(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 VAR_5->td_fpop = VAR_6;
 return (VAR_7);
}
