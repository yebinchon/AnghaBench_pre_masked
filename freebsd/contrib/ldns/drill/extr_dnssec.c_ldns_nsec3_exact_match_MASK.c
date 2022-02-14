
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int ldns_rr_type ;
typedef int ldns_rr_list ;
struct TYPE_3__ {char* _name; } ;
typedef TYPE_1__ ldns_rr_descriptor ;
typedef int ldns_rr ;
typedef int ldns_rdf ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int ,int ,int ,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;
 TYPE_1__* FUNC_12 (int) ;
 int * FUNC_13 (int *,size_t) ;
 size_t FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;

ldns_rr *
FUNC_17(ldns_rdf *VAR_3, ldns_rr_type VAR_4, ldns_rr_list *VAR_5) {
 uint8_t VAR_6;
 uint32_t VAR_7;
 uint8_t VAR_8;
 uint8_t *VAR_9;

 ldns_rdf *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);

 size_t VAR_12;
 ldns_rr *VAR_13;
 ldns_rr *VAR_14 = ((void*)0);

 const ldns_rr_descriptor *VAR_15;

 ldns_rdf *VAR_16 = ((void*)0);

 if (VAR_2 >= 4) {
  FUNC_16(";; finding exact match for ");
  VAR_15 = FUNC_12(VAR_4);
  if (VAR_15 && VAR_15->_name) {
   FUNC_16("%s ", VAR_15->_name);
  } else {
   FUNC_16("TYPE%d ", VAR_4);
  }
  FUNC_11(VAR_1, VAR_3);
  FUNC_16("\n");
 }

 if (!VAR_3 || !VAR_5 || FUNC_14(VAR_5) < 1) {
  if (VAR_2 >= 4) {
   FUNC_16("no qname, nsec3s or list empty\n");
  }
  return ((void*)0);
 }

 VAR_13 = FUNC_13(VAR_5, 0);
 VAR_6 = FUNC_4(VAR_13);
 VAR_8 = FUNC_8(VAR_13);
 VAR_9 = FUNC_7(VAR_13);
 VAR_7 = FUNC_6(VAR_13);
 if (VAR_9 == ((void*)0)) {
  goto done;
 }

 VAR_10 = FUNC_9(VAR_3);
 if (VAR_10 == ((void*)0)) {
  goto done;
 }
 if (VAR_2 >= 4) {
  FUNC_16(";; owner name hashes to: ");
 }
 VAR_11 = FUNC_5(VAR_10, VAR_6, VAR_7, VAR_8, VAR_9);
 if (VAR_11 == ((void*)0)) {
  goto done;
 }
 VAR_16 = FUNC_3(FUNC_15(VAR_13));
 if (VAR_16 == ((void*)0)) {
  goto done;
 }
 if (FUNC_1(VAR_11, VAR_16) != VAR_0) {
  goto done;
 };

 if (VAR_2 >= 4) {
  FUNC_11(VAR_1, VAR_11);
  FUNC_16("\n");
 }

 for (VAR_12 = 0; VAR_12 < FUNC_14(VAR_5); VAR_12++) {
  VAR_13 = FUNC_13(VAR_5, VAR_12);




  if (FUNC_2(FUNC_15(VAR_13), VAR_11) == 0) {
   VAR_14 = VAR_13;
   goto done;
  }

 }

done:
 FUNC_10(VAR_16);
 FUNC_10(VAR_10);
 FUNC_10(VAR_11);
 FUNC_0(VAR_9);

 if (VAR_2 >= 4) {
  if (VAR_14) {
   FUNC_16(";; Found.\n");
  } else {
   FUNC_16(";; Not foud.\n");
  }
 }
 return VAR_14;
}
