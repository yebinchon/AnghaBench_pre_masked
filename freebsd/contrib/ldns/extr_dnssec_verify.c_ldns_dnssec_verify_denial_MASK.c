
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ldns_status ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
typedef int ldns_rdf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (char*) ;
 int * FUNC_5 (int *,int ,int *) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *,size_t) ;
 size_t FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

ldns_status
FUNC_16(ldns_rr *VAR_3,
                          ldns_rr_list *VAR_4,
                          ldns_rr_list *VAR_5)
{
 ldns_rdf *VAR_6;
 ldns_rdf *VAR_7;
 ldns_rdf *VAR_8;
 ldns_rr *VAR_9;
 size_t VAR_10;
 ldns_status VAR_11;

 ldns_rr *VAR_12;
 bool VAR_13 = 0;
 bool VAR_14 = 0;
 bool VAR_15 = 0;
 bool VAR_16 = 0;

 VAR_7 = FUNC_4("*");
 VAR_6 = FUNC_14(VAR_3);
 VAR_8 = FUNC_3(VAR_6);
 VAR_11 = FUNC_0(VAR_7, VAR_8);
 FUNC_10(VAR_8);
 if (VAR_11 != VAR_2) {
  return VAR_11;
 }

 for (VAR_10 = 0; VAR_10 < FUNC_13(VAR_4); VAR_10++) {
  VAR_9 = FUNC_12(VAR_4, VAR_10);
  if (FUNC_1(VAR_6, FUNC_14(VAR_9)) == 0) {



   VAR_12 = FUNC_5(
       FUNC_14(VAR_9),
       FUNC_11(VAR_9),
       VAR_5);
   if (VAR_12 && FUNC_9(FUNC_15(VAR_12))
       == FUNC_2(VAR_6)) {
    VAR_15 = 1;
   }

   if (FUNC_6(FUNC_8(VAR_9),
            FUNC_11(VAR_3))) {
    VAR_14 = 1;
   }
  }
  if (FUNC_7(VAR_9, VAR_6)) {
   VAR_13 = 1;
  }

  if (FUNC_1(VAR_7,
         FUNC_14(VAR_9)) == 0) {
   if (FUNC_6(FUNC_8(VAR_9),
            FUNC_11(VAR_3))) {
    VAR_16 = 1;
   }
  }

  if (FUNC_7(VAR_9, VAR_7)) {
   VAR_15 = 1;
  }

 }

 FUNC_10(VAR_7);

 if (VAR_14 || !VAR_13) {
  return VAR_0;
 }

 if (VAR_16 || !VAR_15) {
  return VAR_1;
 }

 return VAR_2;
}
