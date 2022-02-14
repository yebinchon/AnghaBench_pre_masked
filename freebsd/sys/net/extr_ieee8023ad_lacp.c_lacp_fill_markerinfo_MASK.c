
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lsi_mac; } ;
struct lacp_port {TYPE_1__ lp_systemid; struct ifnet* lp_ifp; } ;
struct lacp_markerinfo {int mi_rq_xid; int mi_rq_system; int mi_rq_port; } ;
struct ifnet {int if_index; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct lacp_port *VAR_1, struct lacp_markerinfo *VAR_2)
{
 struct ifnet *VAR_3 = VAR_1->lp_ifp;


 VAR_2->mi_rq_port = FUNC_1(VAR_3->if_index);
 FUNC_2(&VAR_2->mi_rq_system, VAR_1->lp_systemid.lsi_mac, VAR_0);
 VAR_2->mi_rq_xid = FUNC_0(0);
}
