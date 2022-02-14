
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct port_info {TYPE_1__* port_cdev; TYPE_2__* ifp; } ;
struct TYPE_4__ {int if_dunit; } ;
struct TYPE_3__ {void* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (int *,int ,int ,int ,int,char*,int ) ;

__attribute__((used)) static int
FUNC_2(struct port_info *VAR_4)
{

 VAR_4->port_cdev = FUNC_1(&VAR_3, VAR_4->ifp->if_dunit,
     VAR_2, VAR_1, 0600, "%s", FUNC_0(VAR_4->ifp));

 if (VAR_4->port_cdev == ((void*)0))
  return (VAR_0);

 VAR_4->port_cdev->si_drv1 = (void *)VAR_4;

 return (0);
}
