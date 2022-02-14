
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entries; } ;
struct arswitch_softc {int numphys; int sc_mtx; TYPE_1__ atu; int * ifname; int ** ifp; int ** miibus; int callout_tick; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 struct arswitch_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1)
{
 struct arswitch_softc *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 FUNC_1(&VAR_2->callout_tick);

 for (VAR_3=0; VAR_3 < VAR_2->numphys; VAR_3++) {
  if (VAR_2->miibus[VAR_3] != ((void*)0))
   FUNC_2(VAR_1, VAR_2->miibus[VAR_3]);
  if (VAR_2->ifp[VAR_3] != ((void*)0))
   FUNC_5(VAR_2->ifp[VAR_3]);
  FUNC_4(VAR_2->ifname[VAR_3], VAR_0);
 }

 FUNC_4(VAR_2->atu.entries, VAR_0);

 FUNC_0(VAR_1);
 FUNC_6(&VAR_2->sc_mtx);

 return (0);
}
