
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_adapter {int num_queues; int pdev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct ena_adapter*,int) ;
 int FUNC_2 (struct ena_adapter*,int) ;

__attribute__((used)) static int
FUNC_3(struct ena_adapter *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_queues; VAR_1++) {
  VAR_2 = FUNC_2(VAR_0, VAR_1);
  if (VAR_2 != 0) {
   FUNC_0(VAR_0->pdev,
       "Allocation for Tx Queue %u failed\n", VAR_1);
   goto err_setup_tx;
  }
 }

 return (0);

err_setup_tx:

 while (VAR_1--)
  FUNC_1(VAR_0, VAR_1);
 return (VAR_2);
}
