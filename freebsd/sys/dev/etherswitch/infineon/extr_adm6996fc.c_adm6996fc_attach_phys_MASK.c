
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int es_nports; } ;
struct adm6996fc_softc {int numports; int phymask; int* ifpport; int* portphy; int cpuport; int ** miibus; int ** ifname; TYPE_2__** ifp; int sc_dev; TYPE_1__ info; } ;
typedef int device_t ;
struct TYPE_7__ {int if_flags; int if_xname; struct adm6996fc_softc* if_softc; } ;


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
 int VAR_13 ;
 int FUNC_1 (struct adm6996fc_softc*,int) ;
 int FUNC_2 (int ,int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int *,int ) ;
 TYPE_2__* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,char*,int) ;
 int * FUNC_9 (int,int ,int) ;
 int FUNC_10 (int ,int *,TYPE_2__*,int ,int ,int ,int,int ,int ) ;
 int FUNC_11 (char*,int,char*,char*) ;

__attribute__((used)) static int
FUNC_12(struct adm6996fc_softc *VAR_14)
{
 int VAR_15, VAR_16, VAR_17;
 char VAR_18[VAR_6];

 VAR_16 = 0;
 VAR_17 = 0;

 FUNC_11(VAR_18, VAR_6, "%sport", FUNC_3(VAR_14->sc_dev));
 for (VAR_15 = 0; VAR_15 < VAR_14->numports; VAR_15++) {
  if (((1 << VAR_15) & VAR_14->phymask) == 0)
   continue;
  VAR_14->ifpport[VAR_15] = VAR_16;
  VAR_14->portphy[VAR_16] = VAR_15;
  VAR_14->ifp[VAR_16] = FUNC_6(VAR_7);
  if (VAR_14->ifp[VAR_16] == ((void*)0)) {
   FUNC_4(VAR_14->sc_dev, "couldn't allocate ifnet structure\n");
   VAR_17 = VAR_1;
   break;
  }

  VAR_14->ifp[VAR_16]->if_softc = VAR_14;
  VAR_14->ifp[VAR_16]->if_flags |= VAR_5 | VAR_2 |
      VAR_3 | VAR_4;
  FUNC_8(VAR_14->ifp[VAR_16], VAR_18, VAR_16);
  VAR_14->miibus[VAR_16] = FUNC_9(sizeof(device_t), VAR_9,
      VAR_10 | VAR_11);
  if (VAR_14->miibus[VAR_16] == ((void*)0)) {
   VAR_17 = VAR_1;
   goto failed;
  }
  VAR_17 = FUNC_10(VAR_14->sc_dev, VAR_14->miibus[VAR_16], VAR_14->ifp[VAR_16],
      VAR_13, VAR_12, VAR_0, VAR_15, VAR_8, 0);

  FUNC_0(VAR_14->sc_dev, "%s attached to pseudo interface %s\n",
      FUNC_3(*VAR_14->miibus[VAR_16]),
      VAR_14->ifp[VAR_16]->if_xname);
  if (VAR_17 != 0) {
   FUNC_4(VAR_14->sc_dev,
       "attaching PHY %d failed\n",
       VAR_15);
   goto failed;
  }
  ++VAR_16;
 }
 VAR_14->info.es_nports = VAR_16;
 if (VAR_14->cpuport != -1) {

  VAR_14->ifpport[VAR_14->cpuport] = VAR_16;
  VAR_14->portphy[VAR_16] = VAR_14->cpuport;
  ++VAR_14->info.es_nports;
 }
 return (0);

failed:
 for (VAR_15 = 0; VAR_15 < VAR_14->numports; VAR_15++) {
  if (((1 << VAR_15) & VAR_14->phymask) == 0)
   continue;
  VAR_16 = FUNC_1(VAR_14, VAR_15);
  if (VAR_14->miibus[VAR_16] != ((void*)0))
   FUNC_2(VAR_14->sc_dev, (*VAR_14->miibus[VAR_16]));
  if (VAR_14->ifp[VAR_16] != ((void*)0))
   FUNC_7(VAR_14->ifp[VAR_16]);
  if (VAR_14->ifname[VAR_16] != ((void*)0))
   FUNC_5(VAR_14->ifname[VAR_16], VAR_9);
  if (VAR_14->miibus[VAR_16] != ((void*)0))
   FUNC_5(VAR_14->miibus[VAR_16], VAR_9);
 }
 return (VAR_17);
}
