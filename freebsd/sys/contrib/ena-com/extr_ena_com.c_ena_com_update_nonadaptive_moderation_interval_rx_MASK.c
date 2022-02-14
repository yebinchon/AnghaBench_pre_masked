
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ena_com_dev {int intr_delay_resolution; TYPE_1__* intr_moder_tbl; } ;
struct TYPE_2__ {int intr_moder_interval; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*) ;

int FUNC_1(struct ena_com_dev *VAR_2,
            u32 VAR_3)
{
 if (!VAR_2->intr_delay_resolution) {
  FUNC_0("Illegal interrupt delay granularity value\n");
  return VAR_0;
 }




 VAR_2->intr_moder_tbl[VAR_1].intr_moder_interval =
  VAR_3 / VAR_2->intr_delay_resolution;

 return 0;
}
