
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_eth_kr_coef_up_data {int dummy; } ;
struct al_eth_kr_data {struct al_eth_kr_coef_up_data last_lpcoeff; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct al_eth_kr_coef_up_data*,struct al_eth_kr_coef_up_data*,int) ;
 int FUNC_1 (struct al_eth_kr_coef_up_data*,struct al_eth_kr_coef_up_data*,int) ;

__attribute__((used)) static boolean_t
FUNC_2(struct al_eth_kr_data *VAR_2,
    struct al_eth_kr_coef_up_data *VAR_3)
{
 struct al_eth_kr_coef_up_data *VAR_4 = &VAR_2->last_lpcoeff;

 if (FUNC_0(VAR_4, VAR_3,
     sizeof(struct al_eth_kr_coef_up_data)) == 0) {
  return (VAR_0);
 }

 FUNC_1(VAR_4, VAR_3, sizeof(struct al_eth_kr_coef_up_data));

 return (VAR_1);
}
