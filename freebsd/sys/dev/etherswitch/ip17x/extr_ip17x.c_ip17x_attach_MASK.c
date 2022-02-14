
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int (* ip17x_set_vlan_mode ) (struct ip17x_softc*,int ) ;int (* ip17x_reset ) (struct ip17x_softc*) ;} ;
struct TYPE_3__ {int es_nvlangroups; int es_name; } ;
struct ip17x_softc {int phymask; int media; int cpuport; int numports; int callout_tick; scalar_t__ miipoll; TYPE_2__ hal; void* portphy; void* miibus; void* pvid; void* ifp; TYPE_1__ info; int sc_mtx; int sc_dev; } ;
struct ifnet {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ip17x_softc*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct ip17x_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct ip17x_softc*) ;
 int FUNC_10 (struct ip17x_softc*) ;
 int FUNC_11 (struct ip17x_softc*) ;
 int FUNC_12 (struct ip17x_softc*) ;
 void* FUNC_13 (int,int ,int) ;
 int FUNC_14 (int *,char*,int *,int ) ;
 int FUNC_15 (int ,int ,char*,int*) ;
 int FUNC_16 (int ,int ,int) ;
 int FUNC_17 (struct ip17x_softc*) ;
 int FUNC_18 (struct ip17x_softc*,int ) ;

__attribute__((used)) static int
FUNC_19(device_t VAR_9)
{
 struct ip17x_softc *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_7(VAR_9);

 VAR_10->sc_dev = VAR_9;
 FUNC_14(&VAR_10->sc_mtx, "ip17x", ((void*)0), VAR_5);
 FUNC_16(VAR_10->info.es_name, FUNC_5(VAR_9),
     sizeof(VAR_10->info.es_name));


 VAR_10->phymask = 0x0f;
 VAR_10->media = 100;

 (void) FUNC_15(FUNC_6(VAR_9), FUNC_8(VAR_9),
     "phymask", &VAR_10->phymask);


 VAR_10->info.es_nvlangroups = VAR_4;


 if (FUNC_0(VAR_10, VAR_2))
  FUNC_9(VAR_10);
 else if (FUNC_0(VAR_10, VAR_3))
  FUNC_10(VAR_10);
 else

  return (VAR_0);


 VAR_10->phymask |= (1 << VAR_10->cpuport);

 VAR_10->ifp = FUNC_13(sizeof(struct ifnet *) * VAR_10->numports, VAR_6,
     VAR_7 | VAR_8);
 VAR_10->pvid = FUNC_13(sizeof(uint32_t) * VAR_10->numports, VAR_6,
     VAR_7 | VAR_8);
 VAR_10->miibus = FUNC_13(sizeof(device_t *) * VAR_10->numports, VAR_6,
     VAR_7 | VAR_8);
 VAR_10->portphy = FUNC_13(sizeof(int) * VAR_10->numports, VAR_6,
     VAR_7 | VAR_8);


 VAR_10->hal.ip17x_reset(VAR_10);




 VAR_11 = FUNC_11(VAR_10);
 if (VAR_11 != 0)
  return (VAR_11);





 VAR_10->hal.ip17x_set_vlan_mode(VAR_10, VAR_1);

 FUNC_3(VAR_9);
 FUNC_1(VAR_9);
 VAR_11 = FUNC_2(VAR_9);
 if (VAR_11 != 0)
  return (VAR_11);

 if (VAR_10->miipoll) {
  FUNC_4(&VAR_10->callout_tick, 0);

  FUNC_12(VAR_10);
 }

 return (0);
}
