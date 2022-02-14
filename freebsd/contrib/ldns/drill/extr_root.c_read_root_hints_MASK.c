
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_zone ;
typedef scalar_t__ ldns_status ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*,char const*,...) ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,int ) ;
 int * FUNC_8 (int ,size_t) ;
 size_t FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int **,int *,int *,int ,int ,int*) ;
 int FUNC_12 (int *) ;
 int VAR_4 ;
 char* FUNC_13 (int ) ;

ldns_rr_list *
FUNC_14(const char *VAR_5)
{
 FILE *VAR_6 = ((void*)0);
 int VAR_7 = 0;
 ldns_zone *VAR_8;
 ldns_status VAR_9;
 ldns_rr_list *VAR_10 = ((void*)0);
 ldns_rr *VAR_11;
 size_t VAR_12;

 VAR_6 = FUNC_1(VAR_5, "r");
 if (!VAR_6) {
  FUNC_2(VAR_4, "Unable to open %s for reading: %s\n", VAR_5, FUNC_13(VAR_3));
  return ((void*)0);
 }

 VAR_9 = FUNC_11(&VAR_8, VAR_6, ((void*)0), 0, 0, &VAR_7);
 FUNC_0(VAR_6);
 if (VAR_9 != VAR_2) {
  FUNC_2(VAR_4, "Error reading root hints file: %s\n", FUNC_3(VAR_9));
  return ((void*)0);
 } else {
  VAR_10 = FUNC_6();
  for (VAR_12 = 0; VAR_12 < FUNC_9(FUNC_12(VAR_8)); VAR_12++) {
   VAR_11 = FUNC_8(FUNC_12(VAR_8), VAR_12);


   if ( FUNC_5(VAR_11) == VAR_0 ) {
    FUNC_7(VAR_10, FUNC_4(VAR_11));
   }

   if ( FUNC_5(VAR_11) == VAR_1) {
    FUNC_7(VAR_10, FUNC_4(VAR_11));
   }
  }
  FUNC_10(VAR_8);
  return VAR_10;
 }
}
