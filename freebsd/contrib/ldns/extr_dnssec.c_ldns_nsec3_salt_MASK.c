
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr ;
typedef int ldns_rdf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int const*) ;
 int * FUNC_1 (int const*,int) ;

ldns_rdf *
FUNC_2(const ldns_rr *VAR_2)
{
 if (VAR_2 &&
       (FUNC_0(VAR_2) == VAR_0 ||
        FUNC_0(VAR_2) == VAR_1)
     ) {
  return FUNC_1(VAR_2, 3);
 }
 return ((void*)0);
}
