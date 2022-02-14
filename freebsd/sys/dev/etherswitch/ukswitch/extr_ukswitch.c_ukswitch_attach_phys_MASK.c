
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int es_nports; } ;
struct ukswitch_softc {int phymask; int* ifpport; int* portphy; int numports; TYPE_1__ info; int sc_dev; TYPE_2__** ifp; int ** miibus; scalar_t__ phyoffset; void** ifname; } ;
typedef int device_t ;
struct TYPE_6__ {int if_flags; int if_xname; struct ukswitch_softc* if_softc; } ;


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
 int FUNC_1 (char*,void*,int) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,void*,int) ;
 void* FUNC_6 (int,int ,int) ;
 int FUNC_7 (int ,int *,TYPE_2__*,int ,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_8 (char*,int,char*,char*) ;
 int FUNC_9 (char*) ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int
FUNC_10(struct ukswitch_softc *VAR_15)
{
 int VAR_16, VAR_17 = 0, VAR_18 = 0;
 char VAR_19[VAR_6];


 FUNC_8(VAR_19, VAR_6, "%sport", FUNC_2(VAR_15->sc_dev));
 for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++) {
  if (((1 << VAR_16) & VAR_15->phymask) == 0)
   continue;
  VAR_15->ifpport[VAR_16] = VAR_17;
  VAR_15->portphy[VAR_17] = VAR_16;
  VAR_15->ifp[VAR_17] = FUNC_4(VAR_7);
  if (VAR_15->ifp[VAR_17] == ((void*)0)) {
   FUNC_3(VAR_15->sc_dev, "couldn't allocate ifnet structure\n");
   VAR_18 = VAR_1;
   break;
  }

  VAR_15->ifp[VAR_17]->if_softc = VAR_15;
  VAR_15->ifp[VAR_17]->if_flags |= VAR_5 | VAR_2 |
      VAR_3 | VAR_4;
  VAR_15->ifname[VAR_17] = FUNC_6(FUNC_9(VAR_19)+1, VAR_10, VAR_11);
  FUNC_1(VAR_19, VAR_15->ifname[VAR_17], FUNC_9(VAR_19)+1);
  FUNC_5(VAR_15->ifp[VAR_17], VAR_15->ifname[VAR_17], VAR_17);
  VAR_15->miibus[VAR_17] = FUNC_6(sizeof(device_t), VAR_10,
      VAR_11 | VAR_12);
  VAR_18 = FUNC_7(VAR_15->sc_dev, VAR_15->miibus[VAR_17], VAR_15->ifp[VAR_17],
      VAR_14, VAR_13, VAR_0, VAR_16 + VAR_15->phyoffset, VAR_9, 0);

  FUNC_0(VAR_15->sc_dev, "%s attached to pseudo interface %s\n",
      FUNC_2(*VAR_15->miibus[VAR_17]),
      VAR_15->ifp[VAR_17]->if_xname);
  if (VAR_18 != 0) {
   FUNC_3(VAR_15->sc_dev,
       "attaching PHY %d failed\n",
       VAR_16);
   break;
  }
  VAR_15->info.es_nports = VAR_17 + 1;
  if (++VAR_17 >= VAR_15->numports)
   break;
 }
 return (VAR_18);
}
