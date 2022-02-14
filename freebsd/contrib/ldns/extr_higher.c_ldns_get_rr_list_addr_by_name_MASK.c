
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int ldns_rr_list ;
typedef int ldns_rr_class ;
typedef int ldns_resolver ;
typedef int ldns_rdf ;
typedef int ldns_pkt ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int const*,int ) ;
 scalar_t__ FUNC_4 (int const*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int const*,int ,int ,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int *,int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 () ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,size_t) ;
 size_t FUNC_15 (int *) ;
 int FUNC_16 (int ) ;

ldns_rr_list *
FUNC_17(ldns_resolver *VAR_6, const ldns_rdf *VAR_7,
  ldns_rr_class VAR_8, uint16_t VAR_9)
{
 ldns_pkt *VAR_10;
 ldns_rr_list *VAR_11;
 ldns_rr_list *VAR_12;
 ldns_rr_list *VAR_13 = ((void*)0);
 ldns_rr_list *VAR_14;
 size_t VAR_15;
 uint8_t VAR_16;

 VAR_12 = ((void*)0);
 VAR_11 = ((void*)0);
 VAR_13 = ((void*)0);

 if (!VAR_6) {
  return ((void*)0);
 }
 if (FUNC_4(VAR_7) != VAR_1) {
  return ((void*)0);
 }

 VAR_16 = FUNC_5(VAR_6);


 FUNC_7(VAR_6, VAR_2);

 VAR_14 = FUNC_0(((void*)0));
 for (VAR_15 = 0; VAR_15 < FUNC_15(VAR_14); VAR_15++) {
  if (FUNC_3(VAR_7,
     FUNC_16(FUNC_14(VAR_14,
       VAR_15))) == 0) {
   if (!VAR_13) {
    VAR_13 = FUNC_12();
   }
   FUNC_13(VAR_13,
     FUNC_8(FUNC_14(VAR_14, VAR_15)));
  }
 }
 FUNC_11(VAR_14);

 if (VAR_13) {
  return VAR_13;
 }


 VAR_10 = FUNC_6(VAR_6, VAR_7, VAR_4, VAR_8, VAR_9 | VAR_0);
 if (VAR_10) {

  VAR_11 = FUNC_2(VAR_10, VAR_4,
   VAR_5);
  FUNC_1(VAR_10);
 }

 VAR_10 = FUNC_6(VAR_6, VAR_7, VAR_3, VAR_8, VAR_9 | VAR_0);
 if (VAR_10) {

  VAR_12 = FUNC_2(VAR_10, VAR_3, VAR_5);
  FUNC_1(VAR_10);
 }
 FUNC_7(VAR_6, VAR_16);

 if (VAR_11 && VAR_12) {
  VAR_13 = FUNC_9(VAR_11, VAR_12);
  FUNC_11(VAR_11);
  FUNC_11(VAR_12);
  return VAR_13;
 }

 if (VAR_11) {
  VAR_13 = FUNC_10(VAR_11);
 }

 if (VAR_12) {
  VAR_13 = FUNC_10(VAR_12);
 }

 FUNC_11(VAR_11);
 FUNC_11(VAR_12);
 return VAR_13;
}
