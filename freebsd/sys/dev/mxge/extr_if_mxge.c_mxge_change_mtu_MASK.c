
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ifnet {int if_mtu; int if_drv_flags; } ;
struct TYPE_5__ {int max_mtu; int driver_mtx; struct ifnet* ifp; } ;
typedef TYPE_1__ mxge_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(mxge_softc_t *VAR_4, int VAR_5)
{
 struct ifnet *VAR_6 = VAR_4->ifp;
 int VAR_7, VAR_8;
 int VAR_9 = 0;


 VAR_7 = VAR_5 + VAR_1 + VAR_2;
 if ((VAR_7 > VAR_4->max_mtu) || VAR_7 < 60)
  return VAR_0;
 FUNC_0(&VAR_4->driver_mtx);
 VAR_8 = VAR_6->if_mtu;
 VAR_6->if_mtu = VAR_5;
 if (VAR_6->if_drv_flags & VAR_3) {
  FUNC_2(VAR_4, 0);
  VAR_9 = FUNC_3(VAR_4);
  if (VAR_9 != 0) {
   VAR_6->if_mtu = VAR_8;
   FUNC_2(VAR_4, 0);
   (void) FUNC_3(VAR_4);
  }
 }
 FUNC_1(&VAR_4->driver_mtx);
 return VAR_9;
}
