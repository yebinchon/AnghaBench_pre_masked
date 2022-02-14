
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iser_mem_reg {struct fast_reg_descriptor* mem_h; } ;
struct iser_device {struct ib_device* ib_device; } ;
struct iser_data_buf {int dma_nents; } ;
struct icl_iser_pdu {struct iser_mem_reg* rdma_reg; struct iser_data_buf* data; TYPE_1__* iser_conn; } ;
struct ib_device {int dummy; } ;
struct ib_conn {struct iser_device* device; } ;
struct fast_reg_descriptor {int rsc; } ;
typedef enum iser_data_dir { ____Placeholder_iser_data_dir } iser_data_dir ;
struct TYPE_2__ {struct ib_conn ib_conn; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct iser_data_buf*,struct ib_device*) ;
 int FUNC_2 (struct icl_iser_pdu*,struct iser_data_buf*,int *,struct iser_mem_reg*) ;
 struct fast_reg_descriptor* FUNC_3 (struct ib_conn*) ;
 int FUNC_4 (struct ib_conn*,struct fast_reg_descriptor*) ;

int
FUNC_5(struct icl_iser_pdu *VAR_0,
    enum iser_data_dir VAR_1)
{
 struct ib_conn *VAR_2 = &VAR_0->iser_conn->ib_conn;
 struct iser_device *VAR_3 = VAR_2->device;
 struct ib_device *VAR_4 = VAR_3->ib_device;
 struct iser_data_buf *VAR_5 = &VAR_0->data[VAR_1];
 struct iser_mem_reg *VAR_6 = &VAR_0->rdma_reg[VAR_1];
 struct fast_reg_descriptor *VAR_7 = ((void*)0);
 int VAR_8, VAR_9;

 VAR_9 = FUNC_1(VAR_5, VAR_4);
 if (VAR_9 != VAR_5->dma_nents) {
  FUNC_0("bounce buffer is not supported");
  return 1;
 }

 if (VAR_5->dma_nents != 1) {
  VAR_7 = FUNC_3(VAR_2);
  VAR_6->mem_h = VAR_7;
 }

 VAR_8 = FUNC_2(VAR_0, VAR_5, VAR_7 ? &VAR_7->rsc : ((void*)0),
           VAR_6);
 if (VAR_8)
  goto err_reg;

 return (0);

err_reg:
 if (VAR_7)
  FUNC_4(VAR_2, VAR_7);

 return (VAR_8);
}
