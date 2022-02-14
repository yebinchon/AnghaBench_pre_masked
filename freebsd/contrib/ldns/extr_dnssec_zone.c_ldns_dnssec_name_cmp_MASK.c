
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_dnssec_name ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

int
FUNC_2(const void *VAR_0, const void *VAR_1)
{
 ldns_dnssec_name *VAR_2 = (ldns_dnssec_name *) VAR_0;
 ldns_dnssec_name *VAR_3 = (ldns_dnssec_name *) VAR_1;

 if (VAR_2 && VAR_3) {
  return FUNC_0(FUNC_1(VAR_2),
        FUNC_1(VAR_3));
 } else if (VAR_2) {
  return 1;
 } else if (VAR_3) {
  return -1;
 } else {
  return 0;
 }
}
