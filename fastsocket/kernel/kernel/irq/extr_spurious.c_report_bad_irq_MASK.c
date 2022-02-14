
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;
typedef int irqreturn_t ;


 int FUNC_0 (unsigned int,struct irq_desc*,int ) ;

__attribute__((used)) static void
FUNC_1(unsigned int VAR_0, struct irq_desc *VAR_1, irqreturn_t VAR_2)
{
 static int VAR_3 = 100;

 if (VAR_3 > 0) {
  VAR_3--;
  FUNC_0(VAR_0, VAR_1, VAR_2);
 }
}
