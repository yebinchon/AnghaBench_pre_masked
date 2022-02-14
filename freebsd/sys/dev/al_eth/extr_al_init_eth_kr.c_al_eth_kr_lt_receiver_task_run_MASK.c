
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_eth_kr_data {int adapter; } ;
struct al_eth_kr_coef_up_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct al_eth_kr_data*,struct al_eth_kr_coef_up_data*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct al_eth_kr_data*,struct al_eth_kr_coef_up_data*) ;
 int FUNC_3 (int ,int ,struct al_eth_kr_coef_up_data*) ;

__attribute__((used)) static int
FUNC_4(struct al_eth_kr_data *VAR_1)
{
 struct al_eth_kr_coef_up_data VAR_2;
 if (FUNC_1(VAR_1->adapter,
     VAR_0) != 0) {
  return (0);
 }


 FUNC_3(VAR_1->adapter,
     VAR_0, &VAR_2);

 if (FUNC_2(VAR_1, &VAR_2) != 0) {

  FUNC_0(VAR_1, &VAR_2);
 }

 return (0);
}
