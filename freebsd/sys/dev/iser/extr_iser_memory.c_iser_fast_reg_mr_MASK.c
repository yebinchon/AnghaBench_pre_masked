
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iser_reg_resources {scalar_t__ mr_valid; struct ib_mr* mr; } ;
struct TYPE_4__ {int length; int addr; int lkey; } ;
struct iser_mem_reg {TYPE_2__ sge; int rkey; } ;
struct iser_device {int dummy; } ;
struct iser_data_buf {int dma_nents; int size; int sg; } ;
struct icl_iser_pdu {TYPE_1__* iser_conn; } ;
struct ib_send_wr {struct ib_send_wr* next; scalar_t__ num_sge; int wr_id; int opcode; } ;
struct ib_reg_wr {int access; struct ib_send_wr wr; int key; struct ib_mr* mr; } ;
struct ib_mr {int length; int iova; int rkey; int lkey; } ;
struct ib_conn {int qp; struct iser_device* device; } ;
typedef int fastreg_wr ;
struct TYPE_3__ {struct ib_conn ib_conn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ib_mr*,int ,int,int *,int ) ;
 int FUNC_2 (int ,struct ib_send_wr*,struct ib_send_wr**) ;
 int FUNC_3 (struct ib_send_wr*,struct ib_mr*) ;
 int FUNC_4 (struct iser_device*,struct iser_data_buf*,struct iser_mem_reg*) ;
 int FUNC_5 (struct ib_reg_wr*,int ,int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct icl_iser_pdu *VAR_7,
   struct iser_data_buf *VAR_8,
   struct iser_reg_resources *VAR_9,
   struct iser_mem_reg *VAR_10)
{
 struct ib_conn *VAR_11 = &VAR_7->iser_conn->ib_conn;
 struct iser_device *VAR_12 = VAR_11->device;
 struct ib_mr *VAR_13 = VAR_9->mr;
 struct ib_reg_wr VAR_14;
 struct ib_send_wr VAR_15;
 struct ib_send_wr *VAR_16, *VAR_17 = ((void*)0);
 int VAR_18, VAR_19;


 if (VAR_8->dma_nents == 1)
  return FUNC_4(VAR_12, VAR_8, VAR_10);

 if (!VAR_9->mr_valid) {
  FUNC_3(&VAR_15, VAR_13);
  VAR_17 = &VAR_15;
 }

 VAR_19 = FUNC_1(VAR_13, VAR_8->sg, VAR_8->size, ((void*)0), VAR_6);
 if (FUNC_6(VAR_19 != VAR_8->size)) {
  FUNC_0("failed to map sg (%d/%d)\n", VAR_19, VAR_8->size);
  return VAR_19 < 0 ? VAR_19 : -VAR_0;
 }

 FUNC_5(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.wr.opcode = VAR_4;
 VAR_14.wr.wr_id = VAR_5;
 VAR_14.wr.num_sge = 0;
 VAR_14.mr = VAR_13;
 VAR_14.key = VAR_13->rkey;
 VAR_14.access = VAR_1 |
       VAR_3 |
       VAR_2;

 if (!VAR_17)
  VAR_17 = &VAR_14.wr;
 else
  VAR_17->next = &VAR_14.wr;

 VAR_18 = FUNC_2(VAR_11->qp, VAR_17, &VAR_16);
 if (VAR_18) {
  FUNC_0("fast registration failed, ret:%d", VAR_18);
  return (VAR_18);
 }
 VAR_9->mr_valid = 0;

 VAR_10->sge.lkey = VAR_13->lkey;
 VAR_10->rkey = VAR_13->rkey;
 VAR_10->sge.addr = VAR_13->iova;
 VAR_10->sge.length = VAR_13->length;

 return (VAR_18);
}
