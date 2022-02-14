
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_zone ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
typedef int ldns_rdf ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,int *) ;
 int * FUNC_8 (int *,size_t) ;
 size_t FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 size_t FUNC_11 (int const*) ;
 int * FUNC_12 (int const*) ;
 int * FUNC_13 (int const*) ;

ldns_rr_list *
FUNC_14(const ldns_zone *VAR_3)
{
 ldns_rr_list *VAR_4;
 ldns_rr_list *VAR_5;
 ldns_rr_list *VAR_6;
 ldns_rr *VAR_7, *VAR_8, *VAR_9;
 ldns_rdf *VAR_10, *VAR_11;
 size_t VAR_12,VAR_13;

 VAR_4 = ((void*)0);
 VAR_5 = ((void*)0);
 VAR_6 = ((void*)0);


 if (!FUNC_13(VAR_3)) {
  return ((void*)0);
 }

 VAR_4 = FUNC_6();
 if (!VAR_4) goto memory_error;
 VAR_5 = FUNC_6();
 if (!VAR_5) goto memory_error;
 VAR_6 = FUNC_6();
 if (!VAR_6) goto memory_error;

 for(VAR_12 = 0; VAR_12 < FUNC_11(VAR_3); VAR_12++) {
  VAR_7 = FUNC_8(FUNC_12(VAR_3), VAR_12);
  if (FUNC_4(VAR_7) == VAR_0 ||
    FUNC_4(VAR_7) == VAR_1) {

   if (!FUNC_7(VAR_5, VAR_7)) goto memory_error;
   continue;
  }
  if (FUNC_4(VAR_7) == VAR_2) {




   if (FUNC_3(FUNC_10(VAR_7),
      FUNC_10(FUNC_13(VAR_3))) != 0) {
    if (!FUNC_7(VAR_4, VAR_7)) goto memory_error;
   }
   continue;
  }
 }


 for(VAR_12 = 0; VAR_12 < FUNC_9(VAR_4); VAR_12++) {
  VAR_8 = FUNC_8(VAR_4, VAR_12);
  VAR_11 = FUNC_10(VAR_8);

  for(VAR_13 = 0; VAR_13 < FUNC_9(VAR_5); VAR_13++) {
   VAR_9 = FUNC_8(VAR_5, VAR_13);
   VAR_10 = FUNC_10(VAR_9);

   if (FUNC_2(VAR_10, VAR_11) ||
    FUNC_1(VAR_10, VAR_11) == 0) {

    if (!FUNC_7(VAR_6, VAR_9)) goto memory_error;
   }
  }
 }

 FUNC_5(VAR_5);
 FUNC_5(VAR_4);

 if (FUNC_9(VAR_6) == 0) {
  FUNC_5(VAR_6);
  return ((void*)0);
 } else {
  return VAR_6;
 }

memory_error:
 if (VAR_4) {
  FUNC_0(VAR_4);
 }
 if (VAR_5) {
  FUNC_5(VAR_5);
 }
 if (VAR_6) {
  FUNC_5(VAR_6);
 }
 return ((void*)0);
}
