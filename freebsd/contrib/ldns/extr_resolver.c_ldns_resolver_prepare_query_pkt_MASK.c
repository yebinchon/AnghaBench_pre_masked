
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
typedef scalar_t__ ldns_status ;
typedef scalar_t__ ldns_rr_type ;
typedef int ldns_rr_class ;
typedef int ldns_rr ;
typedef int ldns_resolver ;
typedef int ldns_rdf ;
typedef int ldns_pkt ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ,int,int *) ;
 int FUNC_3 (int ,int *) ;
 int * FUNC_4 (int *,scalar_t__,int ,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,struct timeval) ;
 int * FUNC_10 (int const*) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *) ;
 int * FUNC_18 () ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *,int *) ;
 int FUNC_22 (int *,int) ;
 int FUNC_23 (int *,int ) ;
 scalar_t__ FUNC_24 (int **,char*) ;
 int VAR_6 ;
 int FUNC_25 (int *) ;

ldns_status
FUNC_26(ldns_pkt **VAR_7, ldns_resolver *VAR_8,
                                const ldns_rdf *VAR_9, ldns_rr_type VAR_10,
                                ldns_rr_class VAR_11, uint16_t VAR_12)
{
 struct timeval VAR_13;
 ldns_rr* VAR_14 = ((void*)0);



 if (VAR_10 == VAR_2) {
  ldns_rdf *VAR_15;
  ldns_rdf *VAR_16;
  ldns_rdf *VAR_17;
  ldns_rdf *VAR_18;
  ldns_rdf *VAR_19;
  ldns_rdf *VAR_20;
  ldns_rdf *VAR_21;
  ldns_rdf *VAR_22;
  VAR_14 = FUNC_18();

  if (!VAR_14) {
   return VAR_4;
  }
  VAR_15 = FUNC_10(VAR_9);
  if (!VAR_15) {
   FUNC_17(VAR_14);
   return VAR_4;
  }
  FUNC_21(VAR_14, VAR_15);
  FUNC_23(VAR_14, VAR_3);
  FUNC_20(VAR_14, VAR_11);
  FUNC_22(VAR_14, 0);
  if (FUNC_24(&VAR_16, ".") != VAR_5) {
   FUNC_17(VAR_14);
   return VAR_4;
  } else FUNC_19(VAR_14, VAR_16);
  if (FUNC_24(&VAR_17, ".") != VAR_5) {
   FUNC_17(VAR_14);
   return VAR_4;
  } else FUNC_19(VAR_14, VAR_17);
  VAR_18 = FUNC_0(VAR_1, FUNC_15(VAR_8));
  if (!VAR_18) {
   FUNC_17(VAR_14);
   return VAR_4;
  } else FUNC_19(VAR_14, VAR_18);
  VAR_19 = FUNC_0(VAR_1, 0);
  if (!VAR_19) {
   FUNC_17(VAR_14);
   return VAR_4;
  } else FUNC_19(VAR_14, VAR_19);
  VAR_20 = FUNC_0(VAR_1, 0);
  if (!VAR_20) {
   FUNC_17(VAR_14);
   return VAR_4;
  } else FUNC_19(VAR_14, VAR_20);
  VAR_21 = FUNC_0(VAR_1, 0);
  if (!VAR_21) {
   FUNC_17(VAR_14);
   return VAR_4;
  } else FUNC_19(VAR_14, VAR_21);
  VAR_22 = FUNC_0(VAR_1, 0);
  if (!VAR_22) {
   FUNC_17(VAR_14);
   return VAR_4;
  } else FUNC_19(VAR_14, VAR_22);

  *VAR_7 = FUNC_2(FUNC_10(VAR_9),
   VAR_11, VAR_12, VAR_14);
 } else {
  *VAR_7 = FUNC_4(FUNC_10(VAR_9), VAR_10, VAR_11, VAR_12);
 }
 if (!*VAR_7) {
  FUNC_17(VAR_14);
  return VAR_4;
 }


 if (FUNC_12(VAR_8)) {
  if (FUNC_14(VAR_8) == 0) {
   FUNC_16(VAR_8, 4096);
  }
  FUNC_6(*VAR_7, 1);
  if (FUNC_13(VAR_8) || (VAR_12 & VAR_0)) {
   FUNC_5(*VAR_7, 1);
  }
 }


 if (FUNC_14(VAR_8) != 0) {
  FUNC_7(*VAR_7, FUNC_14(VAR_8));
 }


 VAR_13.tv_sec = FUNC_25(((void*)0));
 VAR_13.tv_usec = 0;
 FUNC_9(*VAR_7, VAR_13);


 if (FUNC_11(VAR_8)) {
  FUNC_3(VAR_6, *VAR_7);
 }


 if (FUNC_1(*VAR_7) == 0) {
  FUNC_8(*VAR_7);
 }

 return VAR_5;
}
