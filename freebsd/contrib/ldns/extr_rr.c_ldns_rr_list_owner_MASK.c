
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr_list ;
typedef int ldns_rdf ;


 int FUNC_0 (int const*,int ) ;
 scalar_t__ FUNC_1 (int const*) ;
 int * FUNC_2 (int ) ;

ldns_rdf *
FUNC_3(const ldns_rr_list *VAR_0)
{
 if (VAR_0 && FUNC_1(VAR_0) > 0) {
  return FUNC_2(FUNC_0(VAR_0, 0));
 } else {
  return ((void*)0);
 }
}
