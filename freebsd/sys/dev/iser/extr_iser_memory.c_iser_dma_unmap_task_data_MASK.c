
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iser_data_buf {int size; int sgl; } ;
struct icl_iser_pdu {TYPE_3__* iser_conn; } ;
struct ib_device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_6__ {TYPE_2__ ib_conn; } ;
struct TYPE_4__ {struct ib_device* ib_device; } ;


 int FUNC_0 (struct ib_device*,int ,int ,int) ;

void
FUNC_1(struct icl_iser_pdu *VAR_0,
    struct iser_data_buf *VAR_1,
    enum dma_data_direction VAR_2)
{
 struct ib_device *VAR_3;

 VAR_3 = VAR_0->iser_conn->ib_conn.device->ib_device;
 FUNC_0(VAR_3, VAR_1->sgl, VAR_1->size, VAR_2);
}
