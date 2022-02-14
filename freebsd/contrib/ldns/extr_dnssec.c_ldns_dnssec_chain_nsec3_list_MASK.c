
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_status ;
typedef int ldns_rr_list ;
typedef int ldns_rdf ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int * FUNC_1 (int ,int ) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (int **,char*) ;
 int FUNC_9 (char*) ;

ldns_status
FUNC_10(ldns_rr_list *VAR_1)
{
 size_t VAR_2;
 char *VAR_3;
 ldns_rdf *VAR_4;
 ldns_rdf *VAR_5;
 ldns_status VAR_6 = VAR_0;

 for (VAR_2 = 0; VAR_2 < FUNC_5(VAR_1); VAR_2++) {
  if (VAR_2 == FUNC_5(VAR_1) - 1) {
   VAR_4 =
    FUNC_1(FUNC_6(FUNC_4(VAR_1,
               0)), 0);
   VAR_3 = FUNC_2(VAR_4);
   if (VAR_3[FUNC_9(VAR_3) - 1]
       == '.') {
    VAR_3[FUNC_9(VAR_3) - 1]
     = '\0';
   }
   VAR_6 = FUNC_8(&VAR_5,
         VAR_3);
   if (!FUNC_7(FUNC_4(VAR_1, VAR_2),
        VAR_5, 4)) {

   }

   FUNC_3(VAR_4);
   FUNC_0(VAR_3);
  } else {
   VAR_4 =
    FUNC_1(FUNC_6(FUNC_4(VAR_1,
               VAR_2 + 1)),
         0);
   VAR_3 = FUNC_2(VAR_4);
   if (VAR_3[FUNC_9(VAR_3) - 1]
       == '.') {
    VAR_3[FUNC_9(VAR_3) - 1]
     = '\0';
   }
   VAR_6 = FUNC_8(&VAR_5,
         VAR_3);
   FUNC_3(VAR_4);
   FUNC_0(VAR_3);
   if (!FUNC_7(FUNC_4(VAR_1, VAR_2),
        VAR_5, 4)) {

   }
  }
 }
 return VAR_6;
}
