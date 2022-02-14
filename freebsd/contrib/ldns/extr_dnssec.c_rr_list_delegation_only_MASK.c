
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr_list ;
typedef int ldns_rr ;
typedef int ldns_rdf ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int const*) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int const*,size_t) ;
 size_t FUNC_3 (int const*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(const ldns_rdf *VAR_1, const ldns_rr_list *VAR_2)
{
 size_t VAR_3;
 ldns_rr *VAR_4;
 if (!VAR_1 || !VAR_2) return 0;
 for (VAR_3 = 0; VAR_3 < FUNC_3(VAR_2); VAR_3++) {
  VAR_4 = FUNC_2(VAR_2, VAR_3);
  if (FUNC_0(FUNC_4(VAR_4), VAR_1) == 0) {
   return 0;
  }
  if (FUNC_1(VAR_4) != VAR_0) {
   return 0;
  }
 }
 return 1;
}
