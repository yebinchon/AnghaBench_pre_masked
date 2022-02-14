
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct irq_desc {TYPE_2__* chip; int status; int depth; TYPE_1__* action; } ;
struct TYPE_4__ {int (* disable ) (unsigned int) ;} ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;

void FUNC_1(struct irq_desc *VAR_4, unsigned int VAR_5, bool VAR_6)
{
 if (VAR_6) {


  if (!VAR_4->action ||
      (VAR_4->action->flags & (VAR_1|VAR_0)))
   return;
  VAR_4->status |= VAR_3;
 }

 if (!VAR_4->depth++) {
  VAR_4->status |= VAR_2;
  VAR_4->chip->disable(VAR_5);
 }
}
