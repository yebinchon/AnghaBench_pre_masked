
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nm256 {scalar_t__ irq_acks; int irq; int irq_mutex; } ;


 int FUNC_0 (int,struct nm256*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct nm256 *VAR_0)
{
 FUNC_1(&VAR_0->irq_mutex);
 if (VAR_0->irq_acks > 0)
  VAR_0->irq_acks--;
 if (VAR_0->irq_acks == 0 && VAR_0->irq >= 0) {
  FUNC_0(VAR_0->irq, VAR_0);
  VAR_0->irq = -1;
 }
 FUNC_2(&VAR_0->irq_mutex);
}
