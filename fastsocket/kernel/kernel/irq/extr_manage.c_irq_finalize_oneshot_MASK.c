
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {int status; int lock; TYPE_1__* chip; } ;
struct TYPE_2__ {int (* unmask ) (unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,struct irq_desc*) ;
 int FUNC_1 (unsigned int,struct irq_desc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_2, struct irq_desc *VAR_3)
{
 FUNC_0(VAR_2, VAR_3);
 FUNC_2(&VAR_3->lock);
 if (!(VAR_3->status & VAR_0) && (VAR_3->status & VAR_1)) {
  VAR_3->status &= ~VAR_1;
  VAR_3->chip->unmask(VAR_2);
 }
 FUNC_3(&VAR_3->lock);
 FUNC_1(VAR_2, VAR_3);
}
