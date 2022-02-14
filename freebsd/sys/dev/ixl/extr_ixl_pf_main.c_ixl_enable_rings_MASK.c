
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixl_vsi {int num_tx_queues; int num_rx_queues; struct ixl_pf* back; } ;
struct ixl_pf {int qtag; } ;


 int FUNC_0 (struct ixl_pf*,int *,int) ;
 int FUNC_1 (struct ixl_pf*,int *,int) ;

int
FUNC_2(struct ixl_vsi *VAR_0)
{
 struct ixl_pf *VAR_1 = VAR_0->back;
 int VAR_2 = 0;

 for (int VAR_3 = 0; VAR_3 < VAR_0->num_tx_queues; VAR_3++)
  VAR_2 = FUNC_1(VAR_1, &VAR_1->qtag, VAR_3);

 for (int VAR_4 = 0; VAR_4 < VAR_0->num_rx_queues; VAR_4++)
  VAR_2 = FUNC_0(VAR_1, &VAR_1->qtag, VAR_4);

 return (VAR_2);
}
