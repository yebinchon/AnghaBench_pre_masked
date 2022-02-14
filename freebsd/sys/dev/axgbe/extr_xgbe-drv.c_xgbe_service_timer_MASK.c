
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int service_timer; int service_work; int dev_workqueue; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,void (*) (void*),struct xgbe_prv_data*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
 struct xgbe_prv_data *VAR_2 = VAR_1;

 FUNC_0("--> xgbe_service_timer\n");
 FUNC_2(VAR_2->dev_workqueue, &VAR_2->service_work);

 FUNC_1(&VAR_2->service_timer, VAR_0, FUNC_3, VAR_2);
 FUNC_0("<-- xgbe_service_timer\n");
}
