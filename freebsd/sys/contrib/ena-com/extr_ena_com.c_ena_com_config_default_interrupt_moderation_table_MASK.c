
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_intr_moder_entry {int bytes_per_interval; int pkts_per_interval; int intr_moder_interval; } ;
struct ena_com_dev {struct ena_intr_moder_entry* intr_moder_tbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;

void FUNC_0(struct ena_com_dev *VAR_20)
{
 struct ena_intr_moder_entry *VAR_21 = VAR_20->intr_moder_tbl;

 if (!VAR_21)
  return;

 VAR_21[VAR_18].intr_moder_interval =
  VAR_8;
 VAR_21[VAR_18].pkts_per_interval =
  VAR_7;
 VAR_21[VAR_18].bytes_per_interval =
  VAR_6;

 VAR_21[VAR_17].intr_moder_interval =
  VAR_11;
 VAR_21[VAR_17].pkts_per_interval =
  VAR_10;
 VAR_21[VAR_17].bytes_per_interval =
  VAR_9;

 VAR_21[VAR_19].intr_moder_interval =
  VAR_14;
 VAR_21[VAR_19].pkts_per_interval =
  VAR_13;
 VAR_21[VAR_19].bytes_per_interval =
  VAR_12;

 VAR_21[VAR_15].intr_moder_interval =
  VAR_5;
 VAR_21[VAR_15].pkts_per_interval =
  VAR_4;
 VAR_21[VAR_15].bytes_per_interval =
  VAR_3;

 VAR_21[VAR_16].intr_moder_interval =
  VAR_2;
 VAR_21[VAR_16].pkts_per_interval =
  VAR_1;
 VAR_21[VAR_16].bytes_per_interval =
  VAR_0;
}
