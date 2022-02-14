
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ena_com_mmio_read {int seq_num; int readless_supported; int lock; TYPE_1__* read_resp; int read_resp_mem_handle; int read_resp_dma_addr; } ;
struct ena_com_dev {int dmadev; struct ena_com_mmio_read mmio_read; } ;
struct TYPE_2__ {int req_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,TYPE_1__*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ena_com_dev*) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct ena_com_dev *VAR_1)
{
 struct ena_com_mmio_read *VAR_2 = &VAR_1->mmio_read;

 FUNC_2(VAR_2->lock);
 FUNC_0(VAR_1->dmadev,
          sizeof(*VAR_2->read_resp),
          VAR_2->read_resp,
          VAR_2->read_resp_dma_addr,
          VAR_2->read_resp_mem_handle);
 if (FUNC_4(!VAR_2->read_resp))
  goto err;

 FUNC_3(VAR_1);

 VAR_2->read_resp->req_id = 0x0;
 VAR_2->seq_num = 0x0;
 VAR_2->readless_supported = 1;

 return 0;

err:
  FUNC_1(VAR_2->lock);
  return VAR_0;
}
