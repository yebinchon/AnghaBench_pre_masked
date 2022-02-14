
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ix_rx_queue {int irqs; int msix; struct adapter* adapter; } ;
struct ifnet {int if_drv_flags; } ;
struct adapter {int ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ifnet* FUNC_0 (int ) ;
 int FUNC_1 (struct adapter*,int ) ;

__attribute__((used)) static int
FUNC_2(void *VAR_3)
{
 struct ix_rx_queue *VAR_4 = VAR_3;
 struct adapter *VAR_5 = VAR_4->adapter;
 struct ifnet *VAR_6 = FUNC_0(VAR_4->adapter->ctx);


 if ((VAR_6->if_drv_flags & VAR_2) == 0)
  return (VAR_0);

 FUNC_1(VAR_5, VAR_4->msix);
 ++VAR_4->irqs;

 return (VAR_1);
}
