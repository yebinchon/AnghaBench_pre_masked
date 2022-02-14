
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ ldns_status ;
typedef int ldns_rr ;
typedef int ldns_rdf ;
typedef int ldns_pkt ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ,char const*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,int) ;
 scalar_t__ FUNC_11 (int **,int *,size_t,char const*,int *,int *,int *,int *,int *,int *,int const*,int) ;
 int * FUNC_12 (int const*,size_t,size_t*) ;

bool
FUNC_13(ldns_pkt *VAR_2, const uint8_t *VAR_3, size_t VAR_4, const char* VAR_5,
 const char *VAR_6, const ldns_rdf *VAR_7, int VAR_8)
{
 ldns_rdf *VAR_9;
 ldns_rdf *VAR_10;
 ldns_rdf *VAR_11;
 ldns_rdf *VAR_12;
 ldns_rdf *VAR_13;
 ldns_rdf *VAR_14;
 ldns_rdf *VAR_15;
 ldns_rdf *VAR_16;
 ldns_rdf *VAR_17 = FUNC_8(VAR_0, VAR_5);
 uint16_t VAR_18, VAR_19;
 ldns_status VAR_20;

 uint8_t *VAR_21 = ((void*)0);
 size_t VAR_22 = 0;

 ldns_rr *VAR_23 = FUNC_4(VAR_2);

 if (!VAR_23 || FUNC_9(VAR_23) <= 6) {
  FUNC_7(VAR_17);
  return 0;
 }
 VAR_10 = FUNC_10(VAR_23, 0);
 VAR_11 = FUNC_10(VAR_23, 1);
 VAR_9 = FUNC_10(VAR_23, 2);
 VAR_15 = FUNC_10(VAR_23, 3);
 VAR_12 = FUNC_10(VAR_23, 4);
 VAR_13 = FUNC_10(VAR_23, 5);
 VAR_14 = FUNC_10(VAR_23, 6);


 FUNC_3(VAR_2, ((void*)0));

 VAR_18 = FUNC_1(VAR_2);
 VAR_19 = FUNC_5(VAR_12);
 FUNC_2(VAR_2, VAR_19);

 VAR_21 = FUNC_12(VAR_3, VAR_4, &VAR_22);

 VAR_20 = FUNC_11(&VAR_16, VAR_21, VAR_22,
   VAR_6, VAR_17, VAR_9, VAR_10,
   VAR_11, VAR_13, VAR_14, VAR_7, VAR_8);

 FUNC_0(VAR_21);

 if (VAR_20 != VAR_1) {
  FUNC_7(VAR_17);
  return 0;
 }

 FUNC_3(VAR_2, VAR_23);
 FUNC_2(VAR_2, VAR_18);

 FUNC_7(VAR_17);

 if (FUNC_6(VAR_15, VAR_16) == 0) {
  FUNC_7(VAR_16);
  return 1;
 } else {
  FUNC_7(VAR_16);
  return 0;
 }
}
