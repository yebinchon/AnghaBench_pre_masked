
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const ldns_zone ;
typedef int ldns_rr_list ;
typedef int ldns_key_list ;
typedef int ldns_dnssec_zone ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int *,int *,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,size_t) ;
 size_t FUNC_9 (int *) ;
 int const* FUNC_10 () ;
 int FUNC_11 (int const*,int ) ;
 int * FUNC_12 (int const*) ;
 int FUNC_13 (int const*,int ) ;
 int FUNC_14 (int const*) ;

ldns_zone *
FUNC_15(const ldns_zone *VAR_1, ldns_key_list *VAR_2)
{
 ldns_dnssec_zone *VAR_3;
 ldns_zone *VAR_4;
 ldns_rr_list *VAR_5;
 size_t VAR_6;

 VAR_4 = FUNC_10();
 VAR_3 = FUNC_2();

 (void) FUNC_0(VAR_3, FUNC_14(VAR_1));
 FUNC_13(VAR_4, FUNC_4(FUNC_14(VAR_1)));

 for (VAR_6 = 0; VAR_6 < FUNC_9(FUNC_12(VAR_1)); VAR_6++) {
  (void) FUNC_0(VAR_3,
         FUNC_8(FUNC_12(VAR_1),
             VAR_6));
  FUNC_11(VAR_4,
        FUNC_4(FUNC_8(FUNC_12(VAR_1),
              VAR_6)));
 }

 VAR_5 = FUNC_6();
 (void) FUNC_3(VAR_3,
          VAR_5,
          VAR_2,
          VAR_0,
          ((void*)0));

     for (VAR_6 = 0; VAR_6 < FUNC_9(VAR_5); VAR_6++) {
  FUNC_7(FUNC_12(VAR_4),
       FUNC_4(FUNC_8(VAR_5, VAR_6)));
 }

 FUNC_5(VAR_5);
 FUNC_1(VAR_3);

 return VAR_4;
}
