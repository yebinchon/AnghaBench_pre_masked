
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {scalar_t__ wake_depth; int lock; int status; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,unsigned int) ;
 struct irq_desc* FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(unsigned int VAR_1, unsigned int VAR_2)
{
 struct irq_desc *VAR_3 = FUNC_1(VAR_1);
 unsigned long VAR_4;
 int VAR_5 = 0;




 FUNC_3(&VAR_3->lock, VAR_4);
 if (VAR_2) {
  if (VAR_3->wake_depth++ == 0) {
   VAR_5 = FUNC_2(VAR_1, VAR_2);
   if (VAR_5)
    VAR_3->wake_depth = 0;
   else
    VAR_3->status |= VAR_0;
  }
 } else {
  if (VAR_3->wake_depth == 0) {
   FUNC_0(1, "Unbalanced IRQ %d wake disable\n", VAR_1);
  } else if (--VAR_3->wake_depth == 0) {
   VAR_5 = FUNC_2(VAR_1, VAR_2);
   if (VAR_5)
    VAR_3->wake_depth = 1;
   else
    VAR_3->status &= ~VAR_0;
  }
 }

 FUNC_4(&VAR_3->lock, VAR_4);
 return VAR_5;
}
