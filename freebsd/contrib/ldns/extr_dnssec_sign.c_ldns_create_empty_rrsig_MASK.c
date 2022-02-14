
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ time_t ;
typedef int ldns_rr_list ;
typedef int ldns_rr_class ;
typedef int ldns_rr ;
typedef int ldns_rdf ;
typedef int ldns_key ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ,int ) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int const*,int ) ;
 int * FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (int *,int *) ;
 int FUNC_24 (int *,int ) ;
 int FUNC_25 (int *,int ) ;
 int FUNC_26 (int *,int *) ;
 int FUNC_27 (int *,scalar_t__) ;
 scalar_t__ FUNC_28 (int ) ;
 scalar_t__ FUNC_29 (int *) ;

ldns_rr *
FUNC_30(const ldns_rr_list *VAR_8,
                        const ldns_key *VAR_9)
{
 uint32_t VAR_10;
 ldns_rr_class VAR_11;
 time_t VAR_12;
 ldns_rr *VAR_13;
 uint8_t VAR_14;
 ldns_rdf *VAR_15;

 VAR_14 = FUNC_2(FUNC_16(FUNC_14(VAR_8,
                                                    0)));

        if(FUNC_1(FUNC_16(FUNC_14(VAR_8, 0))))
                VAR_14 --;

 VAR_13 = FUNC_15(VAR_7);


 VAR_10 = FUNC_28(FUNC_14(VAR_8, 0));
 VAR_11 = FUNC_12(FUNC_14(VAR_8, 0));

 FUNC_27(VAR_13, VAR_10);
 FUNC_25(VAR_13, VAR_11);
 FUNC_26(VAR_13,
     FUNC_11(
          FUNC_16(
        FUNC_14(VAR_8,
          0))));




 (void)FUNC_22(
     VAR_13,
     FUNC_9(VAR_3,
      VAR_10));

 VAR_15 = FUNC_11(FUNC_7(VAR_9));
 FUNC_0(VAR_15);
 (void)FUNC_23(
   VAR_13,
   VAR_15);

 (void)FUNC_21(
   VAR_13,
   FUNC_10(VAR_4,
                        VAR_14));

 VAR_12 = FUNC_29(((void*)0));
 if (FUNC_5(VAR_9) != 0) {
  (void)FUNC_19(
    VAR_13,
    FUNC_9(
        VAR_5,
        FUNC_5(VAR_9)));
 } else {
  (void)FUNC_19(
    VAR_13,
    FUNC_9(VAR_5, VAR_12));
 }
 if (FUNC_4(VAR_9) != 0) {
  (void)FUNC_18(
    VAR_13,
    FUNC_9(
        VAR_5,
        FUNC_4(VAR_9)));
 } else {
  (void)FUNC_18(
        VAR_13,
    FUNC_9(
        VAR_5,
        VAR_12 + VAR_0));
 }

 (void)FUNC_20(
     VAR_13,
     FUNC_8(VAR_2,
                           FUNC_6(VAR_9)));

 (void)FUNC_17(
   VAR_13,
   FUNC_10(
       VAR_1,
       FUNC_3(VAR_9)));

 (void)FUNC_24(
   VAR_13,
   FUNC_8(
       VAR_6,
       FUNC_13(FUNC_14(VAR_8,
                                        0))));
 return VAR_13;
}
