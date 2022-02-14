
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {scalar_t__ param; int id; } ;
struct TYPE_4__ {int desc_type; TYPE_1__ hip; } ;
struct usie_softc {int sc_mtx; int * sc_if_xfer; int ** sc_uc_xfer; TYPE_2__ sc_txd; struct ifnet* sc_ifp; } ;
struct ifnet {int if_drv_flags; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct usie_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_10)
{
 struct usie_softc *VAR_11 = VAR_10;
 struct ifnet *VAR_12 = VAR_11->sc_ifp;
 uint8_t VAR_13;

 FUNC_2(&VAR_11->sc_mtx);


 VAR_11->sc_txd.hip.id = VAR_3;
 VAR_11->sc_txd.hip.param = 0;
 VAR_11->sc_txd.desc_type = FUNC_1(VAR_8);

 for (VAR_13 = 0; VAR_13 != VAR_5; VAR_13++)
  FUNC_5(VAR_11->sc_if_xfer[VAR_13]);

 FUNC_4(VAR_11->sc_uc_xfer[VAR_4][VAR_9]);
 FUNC_4(VAR_11->sc_if_xfer[VAR_7]);
 FUNC_4(VAR_11->sc_if_xfer[VAR_6]);


 if (!(VAR_12->if_drv_flags & VAR_0))
  FUNC_6(VAR_11, VAR_1, VAR_2);

 FUNC_3(&VAR_11->sc_mtx);

 FUNC_0("ifnet initialized\n");
}
