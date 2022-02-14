
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ldns_rr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int const*) ;
 int * FUNC_3 (int const*,int ) ;

uint8_t
FUNC_4(const ldns_rr *VAR_2)
{
 if (VAR_2 &&
       (FUNC_2(VAR_2) == VAR_0 ||
        FUNC_2(VAR_2) == VAR_1)
     && (FUNC_3(VAR_2, 0) != ((void*)0))
     && FUNC_1(FUNC_3(VAR_2, 0)) > 0) {
  return FUNC_0(FUNC_3(VAR_2, 0));
 }
 return 0;
}
