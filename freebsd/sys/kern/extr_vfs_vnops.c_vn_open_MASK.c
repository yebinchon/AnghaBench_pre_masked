
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_ucred; } ;
struct TYPE_2__ {struct thread* cn_thread; } ;
struct nameidata {TYPE_1__ ni_cnd; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct nameidata*,int*,int,int ,int ,struct file*) ;

int
FUNC_1(struct nameidata *VAR_0, int *VAR_1, int VAR_2, struct file *VAR_3)
{
 struct thread *VAR_4 = VAR_0->ni_cnd.cn_thread;

 return (FUNC_0(VAR_0, VAR_1, VAR_2, 0, VAR_4->td_ucred, VAR_3));
}
