
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {unsigned int status; int threads_active; int wait_for_threads; int lock; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 struct irq_desc* FUNC_2 (unsigned int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,int) ;

void FUNC_6(unsigned int VAR_1)
{
 struct irq_desc *VAR_2 = FUNC_2(VAR_1);
 unsigned int VAR_3;

 if (!VAR_2)
  return;

 do {
  unsigned long VAR_4;





  while (VAR_2->status & VAR_0)
   FUNC_1();


  FUNC_3(&VAR_2->lock, VAR_4);
  VAR_3 = VAR_2->status;
  FUNC_4(&VAR_2->lock, VAR_4);


 } while (VAR_3 & VAR_0);





 FUNC_5(VAR_2->wait_for_threads, !FUNC_0(&VAR_2->threads_active));
}
