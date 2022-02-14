
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int es_nports; } ;
struct ip17x_softc {int phymask; int* phyport; int* portphy; int numports; TYPE_1__ info; int sc_dev; TYPE_2__** ifp; int ** miibus; } ;
typedef int device_t ;
struct TYPE_6__ {int if_flags; int if_xname; struct ip17x_softc* if_softc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,int ) ;
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
 int VAR_11 ;
 int VAR_12 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int * FUNC_5 (int,int ,int) ;
 int FUNC_6 (int ,int *,TYPE_2__*,int ,int ,int ,int,int ,int ) ;
 int FUNC_7 (char*,int,char*,char*) ;

__attribute__((used)) static int
FUNC_8(struct ip17x_softc *VAR_15)
{
 int VAR_16, VAR_17, VAR_18;
 char VAR_19[VAR_6];

 VAR_18 = VAR_16 = 0;


 FUNC_7(VAR_19, VAR_6, "%sport", FUNC_1(VAR_15->sc_dev));
 for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++) {
  if (((1 << VAR_17) & VAR_15->phymask) == 0)
   continue;
  VAR_15->phyport[VAR_17] = VAR_18;
  VAR_15->portphy[VAR_18] = VAR_17;
  VAR_15->ifp[VAR_18] = FUNC_3(VAR_7);
  if (VAR_15->ifp[VAR_18] == ((void*)0)) {
   FUNC_2(VAR_15->sc_dev, "couldn't allocate ifnet structure\n");
   VAR_16 = VAR_1;
   break;
  }

  VAR_15->ifp[VAR_18]->if_softc = VAR_15;
  VAR_15->ifp[VAR_18]->if_flags |= VAR_5 | VAR_2 |
      VAR_3 | VAR_4;
  FUNC_4(VAR_15->ifp[VAR_18], VAR_19, VAR_18);
  VAR_15->miibus[VAR_18] = FUNC_5(sizeof(device_t), VAR_10,
      VAR_11 | VAR_12);
  VAR_16 = FUNC_6(VAR_15->sc_dev, VAR_15->miibus[VAR_18], VAR_15->ifp[VAR_18],
      VAR_14, VAR_13, VAR_0, VAR_17, VAR_9, 0);

  FUNC_0(VAR_15->sc_dev, "%s attached to pseudo interface %s\n",
      FUNC_1(*VAR_15->miibus[VAR_18]),
      VAR_15->ifp[VAR_18]->if_xname);
  if (VAR_16 != 0) {
   FUNC_2(VAR_15->sc_dev,
       "attaching PHY %d failed\n",
       VAR_17);
   break;
  }
  VAR_15->info.es_nports = VAR_18 + 1;
  if (++VAR_18 >= VAR_15->numports)
   break;
 }
 return (VAR_16);
}
