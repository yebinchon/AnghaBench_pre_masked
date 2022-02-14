
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct iser_tx_desc {int mapped; TYPE_2__* tx_sg; int dma_addr; } ;
struct iser_device {TYPE_3__* mr; int ib_device; } ;
struct TYPE_4__ {struct iser_device* device; } ;
struct iser_conn {TYPE_1__ ib_conn; } ;
struct icl_iser_pdu {struct iser_tx_desc desc; } ;
struct TYPE_6__ {int lkey; } ;
struct TYPE_5__ {int lkey; int length; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,void*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

int
FUNC_2(struct icl_iser_pdu *VAR_3, struct iser_conn *VAR_4)
{
 struct iser_tx_desc *VAR_5 = &VAR_3->desc;
 struct iser_device *VAR_6 = VAR_4->ib_conn.device;
 u64 VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_0(VAR_6->ib_device, (void *)VAR_5,
    VAR_2, VAR_0);
 if (FUNC_1(VAR_6->ib_device, VAR_7)) {
  VAR_8 = -VAR_1;
  goto out;
 }

 VAR_5->mapped = 1;
 VAR_5->dma_addr = VAR_7;
 VAR_5->tx_sg[0].addr = VAR_5->dma_addr;
 VAR_5->tx_sg[0].length = VAR_2;
 VAR_5->tx_sg[0].lkey = VAR_6->mr->lkey;

out:

 return (VAR_8);
}
