
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int an_mutex; int dev_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct xgbe_prv_data*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct xgbe_prv_data *VAR_1)
{
 int VAR_2;

 FUNC_4(&VAR_1->an_mutex);

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  FUNC_2(VAR_0, &VAR_1->dev_state);
 else
  FUNC_1(VAR_0, &VAR_1->dev_state);

 FUNC_3(&VAR_1->an_mutex);

 return VAR_2;
}
