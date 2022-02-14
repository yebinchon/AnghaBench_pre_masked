
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr_list ;
typedef int ldns_rr ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int const*,size_t) ;
 size_t FUNC_5 (int const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int const*) ;

ldns_rr *
FUNC_9(const ldns_rr *VAR_1,
         const ldns_rr_list *VAR_2)
{
 size_t VAR_3;
 ldns_rr *VAR_4;

 if (!VAR_1 || !VAR_2) {
  return ((void*)0);
 }

 for (VAR_3 = 0; VAR_3 < FUNC_5(VAR_2); VAR_3++) {
  VAR_4 = FUNC_4(VAR_2, VAR_3);
  if (FUNC_3(VAR_4) == VAR_0) {
   if (FUNC_1(FUNC_6(VAR_4),
                          FUNC_8(VAR_1)) == 0 &&
       FUNC_2(FUNC_7(VAR_1)) ==
       FUNC_0(VAR_4)
       ) {
    return VAR_4;
   }
  }
 }

 return ((void*)0);
}
