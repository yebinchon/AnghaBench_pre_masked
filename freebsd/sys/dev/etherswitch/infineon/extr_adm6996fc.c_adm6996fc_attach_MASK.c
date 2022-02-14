
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {int dummy; } ;
struct TYPE_2__ {int es_nvlangroups; int es_vlan_caps; int es_name; } ;
struct adm6996fc_softc {int numports; int phymask; int cpuport; int media; int * ifp; int * ifname; int * miibus; int * portphy; int callout_tick; TYPE_1__ info; int sc_mtx; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct adm6996fc_softc*) ;
 int FUNC_1 (struct adm6996fc_softc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;
 struct adm6996fc_softc* FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;
 void* FUNC_9 (int,int ,int) ;
 int FUNC_10 (int *,char*,int *,int ) ;
 int FUNC_11 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_7)
{
 struct adm6996fc_softc *VAR_8;
 int VAR_9;

 VAR_9 = 0;
 VAR_8 = FUNC_7(VAR_7);

 VAR_8->sc_dev = VAR_7;
 FUNC_10(&VAR_8->sc_mtx, "adm6996fc", ((void*)0), VAR_3);
 FUNC_11(VAR_8->info.es_name, FUNC_6(VAR_7),
     sizeof(VAR_8->info.es_name));


 VAR_8->numports = 6;
 VAR_8->phymask = 0x1f;
 VAR_8->cpuport = 5;
 VAR_8->media = 100;

 VAR_8->info.es_nvlangroups = 16;
 VAR_8->info.es_vlan_caps = VAR_2 | VAR_1;

 VAR_8->ifp = FUNC_9(sizeof(struct ifnet *) * VAR_8->numports, VAR_4,
     VAR_5 | VAR_6);
 VAR_8->ifname = FUNC_9(sizeof(char *) * VAR_8->numports, VAR_4,
     VAR_5 | VAR_6);
 VAR_8->miibus = FUNC_9(sizeof(device_t *) * VAR_8->numports, VAR_4,
     VAR_5 | VAR_6);
 VAR_8->portphy = FUNC_9(sizeof(int) * VAR_8->numports, VAR_4,
     VAR_5 | VAR_6);

 if (VAR_8->ifp == ((void*)0) || VAR_8->ifname == ((void*)0) || VAR_8->miibus == ((void*)0) ||
     VAR_8->portphy == ((void*)0)) {
  VAR_9 = VAR_0;
  goto failed;
 }




 VAR_9 = FUNC_0(VAR_8);
 if (VAR_9 != 0)
  goto failed;

 FUNC_4(VAR_7);
 FUNC_2(VAR_7);
 VAR_9 = FUNC_3(VAR_7);
 if (VAR_9 != 0)
  goto failed;

 FUNC_5(&VAR_8->callout_tick, 0);

 FUNC_1(VAR_8);

 return (0);

failed:
 if (VAR_8->portphy != ((void*)0))
  FUNC_8(VAR_8->portphy, VAR_4);
 if (VAR_8->miibus != ((void*)0))
  FUNC_8(VAR_8->miibus, VAR_4);
 if (VAR_8->ifname != ((void*)0))
  FUNC_8(VAR_8->ifname, VAR_4);
 if (VAR_8->ifp != ((void*)0))
  FUNC_8(VAR_8->ifp, VAR_4);

 return (VAR_9);
}
