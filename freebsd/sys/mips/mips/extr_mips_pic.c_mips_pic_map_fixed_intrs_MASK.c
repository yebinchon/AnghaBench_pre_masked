
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct mips_pic_intr {scalar_t__ intr_irq; scalar_t__ mips_irq; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,struct mips_pic_intr**) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;

int
FUNC_3(void)
{
 int VAR_1;

 for (u_int VAR_2 = 0; VAR_2 < FUNC_1(VAR_0); VAR_2++) {
  struct mips_pic_intr *VAR_3;

  if ((VAR_1 = FUNC_0(VAR_2, &VAR_3)))
   return (VAR_1);


  if (VAR_3->intr_irq != VAR_3->mips_irq) {
   FUNC_2("invalid IRQ mapping: %u->%u", VAR_3->intr_irq,
       VAR_3->mips_irq);
  }
 }

 return (0);
}
