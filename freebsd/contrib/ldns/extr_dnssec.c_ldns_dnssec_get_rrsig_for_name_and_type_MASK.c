
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ldns_rr_type ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
typedef int ldns_rdf ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int const*) ;
 scalar_t__ const FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int const*,size_t) ;
 size_t FUNC_4 (int const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

ldns_rr *
FUNC_7(const ldns_rdf *VAR_1,
                                        const ldns_rr_type VAR_2,
                                        const ldns_rr_list *VAR_3)
{
 size_t VAR_4;
 ldns_rr *VAR_5;

 if (!VAR_1 || !VAR_3) {
  return ((void*)0);
 }

 for (VAR_4 = 0; VAR_4 < FUNC_4(VAR_3); VAR_4++) {
  VAR_5 = FUNC_3(VAR_3, VAR_4);
  if (FUNC_2(VAR_5) == VAR_0) {
   if (FUNC_0(FUNC_5(VAR_5),
                          VAR_1) == 0 &&
       FUNC_1(FUNC_6(VAR_5))
       == VAR_2
       ) {
    return VAR_5;
   }
  }
 }

 return ((void*)0);
}
