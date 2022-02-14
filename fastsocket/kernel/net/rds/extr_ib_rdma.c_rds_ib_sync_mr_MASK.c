
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_mr {int sg_dma_len; int sg; struct rds_ib_device* device; } ;
struct rds_ib_device {int dev; } ;


 int VAR_0 ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

void FUNC_2(void *VAR_1, int VAR_2)
{
 struct rds_ib_mr *VAR_3 = VAR_1;
 struct rds_ib_device *VAR_4 = VAR_3->device;

 switch (VAR_2) {
 case 129:
  FUNC_0(VAR_4->dev, VAR_3->sg,
   VAR_3->sg_dma_len, VAR_0);
  break;
 case 128:
  FUNC_1(VAR_4->dev, VAR_3->sg,
   VAR_3->sg_dma_len, VAR_0);
  break;
 }
}
