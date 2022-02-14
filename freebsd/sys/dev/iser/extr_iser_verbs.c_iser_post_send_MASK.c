
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iser_tx_desc {int num_sge; int tx_sg; int dma_addr; } ;
struct ib_send_wr {uintptr_t wr_id; int send_flags; int opcode; int num_sge; int sg_list; int * next; } ;
struct ib_conn {int qp; TYPE_1__* device; } ;
struct TYPE_2__ {int ib_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,struct ib_send_wr*,struct ib_send_wr**) ;

int FUNC_3(struct ib_conn *VAR_4, struct iser_tx_desc *VAR_5,
     bool VAR_6)
{
 int VAR_7;
 struct ib_send_wr VAR_8, *VAR_9;

 FUNC_1(VAR_4->device->ib_device,
          VAR_5->dma_addr, VAR_3,
          VAR_0);

 VAR_8.next = ((void*)0);
 VAR_8.wr_id = (uintptr_t)VAR_5;
 VAR_8.sg_list = VAR_5->tx_sg;
 VAR_8.num_sge = VAR_5->num_sge;
 VAR_8.opcode = VAR_2;
 VAR_8.send_flags = VAR_6 ? VAR_1 : 0;

 VAR_7 = FUNC_2(VAR_4->qp, &VAR_8, &VAR_9);
 if (VAR_7)
  FUNC_0("ib_post_send failed, ret:%d", VAR_7);

 return (VAR_7);
}
