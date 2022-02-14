
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* ioctl_dev; TYPE_4__* ifp; } ;
typedef TYPE_1__ qla_host_t ;
struct TYPE_7__ {int if_dunit; } ;
struct TYPE_6__ {TYPE_1__* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_3__* FUNC_1 (int *,int ,int ,int ,int,char*,int ) ;
 int VAR_2 ;

int
FUNC_2(qla_host_t *VAR_3)
{
        VAR_3->ioctl_dev = FUNC_1(&VAR_2,
    VAR_3->ifp->if_dunit,
                                VAR_1,
                                VAR_0,
                                0600,
                                "%s",
                                FUNC_0(VAR_3->ifp));

 if (VAR_3->ioctl_dev == ((void*)0))
  return (-1);

        VAR_3->ioctl_dev->si_drv1 = VAR_3;

 return (0);
}
