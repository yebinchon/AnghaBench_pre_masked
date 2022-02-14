
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr_type ;
typedef int ldns_rr_list ;
typedef int FILE ;





 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,size_t) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;

void
FUNC_8(FILE *VAR_0, ldns_rr_list *VAR_1, const char *VAR_2)
{
 size_t VAR_3;
 ldns_rr_type VAR_4;

 for(VAR_3 = 0; VAR_3 < FUNC_4(VAR_1); VAR_3++) {
  VAR_4 = FUNC_2(FUNC_3(VAR_1, VAR_3));
  if (VAR_3 == 0 && VAR_4 != 128) {
   if (VAR_2) {
    FUNC_0(VAR_0, "%s ", VAR_2);
   }
  }
  switch(VAR_4) {
  case 130:
   FUNC_5(VAR_0, FUNC_3(VAR_1, VAR_3));
   break;
  case 128:
   FUNC_7(VAR_0, FUNC_3(VAR_1, VAR_3));
   break;
  case 129:
   FUNC_6(VAR_0, FUNC_3(VAR_1, VAR_3));
   break;
  default:

   break;
  }
  FUNC_1("\n", VAR_0);
 }
}
