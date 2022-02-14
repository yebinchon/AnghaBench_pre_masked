
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int ldns_zone ;
typedef int ldns_rr_list ;
typedef int ldns_key_list ;
typedef int ldns_dnssec_zone ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int *,int *,int ,int *,int ,int ,int ,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,size_t) ;
 size_t FUNC_9 (int *) ;
 int * FUNC_10 () ;
 int FUNC_11 (int *,int ) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;

ldns_zone *
FUNC_15(ldns_zone *VAR_1, ldns_key_list *VAR_2, uint8_t VAR_3, uint8_t VAR_4, uint16_t VAR_5, uint8_t VAR_6, uint8_t *VAR_7)
{
 ldns_dnssec_zone *VAR_8;
 ldns_zone *VAR_9;
 ldns_rr_list *VAR_10;
 size_t VAR_11;

 VAR_9 = FUNC_10();
 VAR_8 = FUNC_2();

 (void) FUNC_0(VAR_8, FUNC_14(VAR_1));
 FUNC_13(VAR_9, FUNC_4(FUNC_14(VAR_1)));

 for (VAR_11 = 0; VAR_11 < FUNC_9(FUNC_12(VAR_1)); VAR_11++) {
  (void) FUNC_0(VAR_8,
         FUNC_8(FUNC_12(VAR_1),
             VAR_11));
  FUNC_11(VAR_9,
        FUNC_4(FUNC_8(FUNC_12(VAR_1),
              VAR_11)));
 }

 VAR_10 = FUNC_6();
 (void) FUNC_3(VAR_8,
        VAR_10,
        VAR_2,
        VAR_0,
        ((void*)0),
        VAR_3,
        VAR_4,
        VAR_5,
        VAR_6,
        VAR_7);

     for (VAR_11 = 0; VAR_11 < FUNC_9(VAR_10); VAR_11++) {
  FUNC_7(FUNC_12(VAR_9),
       FUNC_4(FUNC_8(VAR_10, VAR_11)));
 }

 FUNC_5(VAR_10);
 FUNC_1(VAR_8);

 return VAR_9;
}
