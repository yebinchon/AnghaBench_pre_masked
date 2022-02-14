
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixl_rx_queue {int irqs; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixl_rx_queue*) ;

__attribute__((used)) static int
FUNC_1(void *VAR_1)
{
 struct ixl_rx_queue *VAR_2 = VAR_1;

 ++VAR_2->irqs;

 FUNC_0(VAR_2);


 return (VAR_0);
}
