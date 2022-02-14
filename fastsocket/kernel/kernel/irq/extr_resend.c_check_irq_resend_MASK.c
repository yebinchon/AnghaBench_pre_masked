
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {unsigned int status; TYPE_1__* chip; } ;
struct TYPE_2__ {int (* retrigger ) (unsigned int) ;int (* enable ) (unsigned int) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct irq_desc *VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7 = VAR_5->status;




 VAR_5->chip->enable(VAR_6);






 if ((VAR_7 & (VAR_0 | VAR_1 | VAR_2)) == VAR_1) {
  VAR_5->status = (VAR_7 & ~VAR_1) | VAR_2;

  if (!VAR_5->chip->retrigger || !VAR_5->chip->retrigger(VAR_6)) {





  }
 }
}
