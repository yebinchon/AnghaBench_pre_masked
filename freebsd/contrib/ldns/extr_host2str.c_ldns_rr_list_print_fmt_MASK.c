
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr_list ;
typedef int ldns_output_format ;
typedef int FILE ;


 int FUNC_0 (int const*,size_t) ;
 size_t FUNC_1 (int const*) ;
 int FUNC_2 (int *,int const*,int ) ;

void
FUNC_3(FILE *VAR_0,
  const ldns_output_format *VAR_1, const ldns_rr_list *VAR_2)
{
 size_t VAR_3;
 for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_2); VAR_3++) {
  FUNC_2(VAR_0, VAR_1, FUNC_0(VAR_2, VAR_3));
 }
}
