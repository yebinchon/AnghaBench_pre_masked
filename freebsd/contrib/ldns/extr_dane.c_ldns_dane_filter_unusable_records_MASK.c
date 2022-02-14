
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr_list ;
typedef int ldns_rr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int const*,size_t) ;
 size_t FUNC_6 (int const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static ldns_rr_list*
FUNC_9(const ldns_rr_list* VAR_1)
{
 size_t VAR_2;
 ldns_rr_list* VAR_3 = FUNC_3();
 ldns_rr* VAR_4;

 if (! VAR_3) {
  return ((void*)0);
 }
 for (VAR_2 = 0; VAR_2 < FUNC_6(VAR_1); VAR_2++) {
  VAR_4 = FUNC_5(VAR_1, VAR_2);
  if (FUNC_1(VAR_4) == VAR_0 &&
      FUNC_7(VAR_4) == 4 &&
      FUNC_0(FUNC_8(VAR_4, 0)) <= 3 &&
      FUNC_0(FUNC_8(VAR_4, 1)) <= 1 &&
      FUNC_0(FUNC_8(VAR_4, 2)) <= 2) {

   if (! FUNC_4(VAR_3, VAR_4)) {
    FUNC_2(VAR_3);
    return ((void*)0);
   }
  }
 }
 return VAR_3;
}
