
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_18__ {TYPE_1__* sds_ring; } ;
struct TYPE_21__ {int num_sds_rings; int* mac_addr; TYPE_4__* rx_cntxt_rsp; scalar_t__ rxj_next; scalar_t__ rx_next; scalar_t__ rxj_in; scalar_t__ rx_in; TYPE_2__ dma_buf; } ;
struct TYPE_22__ {TYPE_5__ hw; int pci_dev; } ;
typedef TYPE_6__ qla_host_t ;
typedef int device_t ;
struct TYPE_19__ {int cntxt_id; } ;
struct TYPE_20__ {TYPE_3__ rx_rsp; } ;
struct TYPE_17__ {int size; int dma_b; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_6__*,int) ;
 int FUNC_1 (TYPE_6__*,int,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_6__*,int ,int ) ;
 int FUNC_4 (TYPE_6__*,int*,int ,int) ;
 int FUNC_5 (TYPE_6__*,int ) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*) ;
 scalar_t__ FUNC_8 (TYPE_6__*) ;
 scalar_t__ FUNC_9 (TYPE_6__*) ;

int
FUNC_10(qla_host_t *VAR_2)
{
 device_t VAR_3;
 int VAR_4;
 uint8_t VAR_5[6];

 FUNC_7(VAR_2);

 VAR_3 = VAR_2->pci_dev;

 for (VAR_4 = 0; VAR_4 < VAR_2->hw.num_sds_rings; VAR_4++) {
  FUNC_2(VAR_2->hw.dma_buf.sds_ring[VAR_4].dma_b,
   VAR_2->hw.dma_buf.sds_ring[VAR_4].size);
 }



 if (FUNC_8(VAR_2)) {
  return (-1);
 }

 VAR_2->hw.rx_next = VAR_0 - 2;
 VAR_2->hw.rxj_next = VAR_1 - 2;
 VAR_2->hw.rx_in = VAR_2->hw.rxj_in = 0;


 FUNC_1(VAR_2, 0, VAR_2->hw.rx_next);
 FUNC_1(VAR_2, 1, VAR_2->hw.rxj_next);




 if (FUNC_9(VAR_2)) {
  FUNC_6(VAR_2);
  return (-1);
 }

 FUNC_4(VAR_2, VAR_2->hw.mac_addr,
  (VAR_2->hw.rx_cntxt_rsp)->rx_rsp.cntxt_id, 1);

 VAR_5[0] = 0xFF; VAR_5[1] = 0xFF; VAR_5[2] = 0xFF;
 VAR_5[3] = 0xFF; VAR_5[4] = 0xFF; VAR_5[5] = 0xFF;
 FUNC_4(VAR_2, VAR_5,
  (VAR_2->hw.rx_cntxt_rsp)->rx_rsp.cntxt_id, 1);

 FUNC_5(VAR_2, (VAR_2->hw.rx_cntxt_rsp)->rx_rsp.cntxt_id);

 FUNC_3(VAR_2, (VAR_2->hw.rx_cntxt_rsp)->rx_rsp.cntxt_id, 0);

 for (VAR_4 = 0; VAR_4 < VAR_2->hw.num_sds_rings; VAR_4++)
  FUNC_0(VAR_2, VAR_4);

 return (0);
}
