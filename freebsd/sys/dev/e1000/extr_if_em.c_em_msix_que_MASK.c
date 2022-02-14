
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em_rx_queue {int irqs; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(void *VAR_1)
{
 struct em_rx_queue *VAR_2 = VAR_1;

 ++VAR_2->irqs;

 return (VAR_0);
}
