
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_com_dev {int * intr_moder_tbl; int dmadev; } ;


 int FUNC_0 (int ,int *) ;

void FUNC_1(struct ena_com_dev *VAR_0)
{
 if (VAR_0->intr_moder_tbl)
  FUNC_0(VAR_0->dmadev, VAR_0->intr_moder_tbl);
 VAR_0->intr_moder_tbl = ((void*)0);
}
