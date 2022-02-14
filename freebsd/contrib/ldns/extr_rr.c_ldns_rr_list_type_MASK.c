
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr_type ;
typedef int ldns_rr_list ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const*,int ) ;
 scalar_t__ FUNC_2 (int const*) ;

ldns_rr_type
FUNC_3(const ldns_rr_list *VAR_0)
{
 if (VAR_0 && FUNC_2(VAR_0) > 0) {
  return FUNC_0(FUNC_1(VAR_0, 0));
 } else {
  return 0;
 }
}
