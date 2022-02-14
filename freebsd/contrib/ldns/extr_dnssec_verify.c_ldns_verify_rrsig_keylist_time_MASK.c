
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef scalar_t__ ldns_status ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 scalar_t__ FUNC_3 (int const*,int ) ;
 scalar_t__ FUNC_4 (int const*,int const*,int const*,int *) ;

ldns_status
FUNC_5(
  const ldns_rr_list *VAR_2,
  const ldns_rr *VAR_3,
  const ldns_rr_list *VAR_4,
  time_t VAR_5,
  ldns_rr_list *VAR_6)
{
 ldns_status VAR_7;
 ldns_rr_list *VAR_8 = FUNC_2();
 if (!VAR_8)
  return VAR_0;

 VAR_7 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_8);
 if(VAR_7 != VAR_1) {
  FUNC_1(VAR_8);
  return VAR_7;
 }


 VAR_7 = FUNC_3(VAR_3, VAR_5);
 if(VAR_7 != VAR_1) {
  FUNC_1(VAR_8);
  return VAR_7;
 }

 FUNC_0(VAR_6, VAR_8);
 FUNC_1(VAR_8);
 return VAR_1;
}
