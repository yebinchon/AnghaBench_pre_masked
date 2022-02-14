
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ifnet {int dummy; } ;
struct TYPE_4__ {scalar_t__ full_duplex; int speed; scalar_t__ link_up; } ;
struct TYPE_5__ {TYPE_1__ s; int u64; } ;
typedef TYPE_2__ cvmx_helper_link_info_t ;
struct TYPE_6__ {scalar_t__ need_link_update; int queue; int port; int link_info; struct ifnet* ifp; } ;
typedef TYPE_3__ cvm_oct_private_t ;


 int FUNC_0 (char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ifnet*,int ) ;
 int FUNC_2 (struct ifnet*) ;

__attribute__((used)) static void FUNC_3(void *VAR_2, int VAR_3)
{
 cvm_oct_private_t *VAR_4 = (cvm_oct_private_t *)VAR_2;
 struct ifnet *VAR_5 = VAR_4->ifp;
 cvmx_helper_link_info_t VAR_6;

 VAR_6.u64 = VAR_4->link_info;

 if (VAR_6.s.link_up) {
  FUNC_1(VAR_5, VAR_1);
  FUNC_0("%s: %u Mbps %s duplex, port %2d, queue %2d\n",
      FUNC_2(VAR_5), VAR_6.s.speed,
      (VAR_6.s.full_duplex) ? "Full" : "Half",
      VAR_4->port, VAR_4->queue);
 } else {
  FUNC_1(VAR_5, VAR_0);
  FUNC_0("%s: Link down\n", FUNC_2(VAR_5));
 }
 VAR_4->need_link_update = 0;
}
