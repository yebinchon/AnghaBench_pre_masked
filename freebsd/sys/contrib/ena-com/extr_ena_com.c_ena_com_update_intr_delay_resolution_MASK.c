
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ena_intr_moder_entry {int intr_moder_interval; } ;
struct ena_com_dev {int intr_delay_resolution; int intr_moder_tx_interval; struct ena_intr_moder_entry* intr_moder_tbl; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(struct ena_com_dev *VAR_1,
       u16 VAR_2)
{
 struct ena_intr_moder_entry *VAR_3 = VAR_1->intr_moder_tbl;
 unsigned int VAR_4;

 if (!VAR_2) {
  FUNC_0("Illegal intr_delay_resolution provided. Going to use default 1 usec resolution\n");
  VAR_2 = 1;
 }
 VAR_1->intr_delay_resolution = VAR_2;


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3[VAR_4].intr_moder_interval /= VAR_2;


 VAR_1->intr_moder_tx_interval /= VAR_2;
}
