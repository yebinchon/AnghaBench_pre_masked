
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_eth_kr_status_report_data {scalar_t__ c_zero; scalar_t__ c_minus; scalar_t__ c_plus; } ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static boolean_t
FUNC_0(struct al_eth_kr_status_report_data *VAR_3)
{

 if ((VAR_3->c_zero == VAR_0) &&
     (VAR_3->c_minus == VAR_0) &&
     (VAR_3->c_plus == VAR_0)) {
  return (VAR_2);
 }

 return (VAR_1);
}
