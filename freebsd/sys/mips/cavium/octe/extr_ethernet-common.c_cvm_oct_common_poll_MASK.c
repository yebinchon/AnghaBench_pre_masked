
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ifnet {scalar_t__ if_softc; } ;
struct TYPE_6__ {scalar_t__ u64; } ;
typedef TYPE_1__ cvmx_helper_link_info_t ;
struct TYPE_7__ {scalar_t__ link_info; int need_link_update; int port; int * miibus; int (* poll ) (struct ifnet*) ;} ;
typedef TYPE_2__ cvm_oct_private_t ;
struct TYPE_8__ {scalar_t__ board_type; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ FUNC_0 (int ) ;
 TYPE_1__ FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 () ;
 int FUNC_3 (struct ifnet*) ;

void FUNC_4(struct ifnet *VAR_1)
{
 cvm_oct_private_t *VAR_2 = (cvm_oct_private_t *)VAR_1->if_softc;
 cvmx_helper_link_info_t VAR_3;




 if (FUNC_2()->board_type == VAR_0)
  return;




 if (VAR_2->poll != ((void*)0)) {
  VAR_2->poll(VAR_1);
  return;
 }





 if (VAR_2->miibus != ((void*)0))
  return;




 VAR_3 = FUNC_1(VAR_2->port);
 if (VAR_3.u64 == VAR_2->link_info)
  return;

 VAR_3 = FUNC_0(VAR_2->port);
 VAR_2->link_info = VAR_3.u64;
 VAR_2->need_link_update = 1;
}
