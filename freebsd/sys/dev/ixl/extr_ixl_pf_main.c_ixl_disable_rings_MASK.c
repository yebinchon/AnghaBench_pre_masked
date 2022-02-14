
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixl_vsi {int num_tx_queues; int num_rx_queues; } ;
struct ixl_pf_qtag {int dummy; } ;
struct ixl_pf {int dummy; } ;


 int FUNC_0 (struct ixl_pf*,struct ixl_pf_qtag*,int) ;
 int FUNC_1 (struct ixl_pf*,struct ixl_pf_qtag*,int) ;

int
FUNC_2(struct ixl_pf *VAR_0, struct ixl_vsi *VAR_1, struct ixl_pf_qtag *VAR_2)
{
 int VAR_3 = 0;

 for (int VAR_4 = 0; VAR_4 < VAR_1->num_tx_queues; VAR_4++)
  VAR_3 = FUNC_1(VAR_0, VAR_2, VAR_4);

 for (int VAR_5 = 0; VAR_5 < VAR_1->num_rx_queues; VAR_5++)
  VAR_3 = FUNC_0(VAR_0, VAR_2, VAR_5);

 return (VAR_3);
}
