
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {int if_drv_flags; int if_softc; } ;
typedef TYPE_1__* priv_p ;
struct TYPE_2__ {int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int *,struct ifnet*,int ) ;

__attribute__((used)) static void
FUNC_1(struct ifnet *VAR_2)
{
 const priv_p VAR_3 = (priv_p)VAR_2->if_softc;


 if (VAR_2->if_drv_flags & VAR_0)
  return;

 VAR_2->if_drv_flags |= VAR_0;

 if (FUNC_0(VAR_3->node, ((void*)0), &VAR_1, VAR_2, 0) != 0)
  VAR_2->if_drv_flags &= ~VAR_0;
}
