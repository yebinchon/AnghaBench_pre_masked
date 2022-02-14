
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int link_up; int pci_func; TYPE_3__* ifp; } ;
typedef TYPE_1__ qla_host_t ;
struct TYPE_6__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;

void
FUNC_2(qla_host_t *VAR_6)
{
 uint32_t VAR_7;
 uint32_t VAR_8;

 if (!(VAR_6->ifp->if_drv_flags & VAR_0)) {
  VAR_6->link_up = 0;
  return;
 }
 VAR_7 = FUNC_0(VAR_6, VAR_3);

 VAR_8 = VAR_6->link_up;

 if ((VAR_6->pci_func & 0x1) == 0)
  VAR_6->link_up = ((VAR_7 & VAR_4)? 1 : 0);
 else
  VAR_6->link_up = ((VAR_7 & VAR_5)? 1 : 0);

 if (VAR_8 != VAR_6->link_up) {


  if (VAR_6->link_up) {
   FUNC_1(VAR_6->ifp, VAR_2);
  } else {
   FUNC_1(VAR_6->ifp, VAR_1);
  }
 }
 return;
}
