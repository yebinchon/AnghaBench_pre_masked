
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thread {int dummy; } ;
struct cdev {TYPE_2__* si_drv1; } ;
struct TYPE_5__ {int open_dev; TYPE_1__* chan; } ;
typedef TYPE_2__ drv_t ;
struct TYPE_4__ {int num; } ;


 int FUNC_0 (TYPE_2__*,char*) ;

__attribute__((used)) static int FUNC_1 (struct cdev *VAR_0, int VAR_1, int VAR_2, struct thread *VAR_3)
{
 int VAR_4;
 drv_t *VAR_5;

 VAR_5 = VAR_0->si_drv1;
 VAR_4 = VAR_5->chan->num;

 FUNC_0 (VAR_5, ("cx_open unit=%d, flag=0x%x, mode=0x%x\n",
      VAR_4, VAR_1, VAR_2));

 VAR_5->open_dev |= 0x1;

 FUNC_0 (VAR_5, ("cx_open done\n"));

 return 0;
}
