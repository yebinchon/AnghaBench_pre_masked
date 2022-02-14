
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dma_len; int list; } ;
struct TYPE_4__ {TYPE_1__ m_sg; } ;
struct rds_iw_mr {TYPE_2__ mapping; struct rds_iw_device* device; } ;
struct rds_iw_device {int dev; } ;


 int VAR_0 ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

void FUNC_2(void *VAR_1, int VAR_2)
{
 struct rds_iw_mr *VAR_3 = VAR_1;
 struct rds_iw_device *VAR_4 = VAR_3->device;

 switch (VAR_2) {
 case 129:
  FUNC_0(VAR_4->dev, VAR_3->mapping.m_sg.list,
   VAR_3->mapping.m_sg.dma_len, VAR_0);
  break;
 case 128:
  FUNC_1(VAR_4->dev, VAR_3->mapping.m_sg.list,
   VAR_3->mapping.m_sg.dma_len, VAR_0);
  break;
 }
}
