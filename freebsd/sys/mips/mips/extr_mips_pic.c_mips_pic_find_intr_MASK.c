
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct mips_pic_intr {scalar_t__ intr_irq; } ;
typedef scalar_t__ rman_res_t ;


 struct mips_pic_intr* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (struct mips_pic_intr*) ;
 scalar_t__ FUNC_3 (struct resource*) ;
 int FUNC_4 (struct resource*) ;
 scalar_t__ FUNC_5 (struct resource*) ;

__attribute__((used)) static struct mips_pic_intr *
FUNC_6(struct resource *VAR_2)
{
 struct mips_pic_intr *VAR_3;
 rman_res_t VAR_4;

 VAR_4 = FUNC_5(VAR_2);
 if (VAR_4 != FUNC_3(VAR_2) || FUNC_4(VAR_2) != 1)
  return (((void*)0));

 FUNC_0(&VAR_1);
 for (size_t VAR_5 = 0; VAR_5 < FUNC_2(VAR_0); VAR_5++) {
  VAR_3 = &VAR_0[VAR_5];

  if (VAR_3->intr_irq != VAR_4)
   continue;

  FUNC_1(&VAR_1);
  return (VAR_3);
 }
 FUNC_1(&VAR_1);


 return (((void*)0));
}
