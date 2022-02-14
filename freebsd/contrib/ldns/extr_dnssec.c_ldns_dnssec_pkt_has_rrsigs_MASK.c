
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_pkt ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 size_t FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,size_t) ;

bool
FUNC_6(const ldns_pkt *VAR_1)
{
 size_t VAR_2;
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++) {
  if (FUNC_4(FUNC_5(FUNC_1(VAR_1), VAR_2)) ==
      VAR_0) {
   return 1;
  }
 }
 for (VAR_2 = 0; VAR_2 < FUNC_3(VAR_1); VAR_2++) {
  if (FUNC_4(FUNC_5(FUNC_2(VAR_1), VAR_2)) ==
      VAR_0) {
   return 1;
  }
 }
 return 0;
}
