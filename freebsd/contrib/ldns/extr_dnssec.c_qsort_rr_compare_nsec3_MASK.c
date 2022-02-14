
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int const*) ;

int
FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const ldns_rr *VAR_2 = * (const ldns_rr **) VAR_0;
 const ldns_rr *VAR_3 = * (const ldns_rr **) VAR_1;
 if (VAR_2 == ((void*)0) && VAR_3 == ((void*)0)) {
  return 0;
 }
 if (VAR_2 == ((void*)0)) {
  return -1;
 }
 if (VAR_3 == ((void*)0)) {
  return 1;
 }
 return FUNC_0(FUNC_1(VAR_2), FUNC_1(VAR_3));
}
