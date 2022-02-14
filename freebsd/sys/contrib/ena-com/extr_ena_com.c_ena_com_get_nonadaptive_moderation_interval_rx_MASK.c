
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_intr_moder_entry {unsigned int intr_moder_interval; } ;
struct ena_com_dev {struct ena_intr_moder_entry* intr_moder_tbl; } ;


 size_t VAR_0 ;

unsigned int FUNC_0(struct ena_com_dev *VAR_1)
{
 struct ena_intr_moder_entry *VAR_2 = VAR_1->intr_moder_tbl;

 if (VAR_2)
  return VAR_2[VAR_0].intr_moder_interval;

 return 0;
}
