
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_status ;
typedef int ldns_rr ;
typedef int ldns_buffer ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int const*) ;
 size_t FUNC_5 (int const*) ;
 int FUNC_6 (int const*,size_t) ;

__attribute__((used)) static ldns_status
FUNC_7(ldns_buffer *VAR_0, const ldns_rr *VAR_1)
{
 size_t VAR_2 = 0;
 size_t VAR_3, VAR_4;

 FUNC_0(VAR_0, "TYPE%u\t", FUNC_4(VAR_1));
 for (VAR_3 = 0; VAR_3 < FUNC_5(VAR_1); VAR_3++) {
  VAR_2 += FUNC_3(FUNC_6(VAR_1, VAR_3));
 }
 if (VAR_2 == 0) {
  FUNC_0(VAR_0, "\\# 0\n");
  return FUNC_1(VAR_0);
 }
 FUNC_0(VAR_0, "\\# %d ", VAR_2);
 for (VAR_3 = 0; VAR_3 < FUNC_5(VAR_1); VAR_3++) {
  for (VAR_4 = 0; VAR_4 < FUNC_3(FUNC_6(VAR_1, VAR_3)); VAR_4++) {
   FUNC_0(VAR_0, "%.2x",
     FUNC_2(FUNC_6(VAR_1, VAR_3))[VAR_4]);
  }
 }
 FUNC_0(VAR_0, "\n");
 return FUNC_1(VAR_0);
}
