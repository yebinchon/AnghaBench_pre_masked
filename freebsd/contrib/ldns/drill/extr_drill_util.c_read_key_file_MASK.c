
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef scalar_t__ ldns_status ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*,...) ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int **,char*,int ,int *,int *) ;
 scalar_t__ FUNC_8 (int *,char*,int) ;
 int VAR_6 ;
 char* FUNC_9 (int ) ;

ldns_status
FUNC_10(const char *VAR_7, ldns_rr_list *VAR_8, bool VAR_9)
{
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12 = 0;
 char VAR_13[VAR_0];
 ldns_status VAR_14;
 FILE *VAR_15;
 ldns_rr *VAR_16;

 VAR_15 = FUNC_1(VAR_7, "r");
 if (!VAR_15) {
  if (! VAR_9) {
   FUNC_2(VAR_6, "Error opening %s: %s\n",
    VAR_7, FUNC_9(VAR_5));
  }
  return VAR_3;
 }
 while (VAR_10 >= 0) {
  VAR_10 = (int) FUNC_8(VAR_15, VAR_13, sizeof(VAR_13));
  VAR_11++;
  if (VAR_10 > 0 && VAR_13[0] != ';') {
   VAR_14 = FUNC_7(&VAR_16, VAR_13, 0, ((void*)0), ((void*)0));
   if (VAR_14 != VAR_4) {
    if (! VAR_9) {
     FUNC_2(VAR_6,
      "Error parsing DNSKEY RR "
      "in line %d: %s\n", VAR_11,
      FUNC_3(VAR_14)
      );
    }
   } else if (FUNC_5(VAR_16) == VAR_1 ||
        FUNC_5(VAR_16) == VAR_2) {
    FUNC_6(VAR_8, VAR_16);
    VAR_12++;
   } else {
    FUNC_4(VAR_16);
   }
  }
 }
 FUNC_0(VAR_15);
 if (VAR_12 > 0) {
  return VAR_4;
 } else {

  return VAR_3;
 }
}
