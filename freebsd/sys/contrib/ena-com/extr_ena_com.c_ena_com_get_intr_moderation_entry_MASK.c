
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_intr_moder_entry {int intr_moder_interval; int bytes_per_interval; int pkts_per_interval; } ;
struct ena_com_dev {int intr_delay_resolution; struct ena_intr_moder_entry* intr_moder_tbl; } ;
typedef enum ena_intr_moder_level { ____Placeholder_ena_intr_moder_level } ena_intr_moder_level ;


 int VAR_0 ;

void FUNC_0(struct ena_com_dev *VAR_1,
           enum ena_intr_moder_level VAR_2,
           struct ena_intr_moder_entry *VAR_3)
{
 struct ena_intr_moder_entry *VAR_4 = VAR_1->intr_moder_tbl;

 if (VAR_2 >= VAR_0)
  return;

 VAR_3->intr_moder_interval = VAR_4[VAR_2].intr_moder_interval;
 if (VAR_1->intr_delay_resolution)
  VAR_3->intr_moder_interval *= VAR_1->intr_delay_resolution;
 VAR_3->pkts_per_interval =
 VAR_4[VAR_2].pkts_per_interval;
 VAR_3->bytes_per_interval = VAR_4[VAR_2].bytes_per_interval;
}
