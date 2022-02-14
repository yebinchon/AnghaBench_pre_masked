
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mpr_softc {scalar_t__ pending_map_events; } ;
struct _map_port_change {int reason; void* dev_handle; } ;
struct _map_pcie_topology_change {int num_entries; struct _map_port_change* port_details; int switch_status; int num_ports; int start_port_num; void* enc_handle; void* switch_dev_handle; } ;
struct TYPE_5__ {int NumEntries; TYPE_1__* PortEntry; int SwitchStatus; int NumPorts; int StartPortNum; int EnclosureHandle; int SwitchDevHandle; } ;
struct TYPE_4__ {int PortStatus; int AttachedDevHandle; } ;
typedef TYPE_1__ Mpi26EventPCIeTopoPortEntry_t ;
typedef TYPE_2__ Mpi26EventDataPCIeTopologyChangeList_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mpr_softc*,struct _map_pcie_topology_change*) ;
 int FUNC_1 (struct mpr_softc*) ;
 int FUNC_2 (struct mpr_softc*) ;
 int FUNC_3 (struct mpr_softc*,struct _map_pcie_topology_change*) ;
 int FUNC_4 (struct mpr_softc*,struct _map_pcie_topology_change*) ;
 int FUNC_5 (struct _map_port_change*,int ) ;
 void* FUNC_6 (int ) ;
 struct _map_port_change* FUNC_7 (int,int ,int) ;

void
FUNC_8(struct mpr_softc *VAR_3,
    Mpi26EventDataPCIeTopologyChangeList_t *VAR_4)
{
 struct _map_pcie_topology_change VAR_5;
 struct _map_port_change *VAR_6;
 Mpi26EventPCIeTopoPortEntry_t *VAR_7;
 u8 VAR_8, VAR_9;

 VAR_5.switch_dev_handle = FUNC_6(VAR_4->SwitchDevHandle);
 VAR_5.enc_handle = FUNC_6(VAR_4->EnclosureHandle);
 VAR_9 = VAR_4->NumEntries;
 VAR_5.num_entries = VAR_9;
 VAR_5.start_port_num = VAR_4->StartPortNum;
 VAR_5.num_ports = VAR_4->NumPorts;
 VAR_5.switch_status = VAR_4->SwitchStatus;
 VAR_7 = VAR_4->PortEntry;
 VAR_5.port_details = ((void*)0);

 if (!VAR_9)
  goto out;
 VAR_6 = FUNC_7(sizeof(struct _map_port_change) * VAR_9,
     VAR_0, VAR_1|VAR_2);
 VAR_5.port_details = VAR_6;
 if (!VAR_6)
  goto out;
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++, VAR_7++, VAR_6++) {
  VAR_6->dev_handle = FUNC_6(VAR_7->
      AttachedDevHandle);
  VAR_6->reason = VAR_7->PortStatus;
 }
 FUNC_4(VAR_3, &VAR_5);
 FUNC_3(VAR_3, &VAR_5);
 FUNC_1(VAR_3);
 FUNC_0(VAR_3, &VAR_5);

out:
 FUNC_5(VAR_5.port_details, VAR_0);
 FUNC_2(VAR_3);
 if (VAR_3->pending_map_events)
  VAR_3->pending_map_events--;
}
