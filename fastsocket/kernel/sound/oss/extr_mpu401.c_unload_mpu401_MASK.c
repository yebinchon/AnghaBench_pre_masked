
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct address_info {int* slots; scalar_t__ always_detect; scalar_t__ irq; int io_base; } ;


 int FUNC_0 (scalar_t__,struct address_info*) ;
 int FUNC_1 (void*) ;
 void** VAR_0 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

void FUNC_5(struct address_info *VAR_1)
{
 void *VAR_2;
 int VAR_3=VAR_1->slots[1];

 if (VAR_3 != -1) {
  FUNC_2(VAR_1->io_base, 2);
  if (VAR_1->always_detect == 0 && VAR_1->irq > 0)
   FUNC_0(VAR_1->irq, VAR_1);
  VAR_2=VAR_0[VAR_3];
  FUNC_3(VAR_3);
  FUNC_4(VAR_1->slots[2]);
  FUNC_1(VAR_2);
 }
}
