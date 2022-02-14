
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {int if_flags; int if_multiaddrs; } ;
struct hn_softc {TYPE_1__* hn_vf_ifp; struct ifnet* hn_ifp; } ;
struct TYPE_2__ {int if_flags; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct hn_softc*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct hn_softc *VAR_1)
{
 struct ifnet *VAR_2 = VAR_1->hn_ifp;
 int VAR_3 = 0;

 FUNC_1(VAR_1);


 if (!FUNC_0(&VAR_2->if_multiaddrs))
  VAR_3 = VAR_0;


 VAR_1->hn_vf_ifp->if_flags = VAR_2->if_flags | VAR_3;
}
