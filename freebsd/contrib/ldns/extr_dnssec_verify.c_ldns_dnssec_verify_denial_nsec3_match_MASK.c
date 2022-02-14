
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ldns_status ;
typedef int ldns_rr_type ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
typedef int ldns_rdf ;
typedef scalar_t__ ldns_pkt_rcode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (char*) ;
 int * FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *,size_t) ;
 size_t FUNC_15 (int *) ;
 int * FUNC_16 (int *) ;
 int * VAR_7 ;

ldns_status
FUNC_17( ldns_rr *VAR_8
         , ldns_rr_list *VAR_9
         , VAR_10(ldns_rr_list *VAR_11)
         , ldns_pkt_rcode VAR_12
         , ldns_rr_type VAR_13
         , bool VAR_14
         , ldns_rr **VAR_15
         )
{
 ldns_rdf *VAR_16;
 ldns_rdf *VAR_17;
 ldns_rdf *VAR_18;
 bool VAR_19 = 0;
 ldns_rdf *VAR_20;
 ldns_rdf *VAR_21;

 ldns_rdf *VAR_22 = VAR_22;
 ldns_rdf *VAR_23;
 size_t VAR_24;
 ldns_status VAR_25 = VAR_3;

 if (VAR_15) {
  *VAR_15 = ((void*)0);
 }

 VAR_20 = FUNC_4(FUNC_16(FUNC_14(VAR_9,0)));


 if (VAR_12 == VAR_0) {
  VAR_16 = FUNC_6(
         FUNC_16(VAR_8),
         FUNC_13(VAR_8),
         VAR_9);
                if(!VAR_16) {
                        VAR_25 = VAR_3;
                        goto done;
                }

  VAR_17 = FUNC_5("*");
  (void) FUNC_0(VAR_17, VAR_16);

  for (VAR_24 = 0; VAR_24 < FUNC_15(VAR_9); VAR_24++) {
   VAR_18 =
    FUNC_8(FUNC_14(VAR_9, 0),
           VAR_17
           );
   (void) FUNC_0(VAR_18, VAR_20);

   if (FUNC_11(FUNC_14(VAR_9, VAR_24),
         VAR_18)) {
    VAR_19 = 1;
    if (VAR_15) {
     *VAR_15 = FUNC_14(VAR_9, VAR_24);
    }
   }
   FUNC_12(VAR_18);
  }

  if (! VAR_19) {
   VAR_25 = VAR_4;
  } else {
   VAR_25 = VAR_6;
  }
  FUNC_12(VAR_16);
  FUNC_12(VAR_17);

 } else if (VAR_14 && VAR_13 != VAR_2) {

  VAR_21 = FUNC_8(
                     FUNC_14(VAR_9, 0),
                     FUNC_16(VAR_8));
  (void) FUNC_0(VAR_21, VAR_20);
  for (VAR_24 = 0; VAR_24 < FUNC_15(VAR_9); VAR_24++) {
   if (FUNC_2(VAR_21,
            FUNC_16(FUNC_14(VAR_9, VAR_24)))
       == 0) {
    if (!FUNC_10(
         FUNC_7(FUNC_14(VAR_9, VAR_24)),
         VAR_13)
        &&
        !FUNC_10(
         FUNC_7(FUNC_14(VAR_9, VAR_24)),
         VAR_1)) {
     VAR_25 = VAR_6;
     if (VAR_15) {
      *VAR_15 = FUNC_14(VAR_9, VAR_24);
     }
     goto done;
    }
   }
  }
  VAR_25 = VAR_3;

  VAR_16 = FUNC_6(
       FUNC_16(VAR_8),
       FUNC_13(VAR_8),
       VAR_9);
  if(!VAR_16) {
   VAR_25 = VAR_5;
   goto done;
  }
  VAR_17 = FUNC_5("*");
  (void) FUNC_0(VAR_17, VAR_16);
  for (VAR_24 = 0; VAR_24 < FUNC_15(VAR_9); VAR_24++) {
   VAR_18 =
    FUNC_8(FUNC_14(VAR_9, 0),
      VAR_17);
   (void) FUNC_0(VAR_18, VAR_20);

   if (FUNC_2(VAR_18,
            FUNC_16(FUNC_14(VAR_9, VAR_24)))
       == 0) {
    if (!FUNC_10(
         FUNC_7(FUNC_14(VAR_9, VAR_24)),
         VAR_13)
        &&
        !FUNC_10(
         FUNC_7(FUNC_14(VAR_9, VAR_24)),
         VAR_1)) {
     VAR_25 = VAR_6;
     if (VAR_15) {
      *VAR_15 = FUNC_14(VAR_9, VAR_24);
     }
    }
   }
   FUNC_12(VAR_18);
   if (VAR_25 == VAR_6) {
    break;
   }
  }
  FUNC_12(VAR_16);
  FUNC_12(VAR_17);
 } else if (VAR_14 && VAR_13 == VAR_2) {


  VAR_21 = FUNC_8(FUNC_14(VAR_9,
               0),
           FUNC_16(VAR_8)
           );
  (void) FUNC_0(VAR_21, VAR_20);
  for (VAR_24 = 0; VAR_24 < FUNC_15(VAR_9); VAR_24++) {
   if (FUNC_2(VAR_21,
          FUNC_16(FUNC_14(VAR_9,
                VAR_24)))
       == 0) {
    if (!FUNC_10(
         FUNC_7(FUNC_14(VAR_9, VAR_24)),
         VAR_2)
        &&
        !FUNC_10(
         FUNC_7(FUNC_14(VAR_9, VAR_24)),
         VAR_1)) {
     VAR_25 = VAR_6;
     if (VAR_15) {
      *VAR_15 = FUNC_14(VAR_9, VAR_24);
     }
     goto done;
    }
   }
  }


  VAR_25 = VAR_3;

  VAR_16 = FUNC_6(
       FUNC_16(VAR_8),
       FUNC_13(VAR_8),
       VAR_9);
  if(!VAR_16) {
   VAR_25 = VAR_5;
   goto done;
  }


  if (FUNC_3(VAR_16) + 1
      >= FUNC_3(FUNC_16(VAR_8))) {


   VAR_23 = VAR_21;
  } else {




   VAR_22 = FUNC_1(
     FUNC_16(VAR_8),
     FUNC_3(FUNC_16(VAR_8))
     - (FUNC_3(VAR_16) + 1)
     );
   VAR_23 = FUNC_8(
     FUNC_14(VAR_9, 0),
     VAR_22
     );
   (void) FUNC_0(VAR_23, VAR_20);
  }

  for (VAR_24 = 0; VAR_24 < FUNC_15(VAR_9); VAR_24++) {
   if (FUNC_11(FUNC_14(VAR_9, VAR_24),
                             VAR_23) &&
    FUNC_9(FUNC_14(VAR_9, VAR_24))) {

    VAR_25 = VAR_6;
    if (VAR_15) {
     *VAR_15 = FUNC_14(VAR_9, VAR_24);
    }
    break;
   }
  }
  if (FUNC_3(VAR_16) + 1
      < FUNC_3(FUNC_16(VAR_8))) {




   FUNC_12(VAR_23);
   FUNC_12(VAR_22);
  }
  FUNC_12(VAR_16);
 }

 done:
 FUNC_12(VAR_20);
 return VAR_25;
}
