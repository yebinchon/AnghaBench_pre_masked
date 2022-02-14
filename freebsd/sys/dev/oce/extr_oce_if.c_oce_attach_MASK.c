
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_26__ {int rq_frag_size; int bmbx_lock; int dev_lock; int bsmbx; int ifp; void* vlan_detach; void* vlan_attach; int timer; struct TYPE_26__* next; int promisc; int flow_control; int rx_ring_size; int tx_ring_size; } ;
typedef TYPE_1__* POCE_SOFTC ;


 int VAR_0 ;
 int FUNC_0 (int ,void*) ;
 int VAR_1 ;
 void* FUNC_1 (int ,int ,TYPE_1__*,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_6 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_8 ;
 int FUNC_12 (TYPE_1__*,int *) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*) ;
 int VAR_9 ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (TYPE_1__*) ;
 int FUNC_24 (TYPE_1__*) ;
 int VAR_10 ;
 int FUNC_25 (TYPE_1__*) ;
 int FUNC_26 (TYPE_1__*) ;
 int FUNC_27 (TYPE_1__*) ;
 int FUNC_28 (TYPE_1__*) ;
 TYPE_1__* VAR_11 ;
 TYPE_1__* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int
FUNC_29(device_t VAR_15)
{
 POCE_SOFTC VAR_16;
 int VAR_17 = 0;

 VAR_16 = FUNC_7(VAR_15);

 VAR_17 = FUNC_17(VAR_16);
 if (VAR_17)
  return VAR_17;

 VAR_16->tx_ring_size = VAR_5;
 VAR_16->rx_ring_size = VAR_4;

 VAR_16->rq_frag_size = ((VAR_10 / 2048) * 2048);
 VAR_16->flow_control = VAR_2;
 VAR_16->promisc = VAR_3;

 FUNC_2(&VAR_16->bmbx_lock, "Mailbox_lock");
 FUNC_2(&VAR_16->dev_lock, "Device_lock");


 VAR_17 = FUNC_15(VAR_16);
 if (VAR_17)
  goto pci_res_free;

 FUNC_24(VAR_16);

 FUNC_14(VAR_16);

 FUNC_28(VAR_16);

 VAR_17 = FUNC_25(VAR_16);
 if (VAR_17)
  goto mbox_free;

 VAR_17 = FUNC_22(VAR_16);
 if (VAR_17)
  goto intr_free;

 VAR_17 = FUNC_11(VAR_16);
 if (VAR_17)
  goto queues_free;







 VAR_17 = FUNC_19(VAR_16);
 if (VAR_17)
  goto lro_free;

 VAR_16->vlan_attach = FUNC_1(VAR_13,
    VAR_7, VAR_16, VAR_1);
 VAR_16->vlan_detach = FUNC_1(VAR_14,
    VAR_8, VAR_16, VAR_1);

 VAR_17 = FUNC_27(VAR_16);
 if (VAR_17)
  goto vlan_free;

 FUNC_10(VAR_16);

 FUNC_5(&VAR_16->timer, VAR_0);
 VAR_17 = FUNC_6(&VAR_16->timer, 2 * VAR_6, VAR_9, VAR_16);
 if (VAR_17)
  goto stats_free;

 VAR_16->next =((void*)0);
 if (VAR_12 != ((void*)0)) {
   VAR_12->next = VAR_16;
 } else {
   VAR_11 = VAR_16;
 }
 VAR_12 = VAR_16;

 return 0;

stats_free:
 FUNC_4(&VAR_16->timer);
 FUNC_26(VAR_16);
vlan_free:
 if (VAR_16->vlan_attach)
  FUNC_0(VAR_13, VAR_16->vlan_attach);
 if (VAR_16->vlan_detach)
  FUNC_0(VAR_14, VAR_16->vlan_detach);
 FUNC_16(VAR_16);
lro_free:




 FUNC_8(VAR_16->ifp);
 FUNC_9(VAR_16->ifp);
queues_free:
 FUNC_23(VAR_16);
intr_free:
 FUNC_21(VAR_16);
mbox_free:
 FUNC_12(VAR_16, &VAR_16->bsmbx);
pci_res_free:
 FUNC_18(VAR_16);
 FUNC_3(&VAR_16->dev_lock);
 FUNC_3(&VAR_16->bmbx_lock);
 return VAR_17;

}
