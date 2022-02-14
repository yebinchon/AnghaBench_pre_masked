
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int link_up; } ;
struct TYPE_7__ {scalar_t__ pci_func; TYPE_4__* ifp; TYPE_1__ hw; } ;
typedef TYPE_2__ qla_host_t ;
struct TYPE_8__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;

void
FUNC_3(qla_host_t *VAR_4)
{
 uint32_t VAR_5 = 0;
 uint32_t VAR_6;

 VAR_6 = VAR_4->hw.link_up;

 if (VAR_4->ifp->if_drv_flags & VAR_0) {
  VAR_5 = FUNC_0(VAR_4, VAR_3);

  if (VAR_4->pci_func == 0) {
   VAR_5 = (((VAR_5 & 0xF) == 1)? 1 : 0);
  } else {
   VAR_5 = ((((VAR_5 >> 4)& 0xF) == 1)? 1 : 0);
  }
 }

 FUNC_1(&VAR_4->hw.link_up, (uint8_t)VAR_5);

 if (VAR_6 != VAR_4->hw.link_up) {
  if (VAR_4->hw.link_up) {
   FUNC_2(VAR_4->ifp, VAR_2);
  } else {
   FUNC_2(VAR_4->ifp, VAR_1);
  }
 }
 return;
}
