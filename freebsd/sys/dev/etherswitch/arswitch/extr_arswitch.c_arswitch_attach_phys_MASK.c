
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct arswitch_softc {int numphys; TYPE_1__** dev_led; int sc_dev; TYPE_2__** ifp; int * miibus; int * ifname; } ;
struct TYPE_6__ {int if_flags; int if_xname; struct arswitch_softc* if_softc; } ;
struct TYPE_5__ {int phy; int lednum; struct arswitch_softc* sc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct arswitch_softc*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,char*,int ) ;
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
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ,scalar_t__) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 TYPE_2__* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 int FUNC_8 (scalar_t__,int ,int ) ;
 int FUNC_9 (int ,int *,TYPE_2__*,int ,int ,int ,int,int ,int ) ;
 int FUNC_10 (char*,int,char*,char*) ;
 int FUNC_11 (char*,char*,char*,int,int) ;
 scalar_t__ FUNC_12 (char*) ;

__attribute__((used)) static int
FUNC_13(struct arswitch_softc *VAR_14)
{
 int VAR_15, VAR_16 = 0;
 char VAR_17[VAR_7];


 FUNC_10(VAR_17, VAR_7, "%sport", FUNC_4(VAR_14->sc_dev));
 for (VAR_15 = 0; VAR_15 < VAR_14->numphys; VAR_15++) {
  VAR_14->ifp[VAR_15] = FUNC_6(VAR_8);
  if (VAR_14->ifp[VAR_15] == ((void*)0)) {
   FUNC_5(VAR_14->sc_dev, "couldn't allocate ifnet structure\n");
   VAR_16 = VAR_2;
   break;
  }

  VAR_14->ifp[VAR_15]->if_softc = VAR_14;
  VAR_14->ifp[VAR_15]->if_flags |= VAR_6 | VAR_3 |
      VAR_4 | VAR_5;
  VAR_14->ifname[VAR_15] = FUNC_8(FUNC_12(VAR_17)+1, VAR_10, VAR_11);
  FUNC_3(VAR_17, VAR_14->ifname[VAR_15], FUNC_12(VAR_17)+1);
  FUNC_7(VAR_14->ifp[VAR_15], VAR_14->ifname[VAR_15],
      FUNC_2(VAR_15));
  VAR_16 = FUNC_9(VAR_14->sc_dev, &VAR_14->miibus[VAR_15], VAR_14->ifp[VAR_15],
      VAR_13, VAR_12, VAR_1, VAR_15, VAR_9, 0);






  if (VAR_16 != 0) {
   FUNC_5(VAR_14->sc_dev,
       "attaching PHY %d failed\n",
       VAR_15);
   return (VAR_16);
  }

  if (FUNC_0(VAR_14, VAR_0)) {
   int VAR_18;
   char VAR_19[VAR_7+4];

   for (VAR_18 = 0; VAR_18 < 3; VAR_18++) {
    FUNC_11(VAR_19, "%s%dled%d", VAR_17,
        FUNC_2(VAR_15), VAR_18+1);
    VAR_14->dev_led[VAR_15][VAR_18].sc = VAR_14;
    VAR_14->dev_led[VAR_15][VAR_18].phy = VAR_15;
    VAR_14->dev_led[VAR_15][VAR_18].lednum = VAR_18;
   }
  }
 }
 return (0);
}
