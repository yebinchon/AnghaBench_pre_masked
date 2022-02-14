
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct netfront_info {int num_queues; TYPE_1__* rxq; int xbdev; struct ifnet* xn_ifp; } ;
struct ifnet {int if_capenable; int if_capabilities; int if_hwassist; } ;
struct TYPE_5__ {struct ifnet* ifp; } ;
struct TYPE_4__ {TYPE_2__ lro; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int
FUNC_3(struct netfront_info *VAR_7)
{
 int VAR_8, VAR_9;



 struct ifnet *VAR_10;

 VAR_10 = VAR_7->xn_ifp;
 VAR_8 = 0;

 if ((VAR_10->if_capenable & VAR_10->if_capabilities) == VAR_10->if_capenable) {

  return (0);
 }


 VAR_9 = VAR_10->if_capenable;
 VAR_10->if_capenable = VAR_10->if_hwassist = 0;
 if ((VAR_10->if_capabilities & VAR_9 & VAR_4) != 0) {
  VAR_10->if_capenable |= VAR_4;
  VAR_10->if_hwassist |= VAR_5;
 }
 if ((VAR_10->if_capabilities & VAR_9 & VAR_2) != 0)
  VAR_10->if_capenable |= VAR_2;

 return (VAR_8);
}
