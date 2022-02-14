
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netfront_info {int maxfrags; TYPE_1__* xn_ifp; int xbdev; } ;
struct TYPE_2__ {int if_capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,char*,int *,char*,int*) ;

__attribute__((used)) static void
FUNC_4(struct netfront_info *VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_5->xbdev, "backend features:");

 if (FUNC_3(VAR_4, FUNC_2(VAR_5->xbdev),
  "feature-sg", ((void*)0), "%d", &VAR_6) != 0)
  VAR_6 = 0;

 VAR_5->maxfrags = 1;
 if (VAR_6) {
  VAR_5->maxfrags = VAR_3;
  FUNC_1(" feature-sg");
 }

 if (FUNC_3(VAR_4, FUNC_2(VAR_5->xbdev),
  "feature-gso-tcpv4", ((void*)0), "%d", &VAR_6) != 0)
  VAR_6 = 0;

 VAR_5->xn_ifp->if_capabilities &= ~(VAR_2|VAR_1);
 if (VAR_6) {
  VAR_5->xn_ifp->if_capabilities |= VAR_2|VAR_1;
  FUNC_1(" feature-gso-tcp4");
 }





 if (FUNC_3(VAR_4, FUNC_2(VAR_5->xbdev),
  "feature-no-csum-offload", ((void*)0), "%d", &VAR_6) != 0)
  VAR_6 = 0;

 VAR_5->xn_ifp->if_capabilities |= VAR_0;
 if (VAR_6) {
  VAR_5->xn_ifp->if_capabilities &= ~(VAR_0);
  FUNC_1(" feature-no-csum-offload");
 }

 FUNC_1("\n");
}
