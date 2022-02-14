
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int flags; } ;
struct iser_tx_desc {int num_sge; TYPE_1__* tx_sg; TYPE_4__ iser_header; int dma_addr; } ;
struct iser_hdr {int dummy; } ;
struct iser_device {TYPE_2__* mr; int ib_device; } ;
struct TYPE_7__ {struct iser_device* device; } ;
struct iser_conn {TYPE_3__ ib_conn; } ;
struct TYPE_6__ {scalar_t__ lkey; } ;
struct TYPE_5__ {scalar_t__ lkey; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct iser_tx_desc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_4__*,int ,int) ;

void
FUNC_3(struct iser_conn *VAR_3,
        struct iser_tx_desc *VAR_4)
{
 struct iser_device *VAR_5 = VAR_3->ib_conn.device;

 FUNC_1(VAR_5->ib_device,
  VAR_4->dma_addr, VAR_1, VAR_0);

 FUNC_2(&VAR_4->iser_header, 0, sizeof(struct iser_hdr));
 VAR_4->iser_header.flags = VAR_2;

 VAR_4->num_sge = 1;

 if (VAR_4->tx_sg[0].lkey != VAR_5->mr->lkey) {
  VAR_4->tx_sg[0].lkey = VAR_5->mr->lkey;
  FUNC_0("sdesc %p lkey mismatch, fixing", VAR_4);
 }
}
