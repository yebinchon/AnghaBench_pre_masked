
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irqaction {TYPE_1__* dir; } ;
struct irq_desc {int dir; } ;
struct TYPE_2__ {int name; } ;


 struct irq_desc* FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(unsigned int VAR_0, struct irqaction *VAR_1)
{
 if (VAR_1->dir) {
  struct irq_desc *VAR_2 = FUNC_0(VAR_0);

  FUNC_1(VAR_1->dir->name, VAR_2->dir);
 }
}
