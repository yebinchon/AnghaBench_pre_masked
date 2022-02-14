
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_intr_moder_entry {int intr_moder_interval; scalar_t__ bytes_per_interval; int pkts_per_interval; } ;
struct ena_com_dev {int intr_delay_resolution; struct ena_intr_moder_entry* intr_moder_tbl; } ;
typedef enum ena_intr_moder_level { ____Placeholder_ena_intr_moder_level } ena_intr_moder_level ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct ena_com_dev *VAR_2,
     enum ena_intr_moder_level VAR_3,
     struct ena_intr_moder_entry *VAR_4)
{
 struct ena_intr_moder_entry *VAR_5 = VAR_2->intr_moder_tbl;

 if (VAR_3 >= VAR_1)
  return;

 VAR_5[VAR_3].intr_moder_interval = VAR_4->intr_moder_interval;
 if (VAR_2->intr_delay_resolution)
  VAR_5[VAR_3].intr_moder_interval /=
   VAR_2->intr_delay_resolution;
 VAR_5[VAR_3].pkts_per_interval = VAR_4->pkts_per_interval;


 if (VAR_4->bytes_per_interval != VAR_0)
  VAR_5[VAR_3].bytes_per_interval = VAR_4->bytes_per_interval;
}
