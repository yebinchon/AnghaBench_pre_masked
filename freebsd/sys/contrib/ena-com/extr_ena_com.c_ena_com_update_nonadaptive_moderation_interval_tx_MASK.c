
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ena_com_dev {int intr_delay_resolution; int intr_moder_tx_interval; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

int FUNC_1(struct ena_com_dev *VAR_1,
            u32 VAR_2)
{
 if (!VAR_1->intr_delay_resolution) {
  FUNC_0("Illegal interrupt delay granularity value\n");
  return VAR_0;
 }

 VAR_1->intr_moder_tx_interval = VAR_2 /
  VAR_1->intr_delay_resolution;

 return 0;
}
