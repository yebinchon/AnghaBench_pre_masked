
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int es_nports; int es_name; int es_vlan_caps; int es_nvlangroups; } ;
struct rtl8366rb_softc {int numphys; scalar_t__ chip_type; int callout_mtx; int callout_tick; TYPE_2__** ifp; int * miibus; int * ifname; TYPE_1__ info; scalar_t__ phy4cpu; scalar_t__ smi_acquired; int sc_mtx; int dev; } ;
typedef int device_t ;
struct TYPE_6__ {int if_flags; struct rtl8366rb_softc* if_softc; } ;


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
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (int ) ;
 struct rtl8366rb_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,...) ;
 TYPE_2__* FUNC_10 (int ) ;
 int FUNC_11 (TYPE_2__*,int ,int) ;
 int FUNC_12 (scalar_t__,int ,int ) ;
 int FUNC_13 (int ,int *,TYPE_2__*,int ,int ,int ,int,int ,int ) ;
 int FUNC_14 (int *,char*,int *,int ) ;
 int FUNC_15 (int ,int ,char*,scalar_t__*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct rtl8366rb_softc*) ;
 int FUNC_18 (int ,int ,int*,int ) ;
 int FUNC_19 (char*,int,char*,char*) ;
 int FUNC_20 (int ,char*) ;
 scalar_t__ FUNC_21 (char*) ;

__attribute__((used)) static int
FUNC_22(device_t VAR_20)
{
 struct rtl8366rb_softc *VAR_21;
 uint16_t VAR_22 = 0;
 char VAR_23[VAR_7];
 int VAR_24 = 0;
 int VAR_25;

 VAR_21 = FUNC_7(VAR_20);

 VAR_21->dev = VAR_20;
 FUNC_14(&VAR_21->sc_mtx, "rtl8366rb", ((void*)0), VAR_10);
 VAR_21->smi_acquired = 0;
 FUNC_14(&VAR_21->callout_mtx, "rtl8366rbcallout", ((void*)0), VAR_10);

 FUNC_16(VAR_20);
 FUNC_18(VAR_20, VAR_14, &VAR_22, VAR_17);
 FUNC_9(VAR_20, "rev. %d\n", VAR_22 & 0x000f);

 VAR_21->phy4cpu = 0;
 (void) FUNC_15(FUNC_5(VAR_20), FUNC_8(VAR_20),
     "phy4cpu", &VAR_21->phy4cpu);

 VAR_21->numphys = VAR_21->phy4cpu ? VAR_15 - 1 : VAR_15;

 VAR_21->info.es_nports = VAR_21->numphys + 1;
 VAR_21->info.es_nvlangroups = VAR_16;
 VAR_21->info.es_vlan_caps = VAR_2;
 if (VAR_21->chip_type == VAR_13)
  FUNC_20(VAR_21->info.es_name, "Realtek RTL8366RB");
 else
  FUNC_20(VAR_21->info.es_name, "Realtek RTL8366SR");



 for (VAR_25 = 0; VAR_25 < VAR_21->numphys; VAR_25++) {
  VAR_21->ifp[VAR_25] = FUNC_10(VAR_8);
  if (VAR_21->ifp[VAR_25] == ((void*)0)) {
   FUNC_9(VAR_20, "couldn't allocate ifnet structure\n");
   VAR_24 = VAR_1;
   break;
  }

  VAR_21->ifp[VAR_25]->if_softc = VAR_21;
  VAR_21->ifp[VAR_25]->if_flags |= VAR_6 | VAR_3 | VAR_4
   | VAR_5;
  FUNC_19(VAR_23, VAR_7, "%sport", FUNC_6(VAR_20));
  VAR_21->ifname[VAR_25] = FUNC_12(FUNC_21(VAR_23)+1, VAR_11, VAR_12);
  FUNC_0(VAR_23, VAR_21->ifname[VAR_25], FUNC_21(VAR_23)+1);
  FUNC_11(VAR_21->ifp[VAR_25], VAR_21->ifname[VAR_25], VAR_25);
  VAR_24 = FUNC_13(VAR_20, &VAR_21->miibus[VAR_25], VAR_21->ifp[VAR_25], VAR_19, VAR_18, VAR_0, VAR_25, VAR_9, 0);


  if (VAR_24 != 0) {
   FUNC_9(VAR_20, "attaching PHY %d failed\n", VAR_25);
   return (VAR_24);
  }
 }

 FUNC_3(VAR_20);
 FUNC_1(VAR_20);
 VAR_24 = FUNC_2(VAR_20);
 if (VAR_24 != 0)
  return (VAR_24);

 FUNC_4(&VAR_21->callout_tick, &VAR_21->callout_mtx, 0);
 FUNC_17(VAR_21);

 return (VAR_24);
}
