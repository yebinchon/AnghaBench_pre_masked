
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ es_nvlangroups; int es_name; } ;
struct ukswitch_softc {int numports; int phymask; int phyoffset; int cpuport; int media; int callout_tick; void* portphy; void* miibus; void* ifname; void* ifp; TYPE_1__ info; int sc_mtx; int sc_dev; } ;
struct ifnet {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct ukswitch_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (int,int ,int) ;
 int FUNC_9 (int *,char*,int *,int ) ;
 int FUNC_10 (int ,int ,char*,int*) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (struct ukswitch_softc*) ;
 int FUNC_13 (struct ukswitch_softc*) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_4)
{
 struct ukswitch_softc *VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_6(VAR_4);

 VAR_5->sc_dev = VAR_4;
 FUNC_9(&VAR_5->sc_mtx, "ukswitch", ((void*)0), VAR_0);
 FUNC_11(VAR_5->info.es_name, FUNC_4(VAR_4),
     sizeof(VAR_5->info.es_name));


 VAR_5->numports = 6;
 VAR_5->phymask = 0x0f;
 VAR_5->phyoffset = 0;
 VAR_5->cpuport = -1;
 VAR_5->media = 100;

 (void) FUNC_10(FUNC_5(VAR_4), FUNC_7(VAR_4),
     "numports", &VAR_5->numports);
 (void) FUNC_10(FUNC_5(VAR_4), FUNC_7(VAR_4),
     "phymask", &VAR_5->phymask);
 (void) FUNC_10(FUNC_5(VAR_4), FUNC_7(VAR_4),
     "phyoffset", &VAR_5->phyoffset);
 (void) FUNC_10(FUNC_5(VAR_4), FUNC_7(VAR_4),
     "cpuport", &VAR_5->cpuport);
 (void) FUNC_10(FUNC_5(VAR_4), FUNC_7(VAR_4),
     "media", &VAR_5->media);


 if (VAR_5->media != 100 && VAR_5->media != 1000)
  VAR_5->media = 100;

 if (VAR_5->cpuport != -1)

  VAR_5->phymask |= (1 << VAR_5->cpuport);


 VAR_5->info.es_nvlangroups = 0;

 VAR_5->ifp = FUNC_8(sizeof(struct ifnet *) * VAR_5->numports, VAR_1,
     VAR_2 | VAR_3);
 VAR_5->ifname = FUNC_8(sizeof(char *) * VAR_5->numports, VAR_1,
     VAR_2 | VAR_3);
 VAR_5->miibus = FUNC_8(sizeof(device_t *) * VAR_5->numports, VAR_1,
     VAR_2 | VAR_3);
 VAR_5->portphy = FUNC_8(sizeof(int) * VAR_5->numports, VAR_1,
     VAR_2 | VAR_3);




 VAR_6 = FUNC_12(VAR_5);
 if (VAR_6 != 0)
  return (VAR_6);

 FUNC_2(VAR_4);
 FUNC_0(VAR_4);
 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6 != 0)
  return (VAR_6);

 FUNC_3(&VAR_5->callout_tick, 0);

 FUNC_13(VAR_5);

 return (VAR_6);
}
