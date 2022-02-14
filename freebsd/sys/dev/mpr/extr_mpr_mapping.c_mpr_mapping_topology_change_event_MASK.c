
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mpr_softc {scalar_t__ pending_map_events; } ;
struct _map_topology_change {int num_entries; struct _map_phy_change* phy_details; int exp_status; int num_phys; int start_phy_num; void* exp_handle; void* enc_handle; } ;
struct _map_phy_change {int reason; void* dev_handle; } ;
struct TYPE_5__ {int NumEntries; TYPE_1__* PHY; int ExpStatus; int NumPhys; int StartPhyNum; int ExpanderDevHandle; int EnclosureHandle; } ;
struct TYPE_4__ {int PhyStatus; int AttachedDevHandle; } ;
typedef TYPE_1__ Mpi2EventSasTopoPhyEntry_t ;
typedef TYPE_2__ Mpi2EventDataSasTopologyChangeList_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mpr_softc*,struct _map_topology_change*) ;
 int FUNC_1 (struct mpr_softc*) ;
 int FUNC_2 (struct mpr_softc*) ;
 int FUNC_3 (struct mpr_softc*,struct _map_topology_change*) ;
 int FUNC_4 (struct mpr_softc*,struct _map_topology_change*) ;
 int FUNC_5 (struct _map_phy_change*,int ) ;
 void* FUNC_6 (int ) ;
 struct _map_phy_change* FUNC_7 (int,int ,int) ;

void
FUNC_8(struct mpr_softc *VAR_4,
    Mpi2EventDataSasTopologyChangeList_t *VAR_5)
{
 struct _map_topology_change VAR_6;
 struct _map_phy_change *VAR_7;
 Mpi2EventSasTopoPhyEntry_t *VAR_8;
 u8 VAR_9, VAR_10;

 VAR_6.enc_handle = FUNC_6(VAR_5->EnclosureHandle);
 VAR_6.exp_handle = FUNC_6(VAR_5->ExpanderDevHandle);
 VAR_10 = VAR_5->NumEntries;
 VAR_6.num_entries = VAR_10;
 VAR_6.start_phy_num = VAR_5->StartPhyNum;
 VAR_6.num_phys = VAR_5->NumPhys;
 VAR_6.exp_status = VAR_5->ExpStatus;
 VAR_8 = VAR_5->PHY;
 VAR_6.phy_details = ((void*)0);

 if (!VAR_10)
  goto out;
 VAR_7 = FUNC_7(sizeof(struct _map_phy_change) * VAR_10,
     VAR_1, VAR_2|VAR_3);
 VAR_6.phy_details = VAR_7;
 if (!VAR_7)
  goto out;
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++, VAR_8++, VAR_7++) {
  VAR_7->dev_handle = FUNC_6(VAR_8->
      AttachedDevHandle);
  VAR_7->reason = VAR_8->PhyStatus &
      VAR_0;
 }
 FUNC_4(VAR_4, &VAR_6);
 FUNC_3(VAR_4, &VAR_6);
 FUNC_1(VAR_4);
 FUNC_0(VAR_4, &VAR_6);

out:
 FUNC_5(VAR_6.phy_details, VAR_1);
 FUNC_2(VAR_4);
 if (VAR_4->pending_map_events)
  VAR_4->pending_map_events--;
}
