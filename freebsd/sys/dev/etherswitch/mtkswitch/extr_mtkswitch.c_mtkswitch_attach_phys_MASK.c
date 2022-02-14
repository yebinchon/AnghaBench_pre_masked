
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mtkswitch_softc {int numphys; unsigned int phymap; TYPE_1__** ifp; int ** miibus; int * sc_dev; int ** ifname; } ;
struct TYPE_4__ {int if_flags; int if_xname; struct mtkswitch_softc* if_softc; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*,int *,scalar_t__) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,...) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int *,int ) ;
 int * FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 (int *,int **,TYPE_1__*,int ,int ,int ,int,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,int,char*,char*) ;
 scalar_t__ FUNC_10 (char*) ;

__attribute__((used)) static int
FUNC_11(struct mtkswitch_softc *VAR_13)
{
 int VAR_14, VAR_15 = 0;
 char VAR_16[VAR_6];


 FUNC_9(VAR_16, VAR_6, "%sport", FUNC_2(VAR_13->sc_dev));
 for (VAR_14 = 0; VAR_14 < VAR_13->numphys; VAR_14++) {
  if ((VAR_13->phymap & (1u << VAR_14)) == 0) {
   VAR_13->ifp[VAR_14] = ((void*)0);
   VAR_13->ifname[VAR_14] = ((void*)0);
   VAR_13->miibus[VAR_14] = ((void*)0);
   continue;
  }
  VAR_13->ifp[VAR_14] = FUNC_4(VAR_7);
  if (VAR_13->ifp[VAR_14] == ((void*)0)) {
   FUNC_3(VAR_13->sc_dev, "couldn't allocate ifnet structure\n");
   VAR_15 = VAR_1;
   break;
  }

  VAR_13->ifp[VAR_14]->if_softc = VAR_13;
  VAR_13->ifp[VAR_14]->if_flags |= VAR_5 | VAR_2 |
      VAR_3 | VAR_4;
  VAR_13->ifname[VAR_14] = FUNC_6(FUNC_10(VAR_16) + 1, VAR_9, VAR_10);
  FUNC_1(VAR_16, VAR_13->ifname[VAR_14], FUNC_10(VAR_16) + 1);
  FUNC_5(VAR_13->ifp[VAR_14], VAR_13->ifname[VAR_14],
      FUNC_8(VAR_14));
  VAR_15 = FUNC_7(VAR_13->sc_dev, &VAR_13->miibus[VAR_14], VAR_13->ifp[VAR_14],
      VAR_12, VAR_11,
      VAR_0, VAR_14, VAR_8, 0);
  if (VAR_15 != 0) {
   FUNC_3(VAR_13->sc_dev,
       "attaching PHY %d failed\n",
       VAR_14);
  } else {
   FUNC_0(VAR_13->sc_dev, "%s attached to pseudo interface "
       "%s\n", FUNC_2(VAR_13->miibus[VAR_14]),
       VAR_13->ifp[VAR_14]->if_xname);
  }
 }
 return (VAR_15);
}
