
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ib_sge {int lkey; int length; int addr; } ;
struct iser_rx_desc {int dma_addr; struct ib_sge rx_sg; } ;
struct iser_device {int ib_device; TYPE_1__* mr; } ;
struct ib_conn {struct iser_device* device; } ;
struct iser_conn {int qp_max_recv_dtos; int min_posted_rx; int num_rx_descs; struct iser_rx_desc* rx_descs; scalar_t__ rx_desc_head; struct ib_conn ib_conn; } ;
struct TYPE_2__ {int lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct iser_rx_desc*,int ) ;
 int FUNC_2 (int ,void*,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct ib_conn*,int) ;
 int FUNC_6 (struct ib_conn*) ;
 struct iser_rx_desc* FUNC_7 (int,int ,int) ;

int FUNC_8(struct iser_conn *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;
 u64 VAR_10;
 struct iser_rx_desc *VAR_11;
 struct ib_sge *VAR_12;
 struct ib_conn *VAR_13 = &VAR_6->ib_conn;
 struct iser_device *VAR_14 = VAR_13->device;

 VAR_6->qp_max_recv_dtos = VAR_7;
 VAR_6->min_posted_rx = VAR_6->qp_max_recv_dtos >> 2;

 if (FUNC_5(VAR_13, VAR_7))
  goto create_rdma_reg_res_failed;


 VAR_6->num_rx_descs = VAR_7;
 VAR_6->rx_descs = FUNC_7(VAR_6->num_rx_descs *
    sizeof(struct iser_rx_desc), VAR_3,
    VAR_4 | VAR_5);
 if (!VAR_6->rx_descs)
  goto rx_desc_alloc_fail;

 VAR_11 = VAR_6->rx_descs;

 for (VAR_8 = 0; VAR_8 < VAR_6->qp_max_recv_dtos; VAR_8++, VAR_11++) {
  VAR_10 = FUNC_2(VAR_14->ib_device, (void *)VAR_11,
     VAR_2, VAR_0);
  if (FUNC_3(VAR_14->ib_device, VAR_10))
   goto rx_desc_dma_map_failed;

  VAR_11->dma_addr = VAR_10;

  VAR_12 = &VAR_11->rx_sg;
  VAR_12->addr = VAR_11->dma_addr;
  VAR_12->length = VAR_2;
  VAR_12->lkey = VAR_14->mr->lkey;
 }

 VAR_6->rx_desc_head = 0;

 return (0);

rx_desc_dma_map_failed:
 VAR_11 = VAR_6->rx_descs;
 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++, VAR_11++)
  FUNC_4(VAR_14->ib_device, VAR_11->dma_addr,
        VAR_2, VAR_0);
 FUNC_1(VAR_6->rx_descs, VAR_3);
 VAR_6->rx_descs = ((void*)0);
rx_desc_alloc_fail:
 FUNC_6(VAR_13);
create_rdma_reg_res_failed:
 FUNC_0("failed allocating rx descriptors / data buffers");

 return (VAR_1);
}
