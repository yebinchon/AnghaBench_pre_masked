
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_xlpge_softc {int port; int type; int block; int base_addr; int xlpge_callout; struct ifnet* xlpge_if; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct nlm_xlpge_softc *VAR_1)
{
 struct ifnet *VAR_2;

 VAR_2 = VAR_1->xlpge_if;
 VAR_2->if_drv_flags &= ~VAR_0;

 FUNC_0(&VAR_1->xlpge_callout);
 FUNC_1(VAR_1->base_addr, VAR_1->block, VAR_1->type, VAR_1->port);
}
