
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ndis_softc {scalar_t__ ndis_iftype; int ndis_maxpkts; int ndis_txpending; int ndis_oidcnt; scalar_t__* ndis_oids; int ndis_80211; scalar_t__ ndis_sc; int * ndis_txpool; int ndis_txarray; TYPE_2__* ndis_block; int ndis_rxdpc; void* ndisusb_taskitem; void* ndisusb_xferdoneitem; void* ndis_inputitem; void* ndis_resetitem; void* ndis_startitem; void* ndis_tickitem; TYPE_1__* ndis_chars; int ndis_dobj; int ndis_rxqueue; int ndis_stat_callout; int ndisusb_xferdonelist; int ndisusb_tasklist; int ndis_shlist; int ndisusb_xferdonelock; int ndisusb_tasklock; int ndis_rxlock; int ndis_mtx; } ;
typedef int ndis_packet ;
typedef int driver_object ;
typedef int device_t ;
typedef int device_object ;
struct TYPE_5__ {int nmb_deviceobj; int nmb_statusdone_func; int nmb_status_func; int nmb_tdcond_func; int nmb_ethrxdone_func; int nmb_ethrxindicate_func; int nmb_pktind_func; int nmb_senddone_func; int * nmb_rlist; } ;
struct TYPE_4__ {int nmc_version_minor; int nmc_version_major; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int*,int **,int,int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int ) ;
 struct ndis_softc* FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (int,int ,int) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ,int ,int ) ;
 int FUNC_15 (struct ndis_softc*) ;
 int FUNC_16 (struct ndis_softc*) ;
 int FUNC_17 (struct ndis_softc*) ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (struct ndis_softc*,int ,int*,int*) ;
 int FUNC_20 (struct ndis_softc*,scalar_t__**,int*) ;
 int FUNC_21 (struct ndis_softc*) ;
 int FUNC_22 (struct ndis_softc*) ;
 int FUNC_23 (struct ndis_softc*) ;
 scalar_t__ FUNC_24 (struct ndis_softc*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int * FUNC_25 (int *,int ) ;
 int * FUNC_26 (int ,char*) ;

int
FUNC_27(device_t VAR_26)
{
 struct ndis_softc *VAR_27;
 driver_object *VAR_28;
 device_object *VAR_29;
 int VAR_30 = 0, VAR_31;
 int VAR_32;

 VAR_27 = FUNC_10(VAR_26);

 FUNC_14(&VAR_27->ndis_mtx, FUNC_9(VAR_26), VAR_4,
     VAR_3);
 FUNC_4(&VAR_27->ndis_rxlock);
 FUNC_4(&VAR_27->ndisusb_tasklock);
 FUNC_4(&VAR_27->ndisusb_xferdonelock);
 FUNC_1(&VAR_27->ndis_shlist);
 FUNC_1(&VAR_27->ndisusb_tasklist);
 FUNC_1(&VAR_27->ndisusb_xferdonelist);
 FUNC_8(&VAR_27->ndis_stat_callout, 1);
 FUNC_13(&VAR_27->ndis_rxqueue, VAR_2);


 FUNC_17(VAR_27);



 if (VAR_27->ndis_iftype == VAR_12)
  VAR_28 = FUNC_26(0, "PCI Bus");
 else if (VAR_27->ndis_iftype == VAR_13)
  VAR_28 = FUNC_26(0, "PCCARD Bus");
 else
  VAR_28 = FUNC_26(0, "USB Bus");
 VAR_29 = FUNC_25(VAR_28, VAR_26);







 if (FUNC_6(VAR_27->ndis_dobj, VAR_29) != VAR_16) {
  FUNC_11(VAR_26, "failed to create FDO!\n");
  VAR_30 = VAR_1;
  goto fail;
 }


 FUNC_11(VAR_26, "NDIS API version: %d.%d\n",
     VAR_27->ndis_chars->nmc_version_major,
     VAR_27->ndis_chars->nmc_version_minor);


 if (VAR_27->ndis_iftype == VAR_13 || VAR_27->ndis_iftype == VAR_12)
  FUNC_16(VAR_27);
 else
  VAR_27->ndis_block->nmb_rlist = ((void*)0);


 VAR_27->ndis_block->nmb_senddone_func = VAR_24;
 VAR_27->ndis_block->nmb_pktind_func = VAR_21;
 VAR_27->ndis_block->nmb_ethrxindicate_func = VAR_20;
 VAR_27->ndis_block->nmb_ethrxdone_func = VAR_19;
 VAR_27->ndis_block->nmb_tdcond_func = VAR_22;


 VAR_27->ndis_block->nmb_status_func = VAR_18;
 VAR_27->ndis_block->nmb_statusdone_func = VAR_17;


 VAR_27->ndis_tickitem = FUNC_2(VAR_27->ndis_block->nmb_deviceobj);
 VAR_27->ndis_startitem = FUNC_2(VAR_27->ndis_block->nmb_deviceobj);
 VAR_27->ndis_resetitem = FUNC_2(VAR_27->ndis_block->nmb_deviceobj);
 VAR_27->ndis_inputitem = FUNC_2(VAR_27->ndis_block->nmb_deviceobj);
 VAR_27->ndisusb_xferdoneitem =
     FUNC_2(VAR_27->ndis_block->nmb_deviceobj);
 VAR_27->ndisusb_taskitem =
     FUNC_2(VAR_27->ndis_block->nmb_deviceobj);
 FUNC_3(&VAR_27->ndis_rxdpc, VAR_23, VAR_27->ndis_block);


 if (FUNC_24(VAR_27)) {
  FUNC_11(VAR_26, "init handler failed\n");
  VAR_30 = VAR_1;
  goto fail;
 }




 VAR_31 = sizeof(VAR_27->ndis_maxpkts);
 if (FUNC_19(VAR_27, VAR_11,
      &VAR_27->ndis_maxpkts, &VAR_31)) {
  FUNC_11(VAR_26, "failed to get max TX packets\n");
  VAR_30 = VAR_1;
  goto fail;
 }





 if (!FUNC_5(VAR_27->ndis_block))
  VAR_27->ndis_maxpkts = VAR_9;



 if (VAR_27->ndis_maxpkts == 0)
  VAR_27->ndis_maxpkts = 10;

 VAR_27->ndis_txarray = FUNC_12(sizeof(ndis_packet *) *
     VAR_27->ndis_maxpkts, VAR_5, VAR_6|VAR_7);



 FUNC_7(&VAR_32, &VAR_27->ndis_txpool,
     VAR_27->ndis_maxpkts, VAR_15);

 if (VAR_32 != VAR_8) {
  VAR_27->ndis_txpool = ((void*)0);
  FUNC_11(VAR_26, "failed to allocate TX packet pool");
  VAR_30 = VAR_0;
  goto fail;
 }

 VAR_27->ndis_txpending = VAR_27->ndis_maxpkts;

 VAR_27->ndis_oidcnt = 0;

 FUNC_20(VAR_27, &VAR_27->ndis_oids, &VAR_27->ndis_oidcnt);


 if (VAR_27->ndis_sc)
  FUNC_23(VAR_27);






 for (VAR_32 = 0; VAR_32 < VAR_27->ndis_oidcnt; VAR_32++)
  if (VAR_27->ndis_oids[VAR_32] == VAR_10) {
   VAR_27->ndis_80211 = 1;
   break;
  }

 if (VAR_27->ndis_80211)
  VAR_30 = FUNC_15(VAR_27);
 else
  VAR_30 = FUNC_22(VAR_27);

fail:
 if (VAR_30) {
  FUNC_18(VAR_26);
  return (VAR_30);
 }

 if (VAR_27->ndis_iftype == VAR_14 && VAR_25 == 0)
  return (VAR_30);

 FUNC_0(("attach done.\n"));

 FUNC_21(VAR_27);
 FUNC_0(("halting done.\n"));

 return (VAR_30);
}
