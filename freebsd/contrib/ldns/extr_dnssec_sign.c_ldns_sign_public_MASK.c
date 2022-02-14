
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
typedef int ldns_rdf ;
typedef int ldns_key_list ;
typedef int ldns_key ;
typedef int ldns_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,size_t) ;
 size_t FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 () ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,scalar_t__) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (int *,int *) ;
 int * FUNC_23 (int *,int *) ;

ldns_rr_list *
FUNC_24(ldns_rr_list *VAR_3, ldns_key_list *VAR_4)
{
 ldns_rr_list *VAR_5;
 ldns_rr_list *VAR_6;
 ldns_rr *VAR_7;
 ldns_rdf *VAR_8;
 ldns_key *VAR_9;
 size_t VAR_10;
 uint16_t VAR_11;
 ldns_buffer *VAR_12;
 ldns_rdf *VAR_13;

 if (!VAR_3 || FUNC_17(VAR_3) < 1 || !VAR_4) {
  return ((void*)0);
 }

 VAR_13 = ((void*)0);

 VAR_5 = FUNC_14();



 VAR_6 = FUNC_11(VAR_3);
 if (!VAR_6) {
  return ((void*)0);
 }


 for(VAR_11 = 0; VAR_11 < FUNC_17(VAR_6); VAR_11++) {
  FUNC_20(FUNC_16(VAR_6, VAR_11),
   FUNC_21(FUNC_16(VAR_3, 0)));
  FUNC_8(FUNC_16(VAR_6, VAR_11));
 }

 FUNC_18(VAR_6);

 for (VAR_10 = 0;
  VAR_10 < FUNC_5(VAR_4);
  VAR_10++) {
  if (!FUNC_6(FUNC_4(VAR_4, VAR_10))) {
   continue;
  }
  VAR_12 = FUNC_1(VAR_1);
  if (!VAR_12) {
   FUNC_13(VAR_6);
   FUNC_13(VAR_5);
   FUNC_7(VAR_13);
   return ((void*)0);
  }
  VAR_8 = ((void*)0);

  VAR_9 = FUNC_4(VAR_4, VAR_10);


  if (FUNC_3(VAR_9) & VAR_0) {
   VAR_7 = FUNC_2(VAR_6,
                                         VAR_9);





   if (FUNC_22(VAR_12, VAR_7)
       != VAR_2) {
    FUNC_0(VAR_12);

    FUNC_12(VAR_6);
    FUNC_9(VAR_7);
    FUNC_12(VAR_5);
    return ((void*)0);
   }


   if (FUNC_10(VAR_12, VAR_6)
       != VAR_2) {
    FUNC_0(VAR_12);
    FUNC_12(VAR_6);
    FUNC_9(VAR_7);
    FUNC_12(VAR_5);
    return ((void*)0);
   }

   VAR_8 = FUNC_23(VAR_12, VAR_9);

   if (!VAR_8) {

    FUNC_12(VAR_6);
    FUNC_9(VAR_7);
    FUNC_12(VAR_5);
    return ((void*)0);
   }

   FUNC_19(VAR_7, VAR_8);


   FUNC_15(VAR_5, VAR_7);
  }
  FUNC_0(VAR_12);
 }
 FUNC_12(VAR_6);

 return VAR_5;
}
