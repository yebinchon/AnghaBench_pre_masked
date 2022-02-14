
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct thread {int dummy; } ;
struct cdevsw {TYPE_1__* d_gianttrick; } ;
struct cdev {int dummy; } ;
typedef int caddr_t ;
struct TYPE_2__ {int (* d_ioctl ) (struct cdev*,int ,int ,int,struct thread*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct cdevsw* FUNC_0 (struct cdev*,int*) ;
 int FUNC_1 (struct cdev*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cdev*,int ,int ,int,struct thread*) ;

__attribute__((used)) static int
FUNC_5(struct cdev *VAR_2, u_long VAR_3, caddr_t VAR_4, int VAR_5, struct thread *VAR_6)
{
 struct cdevsw *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_0(VAR_2, &VAR_8);
 if (VAR_7 == ((void*)0))
  return (VAR_0);
 FUNC_2(&VAR_1);
 VAR_9 = VAR_7->d_gianttrick->d_ioctl(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_3(&VAR_1);
 FUNC_1(VAR_2, VAR_8);
 return (VAR_9);
}
