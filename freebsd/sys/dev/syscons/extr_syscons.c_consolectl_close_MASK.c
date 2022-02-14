
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct cdev {int si_drv1; } ;
struct TYPE_3__ {int operation; } ;
typedef TYPE_1__ mouse_info_t ;
typedef int info ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int ,int ,int ,struct thread*) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_2, int VAR_3, int VAR_4, struct thread *VAR_5)
{

 mouse_info_t VAR_6;
 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.operation = VAR_1;





 (void) FUNC_1(VAR_2->si_drv1, VAR_0, (caddr_t)&VAR_6, VAR_5);

 return (0);
}
