
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hn_softc {int hn_flags; scalar_t__ hn_pollhz; TYPE_1__* hn_ifp; int * hn_vf_ifp; } ;
struct TYPE_2__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hn_softc*,scalar_t__) ;
 int FUNC_1 (struct hn_softc*) ;
 int FUNC_2 (struct hn_softc*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct hn_softc *VAR_3)
{






 if ((VAR_3->hn_ifp->if_drv_flags & VAR_1) ||
     (VAR_3->hn_flags & VAR_0))
  FUNC_1(VAR_3);
 if ((VAR_3->hn_flags & VAR_0) == 0 &&
     !(VAR_2 && VAR_3->hn_vf_ifp != ((void*)0)))
  FUNC_2(VAR_3);





 if ((VAR_3->hn_ifp->if_drv_flags & VAR_1) && VAR_3->hn_pollhz > 0)
  FUNC_0(VAR_3, VAR_3->hn_pollhz);
}
