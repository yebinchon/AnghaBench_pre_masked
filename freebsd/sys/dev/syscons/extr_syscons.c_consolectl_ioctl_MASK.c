
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct cdev {int si_drv1; } ;
typedef int caddr_t ;


 int FUNC_0 (int ,int ,int ,struct thread*) ;

__attribute__((used)) static int
FUNC_1(struct cdev *VAR_0, u_long VAR_1, caddr_t VAR_2, int VAR_3,
    struct thread *VAR_4)
{

 return FUNC_0(VAR_0->si_drv1, VAR_1, VAR_2, VAR_4);
}
