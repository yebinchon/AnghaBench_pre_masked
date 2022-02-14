
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iser_tx_desc {int mapped; int dma_addr; } ;
struct iser_device {int ib_device; } ;
struct icl_pdu {int dummy; } ;
struct icl_iser_pdu {int * data; scalar_t__* dir; struct iser_tx_desc desc; TYPE_2__* iser_conn; } ;
struct icl_conn {int dummy; } ;
struct TYPE_3__ {struct iser_device* device; } ;
struct TYPE_4__ {TYPE_1__ ib_conn; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct icl_iser_pdu* FUNC_1 (struct icl_pdu*) ;
 int FUNC_2 (struct icl_iser_pdu*,int *,int ) ;
 int FUNC_3 (struct icl_conn*,struct icl_pdu*) ;
 int FUNC_4 (struct icl_iser_pdu*,size_t) ;
 scalar_t__ FUNC_5 (int) ;

void
FUNC_6(struct icl_conn *VAR_5, void *VAR_6)
{
 struct icl_pdu *VAR_7 = VAR_6;
 struct icl_iser_pdu *VAR_8 = FUNC_1(VAR_7);
 struct iser_device *VAR_9 = VAR_8->iser_conn->ib_conn.device;
 struct iser_tx_desc *VAR_10 = &VAR_8->desc;

 if (VAR_8->dir[VAR_2]) {
  FUNC_4(VAR_8, VAR_2);
  FUNC_2(VAR_8,
      &VAR_8->data[VAR_2],
      VAR_0);
 }

 if (VAR_8->dir[VAR_3]) {
  FUNC_4(VAR_8, VAR_3);
  FUNC_2(VAR_8,
      &VAR_8->data[VAR_3],
      VAR_1);
 }

 if (FUNC_5(VAR_10->mapped)) {
  FUNC_0(VAR_9->ib_device, VAR_10->dma_addr,
        VAR_4, VAR_1);
  VAR_10->mapped = 0;
 }

 FUNC_3(VAR_5, VAR_7);
}
