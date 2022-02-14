
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ix_rx_queue {int irqs; int msix; struct adapter* adapter; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_1)
{
 struct ix_rx_queue *VAR_2 = VAR_1;
 struct adapter *VAR_3 = VAR_2->adapter;

 FUNC_0(VAR_3, VAR_2->msix);
 ++VAR_2->irqs;

 return (VAR_0);
}
