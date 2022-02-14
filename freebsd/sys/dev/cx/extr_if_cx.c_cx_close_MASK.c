
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct cdev {TYPE_1__* si_drv1; } ;
struct TYPE_3__ {int open_dev; } ;
typedef TYPE_1__ drv_t ;


 int FUNC_0 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_1 (struct cdev *VAR_0, int VAR_1, int VAR_2, struct thread *VAR_3)
{
 drv_t *VAR_4;

 VAR_4 = VAR_0->si_drv1;
 FUNC_0 (VAR_4, ("cx_close\n"));
 VAR_4->open_dev &= ~0x1;
 return 0;
}
