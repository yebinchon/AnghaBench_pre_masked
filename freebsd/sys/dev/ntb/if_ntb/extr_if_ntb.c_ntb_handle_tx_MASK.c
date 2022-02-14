
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_net_queue {int tx_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ntb_net_queue*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, int VAR_1)
{
 struct ntb_net_queue *VAR_2 = VAR_0;

 FUNC_0(&VAR_2->tx_lock);
 FUNC_2(VAR_2);
 FUNC_1(&VAR_2->tx_lock);
}
