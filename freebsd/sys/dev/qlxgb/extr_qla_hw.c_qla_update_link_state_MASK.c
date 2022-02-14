
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int link_up; } ;
struct TYPE_8__ {TYPE_1__ flags; } ;
struct TYPE_9__ {scalar_t__ pci_func; TYPE_5__* ifp; TYPE_2__ hw; } ;
typedef TYPE_3__ qla_host_t ;
struct TYPE_10__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_5__*,int ) ;

void
FUNC_2(qla_host_t *VAR_4)
{
 uint32_t VAR_5;
 uint32_t VAR_6;

 if (!(VAR_4->ifp->if_drv_flags & VAR_0)) {
  VAR_4->hw.flags.link_up = 0;
  return;
 }
 VAR_5 = FUNC_0(VAR_4, VAR_3);

 VAR_6 = VAR_4->hw.flags.link_up;

 if (VAR_4->pci_func == 0)
  VAR_4->hw.flags.link_up = (((VAR_5 & 0xF) == 1)? 1 : 0);
 else
  VAR_4->hw.flags.link_up = ((((VAR_5 >> 4)& 0xF) == 1)? 1 : 0);

 if (VAR_6 != VAR_4->hw.flags.link_up) {
  if (VAR_4->hw.flags.link_up) {
   FUNC_1(VAR_4->ifp, VAR_2);
  } else {
   FUNC_1(VAR_4->ifp, VAR_1);
  }
 }
}
