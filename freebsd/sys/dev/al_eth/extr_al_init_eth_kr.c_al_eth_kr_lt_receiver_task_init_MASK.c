
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_eth_kr_status_report_data {int dummy; } ;
struct al_eth_kr_data {int status_report; int last_lpcoeff; } ;
struct al_eth_kr_coef_up_data {int dummy; } ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct al_eth_kr_data *VAR_0)
{

 FUNC_0(&VAR_0->last_lpcoeff, 0,
     sizeof(struct al_eth_kr_coef_up_data));
 FUNC_0(&VAR_0->status_report, 0,
     sizeof(struct al_eth_kr_status_report_data));
}
