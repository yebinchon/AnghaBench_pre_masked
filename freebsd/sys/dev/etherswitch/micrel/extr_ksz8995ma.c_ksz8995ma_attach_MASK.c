
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int es_nvlangroups; int es_vlan_caps; int es_name; } ;
struct ksz8995ma_softc {int numports; int phymask; int cpuport; int media; int * ifp; int * ifname; int * miibus; int * portphy; scalar_t__ vlan_mode; int callout_tick; TYPE_1__ info; int sc_mtx; int sc_dev; } ;
struct ifnet {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct ksz8995ma_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct ksz8995ma_softc*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct ksz8995ma_softc*) ;
 int FUNC_13 (int ,int ,int) ;
 void* FUNC_14 (int,int ,int) ;
 int FUNC_15 (int *,char*,int *,int ) ;
 int FUNC_16 (int ,int ,char*,int*) ;
 int FUNC_17 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_12)
{
 struct ksz8995ma_softc *VAR_13;
 int VAR_14, VAR_15;

 VAR_14 = 0;
 VAR_13 = FUNC_6(VAR_12);

 VAR_13->sc_dev = VAR_12;
 FUNC_15(&VAR_13->sc_mtx, "ksz8995ma", ((void*)0), VAR_8);
 FUNC_17(VAR_13->info.es_name, FUNC_4(VAR_12),
     sizeof(VAR_13->info.es_name));


 VAR_13->numports = VAR_5;
 VAR_13->phymask = (1 << (VAR_5 + 1)) - 1;
 VAR_13->cpuport = -1;
 VAR_13->media = 100;

 (void) FUNC_16(FUNC_5(VAR_12), FUNC_7(VAR_12),
     "cpuport", &VAR_13->cpuport);

 VAR_13->info.es_nvlangroups = 16;
 VAR_13->info.es_vlan_caps = VAR_2 | VAR_1;

 VAR_13->ifp = FUNC_14(sizeof(struct ifnet *) * VAR_13->numports, VAR_9,
     VAR_10 | VAR_11);
 VAR_13->ifname = FUNC_14(sizeof(char *) * VAR_13->numports, VAR_9,
     VAR_10 | VAR_11);
 VAR_13->miibus = FUNC_14(sizeof(device_t *) * VAR_13->numports, VAR_9,
     VAR_10 | VAR_11);
 VAR_13->portphy = FUNC_14(sizeof(int) * VAR_13->numports, VAR_9,
     VAR_10 | VAR_11);

 if (VAR_13->ifp == ((void*)0) || VAR_13->ifname == ((void*)0) || VAR_13->miibus == ((void*)0) ||
     VAR_13->portphy == ((void*)0)) {
  VAR_14 = VAR_0;
  goto failed;
 }




 VAR_14 = FUNC_9(VAR_13);
 if (VAR_14 != 0)
  goto failed;

 FUNC_2(VAR_12);
 FUNC_0(VAR_12);
 VAR_14 = FUNC_1(VAR_12);
 if (VAR_14 != 0)
  goto failed;

 FUNC_3(&VAR_13->callout_tick, 0);

 FUNC_12(VAR_13);


 VAR_13->vlan_mode = 0;
 VAR_15 = FUNC_11(VAR_12, VAR_4);
 FUNC_13(VAR_12, VAR_4,
     VAR_15 & ~VAR_7);
 FUNC_10(VAR_12);
 FUNC_13(VAR_12, VAR_3, VAR_6);

 return (0);

failed:
 if (VAR_13->portphy != ((void*)0))
  FUNC_8(VAR_13->portphy, VAR_9);
 if (VAR_13->miibus != ((void*)0))
  FUNC_8(VAR_13->miibus, VAR_9);
 if (VAR_13->ifname != ((void*)0))
  FUNC_8(VAR_13->ifname, VAR_9);
 if (VAR_13->ifp != ((void*)0))
  FUNC_8(VAR_13->ifp, VAR_9);

 return (VAR_14);
}
