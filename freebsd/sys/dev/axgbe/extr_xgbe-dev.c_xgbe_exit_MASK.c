
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct xgbe_prv_data*,int ,int ) ;
 int FUNC_3 (struct xgbe_prv_data*,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct xgbe_prv_data *VAR_3)
{
 unsigned int VAR_4 = 2000;

 FUNC_0("-->xgbe_exit\n");


 FUNC_3(VAR_3, VAR_0, VAR_2, 1);
 FUNC_1(10);


 while (--VAR_4 && FUNC_2(VAR_3, VAR_0, VAR_2))
  FUNC_1(500);

 if (!VAR_4)
  return -VAR_1;

 FUNC_0("<--xgbe_exit\n");

 return 0;
}
