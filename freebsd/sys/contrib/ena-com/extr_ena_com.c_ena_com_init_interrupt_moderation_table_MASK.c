
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_intr_moder_entry {int dummy; } ;
struct ena_com_dev {int intr_moder_tbl; int dmadev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (struct ena_com_dev*) ;

__attribute__((used)) static int FUNC_2(struct ena_com_dev *VAR_2)
{
 size_t VAR_3;

 VAR_3 = sizeof(struct ena_intr_moder_entry) * VAR_1;

 VAR_2->intr_moder_tbl = FUNC_0(VAR_2->dmadev, VAR_3);
 if (!VAR_2->intr_moder_tbl)
  return VAR_0;

 FUNC_1(VAR_2);

 return 0;
}
