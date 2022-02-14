
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_31__ {scalar_t__ rx_next; int prod_std; scalar_t__ rx_in; } ;
typedef TYPE_6__ qla_rdesc_t ;
struct TYPE_28__ {int init_intr_cnxt; int unicast_mac; int bcast_mac; } ;
struct TYPE_27__ {TYPE_1__* sds_ring; } ;
struct TYPE_30__ {size_t num_sds_rings; size_t num_rds_rings; int* mac_addr; int enable_soft_lro; int rcv_cntxt_id; scalar_t__ enable_hw_lro; TYPE_3__ flags; scalar_t__ max_tx_segs; TYPE_6__* rds; TYPE_2__ dma_buf; } ;
struct TYPE_32__ {TYPE_5__ hw; TYPE_4__* ifp; int max_frame_size; int pci_dev; } ;
typedef TYPE_7__ qla_host_t ;
typedef int device_t ;
struct TYPE_29__ {int if_capenable; } ;
struct TYPE_26__ {int size; int dma_b; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (TYPE_7__*,size_t) ;
 int FUNC_1 (TYPE_7__*,int ,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_7__*,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_7__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_7__*,size_t,size_t,int) ;
 scalar_t__ FUNC_6 (TYPE_7__*,int ,int ,int) ;
 scalar_t__ FUNC_7 (TYPE_7__*,int*,int,int) ;
 scalar_t__ FUNC_8 (TYPE_7__*,int ) ;
 scalar_t__ FUNC_9 (TYPE_7__*) ;
 scalar_t__ FUNC_10 (TYPE_7__*) ;
 int FUNC_11 (TYPE_7__*) ;
 scalar_t__ FUNC_12 (TYPE_7__*) ;
 scalar_t__ FUNC_13 (TYPE_7__*) ;
 scalar_t__ FUNC_14 (TYPE_7__*) ;
 scalar_t__ FUNC_15 (TYPE_7__*) ;
 scalar_t__ FUNC_16 (TYPE_7__*,int ) ;
 scalar_t__ FUNC_17 (TYPE_7__*) ;

int
FUNC_18(qla_host_t *VAR_3)
{
 device_t VAR_4;
 uint32_t VAR_5;
 uint8_t VAR_6[6];
 qla_rdesc_t *VAR_7;
 uint32_t VAR_8;

 VAR_4 = VAR_3->pci_dev;

 for (VAR_5 = 0; VAR_5 < VAR_3->hw.num_sds_rings; VAR_5++) {
  FUNC_2(VAR_3->hw.dma_buf.sds_ring[VAR_5].dma_b,
   VAR_3->hw.dma_buf.sds_ring[VAR_5].size);
 }

 for (VAR_5 = 0; VAR_5 < VAR_3->hw.num_sds_rings; ) {

  if ((VAR_5 + VAR_2) < VAR_3->hw.num_sds_rings)
   VAR_8 = VAR_2;
  else
   VAR_8 = VAR_3->hw.num_sds_rings - VAR_5;

  if (FUNC_5(VAR_3, VAR_5, VAR_8, 1)) {

   if (VAR_5 > 0) {

    VAR_8 = VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_8; ) {
     FUNC_5(VAR_3, VAR_5,
      VAR_2, 0);
     VAR_5 += VAR_2;
    }
   }
   return (-1);
  }

  VAR_5 = VAR_5 + VAR_8;
 }

        VAR_3->hw.flags.init_intr_cnxt = 1;




 if (FUNC_14(VAR_3)) {
  return (-1);
 }

 for (VAR_5 = 0; VAR_5 < VAR_3->hw.num_rds_rings; VAR_5++) {
  VAR_7 = &VAR_3->hw.rds[VAR_5];
  VAR_7->rx_next = VAR_1 - 2;
  VAR_7->rx_in = 0;

  FUNC_1(VAR_3, VAR_7->prod_std, VAR_7->rx_next);

 }




 if (FUNC_15(VAR_3)) {
  FUNC_11(VAR_3);
  return (-1);
 }
 VAR_3->hw.max_tx_segs = 0;

 if (FUNC_7(VAR_3, VAR_3->hw.mac_addr, 1, 1))
  return(-1);

 VAR_3->hw.flags.unicast_mac = 1;

 VAR_6[0] = 0xFF; VAR_6[1] = 0xFF; VAR_6[2] = 0xFF;
 VAR_6[3] = 0xFF; VAR_6[4] = 0xFF; VAR_6[5] = 0xFF;

 if (FUNC_7(VAR_3, VAR_6, 1, 1))
  return (-1);

 VAR_3->hw.flags.bcast_mac = 1;




 if (FUNC_12(VAR_3))
  return (-1);

 if (FUNC_3(VAR_3, VAR_3->max_frame_size, VAR_3->hw.rcv_cntxt_id))
  return (-1);

 if (FUNC_8(VAR_3, VAR_3->hw.rcv_cntxt_id))
  return (-1);

 if (FUNC_9(VAR_3))
  return (-1);

 if (FUNC_6(VAR_3, VAR_3->hw.rcv_cntxt_id, 0, 1))
  return (-1);

 if (FUNC_16(VAR_3, VAR_3->hw.rcv_cntxt_id))
  return (-1);

 if (VAR_3->ifp->if_capenable & VAR_0) {
  if (VAR_3->hw.enable_hw_lro) {
   VAR_3->hw.enable_soft_lro = 0;

   if (FUNC_4(VAR_3, VAR_3->hw.rcv_cntxt_id))
    return (-1);
  } else {
   VAR_3->hw.enable_soft_lro = 1;

   if (FUNC_10(VAR_3))
    return (-1);
  }
 }

        if (FUNC_13(VAR_3))
                return (-1);

        if (FUNC_17(VAR_3))
                return (-1);

 for (VAR_5 = 0; VAR_5 < VAR_3->hw.num_sds_rings; VAR_5++)
  FUNC_0(VAR_3, VAR_5);

 return (0);
}
