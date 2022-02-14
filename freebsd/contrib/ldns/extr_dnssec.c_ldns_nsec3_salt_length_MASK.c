
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ldns_rr ;
typedef int ldns_rdf ;


 int * FUNC_0 (int const*) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

uint8_t
FUNC_3(const ldns_rr *VAR_0)
{
 ldns_rdf *VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 && FUNC_2(VAR_1) > 0) {
  return (uint8_t) FUNC_1(VAR_1)[0];
 }
 return 0;
}
