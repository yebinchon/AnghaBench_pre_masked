
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ifnet {int if_drv_flags; int if_flags; } ;
struct TYPE_6__ {int an_rxmode; int an_len; int an_type; int an_macaddr; } ;
struct TYPE_5__ {int an_len; int an_type; } ;
struct TYPE_4__ {int an_len; int an_type; } ;
struct an_softc {int an_monitor; int an_stat_ch; scalar_t__ mpi350; TYPE_3__ an_config; TYPE_2__ an_aplist; TYPE_1__ an_ssidlist; scalar_t__ an_have_rssimap; struct ifnet* an_ifp; scalar_t__ an_associated; scalar_t__ an_gone; } ;
struct an_ltv_ssidlist_new {int dummy; } ;
struct an_ltv_genconfig {int dummy; } ;
struct an_ltv_gen {int dummy; } ;
struct an_ltv_aplist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct an_softc*) ;
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
 int FUNC_3 (struct an_softc*,int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_4 (struct ifnet*) ;
 scalar_t__ FUNC_5 (struct an_softc*,int ,int) ;
 int FUNC_6 (struct an_softc*) ;
 scalar_t__ FUNC_7 (struct an_softc*) ;
 int FUNC_8 (struct an_softc*) ;
 int VAR_20 ;
 int FUNC_9 (struct an_softc*) ;
 scalar_t__ FUNC_10 (struct an_softc*,struct an_ltv_gen*) ;
 int FUNC_11 (char*,char*,int ) ;
 int FUNC_12 (int *,int ,int ,struct an_softc*) ;
 int VAR_21 ;
 int FUNC_13 (struct ifnet*,char*) ;

__attribute__((used)) static void
FUNC_14(struct an_softc *VAR_22)
{
 struct ifnet *VAR_23;

 FUNC_2(VAR_22);
 VAR_23 = VAR_22->an_ifp;
 if (VAR_22->an_gone)
  return;

 if (VAR_23->if_drv_flags & VAR_17)
  FUNC_9(VAR_22);

 VAR_22->an_associated = 0;


 if (FUNC_7(VAR_22)) {
  FUNC_8(VAR_22);
  if (VAR_22->mpi350)
   FUNC_6(VAR_22);
  if (FUNC_7(VAR_22)) {
   FUNC_13(VAR_23, "tx buffer allocation failed\n");
   return;
  }
 }


 FUNC_11((char *)FUNC_4(VAR_22->an_ifp),
     (char *)&VAR_22->an_config.an_macaddr, VAR_14);

 if (VAR_23->if_flags & VAR_15)
  VAR_22->an_config.an_rxmode = VAR_10;
 else
  VAR_22->an_config.an_rxmode = VAR_9;

 if (VAR_23->if_flags & VAR_18)
  VAR_22->an_config.an_rxmode = VAR_11;

 if (VAR_23->if_flags & VAR_19) {
  if (VAR_22->an_monitor & VAR_2) {
   if (VAR_22->an_monitor & VAR_3) {
    VAR_22->an_config.an_rxmode |=
        VAR_7 |
        VAR_13;
   } else {
    VAR_22->an_config.an_rxmode |=
        VAR_8 |
        VAR_13;
   }
  }
 }







 VAR_22->an_ssidlist.an_type = VAR_6;
 VAR_22->an_ssidlist.an_len = sizeof(struct an_ltv_ssidlist_new);
 if (FUNC_10(VAR_22, (struct an_ltv_gen *)&VAR_22->an_ssidlist)) {
  FUNC_13(VAR_23, "failed to set ssid list\n");
  return;
 }


 VAR_22->an_aplist.an_type = VAR_4;
 VAR_22->an_aplist.an_len = sizeof(struct an_ltv_aplist);
 if (FUNC_10(VAR_22, (struct an_ltv_gen *)&VAR_22->an_aplist)) {
  FUNC_13(VAR_23, "failed to set AP list\n");
  return;
 }


 VAR_22->an_config.an_len = sizeof(struct an_ltv_genconfig);
 VAR_22->an_config.an_type = VAR_5;
 if (FUNC_10(VAR_22, (struct an_ltv_gen *)&VAR_22->an_config)) {
  FUNC_13(VAR_23, "failed to set configuration\n");
  return;
 }


 if (FUNC_5(VAR_22, VAR_0, 0)) {
  FUNC_13(VAR_23, "failed to enable MAC\n");
  return;
 }

 if (VAR_23->if_flags & VAR_19)
  FUNC_5(VAR_22, VAR_1, 0xffff);


 FUNC_3(VAR_22, FUNC_1(VAR_22->mpi350), FUNC_0(VAR_22->mpi350));

 VAR_23->if_drv_flags |= VAR_17;
 VAR_23->if_drv_flags &= ~VAR_16;

 FUNC_12(&VAR_22->an_stat_ch, VAR_21, VAR_20, VAR_22);

 return;
}
