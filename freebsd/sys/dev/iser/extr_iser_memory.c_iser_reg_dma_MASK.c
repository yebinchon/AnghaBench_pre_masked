
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct TYPE_3__ {int addr; int length; int lkey; } ;
struct iser_mem_reg {TYPE_1__ sge; int rkey; } ;
struct iser_device {int ib_device; TYPE_2__* mr; } ;
struct iser_data_buf {struct scatterlist* sgl; } ;
struct TYPE_4__ {int rkey; int lkey; } ;


 int FUNC_0 (int ,struct scatterlist*) ;
 int FUNC_1 (int ,struct scatterlist*) ;

__attribute__((used)) static int
FUNC_2(struct iser_device *VAR_0, struct iser_data_buf *VAR_1,
      struct iser_mem_reg *VAR_2)
{
 struct scatterlist *VAR_3 = VAR_1->sgl;

 VAR_2->sge.lkey = VAR_0->mr->lkey;
 VAR_2->rkey = VAR_0->mr->rkey;
 VAR_2->sge.length = FUNC_1(VAR_0->ib_device, &VAR_3[0]);
 VAR_2->sge.addr = FUNC_0(VAR_0->ib_device, &VAR_3[0]);

 return (0);
}
