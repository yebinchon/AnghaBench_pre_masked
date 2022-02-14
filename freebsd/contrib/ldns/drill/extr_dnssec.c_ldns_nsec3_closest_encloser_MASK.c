
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int ldns_rr_type ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
typedef int ldns_rdf ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int ,int ,int ,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int *) ;
 int * FUNC_14 (int *,size_t) ;
 size_t FUNC_15 (int *) ;
 int * FUNC_16 (int *) ;
 int FUNC_17 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;

ldns_rdf *
FUNC_18(ldns_rdf *VAR_3, ldns_rr_type VAR_4, ldns_rr_list *VAR_5)
{

 uint8_t VAR_6;
 uint32_t VAR_7;
 uint8_t VAR_8;
 uint8_t *VAR_9;

 ldns_rdf *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12;
 bool VAR_13;

 bool VAR_14;
 bool VAR_15;

 ldns_rdf *VAR_16 = ((void*)0);

 size_t VAR_17;
 ldns_rr *VAR_18;
 ldns_rdf *VAR_19 = ((void*)0);

 if (!VAR_3 || !VAR_5 || FUNC_15(VAR_5) < 1) {
  return ((void*)0);
 }

 if (VAR_2 >= 4) {
  FUNC_17(";; finding closest encloser for type %d ", VAR_4);
  FUNC_13(VAR_1, VAR_3);
  FUNC_17("\n");
 }

 VAR_18 = FUNC_14(VAR_5, 0);
 VAR_6 = FUNC_5(VAR_18);
 VAR_8 = FUNC_9(VAR_18);
 VAR_9 = FUNC_8(VAR_18);
 VAR_7 = FUNC_7(VAR_18);
 if (VAR_9 == ((void*)0)) {
  goto done;
 }

 VAR_10 = FUNC_11(VAR_3);
 if (VAR_10 == ((void*)0)) {
  goto done;
 }

 VAR_13 = 0;

 VAR_16 = FUNC_4(FUNC_16(VAR_18));
 if (VAR_16 == ((void*)0)) {
  goto done;
 }


 while (FUNC_3(VAR_10) > 0) {
  VAR_14 = 0;
  VAR_15 = 0;

  if (VAR_2 >= 3) {
   FUNC_17(";; ");
   FUNC_13(VAR_1, VAR_10);
   FUNC_17(" hashes to: ");
  }
  VAR_11 = FUNC_6(VAR_10, VAR_6, VAR_7, VAR_8, VAR_9);
  if (VAR_11 == ((void*)0)) {
   goto done;
  }

  if (FUNC_1(VAR_11, VAR_16) != VAR_0){
   goto done;
  }

  if (VAR_2 >= 3) {
   FUNC_13(VAR_1, VAR_11);
   FUNC_17("\n");
  }

  for (VAR_17 = 0; VAR_17 < FUNC_15(VAR_5); VAR_17++) {
   VAR_18 = FUNC_14(VAR_5, VAR_17);




   if (FUNC_2(FUNC_16(VAR_18), VAR_11) == 0) {
    if (VAR_2 >= 4) {
     FUNC_17(";; exact match found\n");
    }
     VAR_14 = 1;
   } else if (FUNC_10(VAR_18, VAR_11)) {
    if (VAR_2 >= 4) {
     FUNC_17(";; in range of an nsec\n");
    }
    VAR_15 = 1;
   }

  }
  if (!VAR_14 && VAR_15) {
   VAR_13 = 1;
  } else if (VAR_14 && VAR_13) {
   VAR_19 = FUNC_11(VAR_10);
  } else if (VAR_14 && !VAR_13) {

   if (VAR_2 >= 4) {
    FUNC_17(";; the closest encloser is the same name (ie. this is an exact match, ie there is no closest encloser)\n");
   }
   FUNC_12(VAR_11);
   goto done;
  } else {
   VAR_13 = 0;
  }

  FUNC_12(VAR_11);
  VAR_12 = VAR_10;
  VAR_10 = FUNC_4(VAR_10);
  FUNC_12(VAR_12);
  if (VAR_10 == ((void*)0)) {
   goto done;
  }
 }

done:
 FUNC_0(VAR_9);
 FUNC_12(VAR_16);
 FUNC_12(VAR_10);

 if (!VAR_19) {
  if (VAR_2 >= 4) {
   FUNC_17(";; no closest encloser found\n");
  }
 }


 return VAR_19;
}
