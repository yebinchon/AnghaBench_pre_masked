
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr_list ;
typedef int ldns_resolver ;
typedef int ldns_pkt ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,...) ;
 int * FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int ,int ) ;
 int VAR_2 ;

void
FUNC_14(FILE *VAR_3, ldns_resolver *VAR_4, ldns_pkt *VAR_5)
{
 ldns_rr_list *VAR_6;
 ldns_rr_list *VAR_7;
 char *VAR_8;

 if (VAR_2 < 5) {
  return;
 }

 VAR_7 = FUNC_2(VAR_4, FUNC_3(VAR_5), 0, 0);

 VAR_6 = FUNC_5(VAR_5,
   VAR_0, VAR_1);
 FUNC_11(VAR_3, VAR_6);
 FUNC_10(VAR_6);

 FUNC_1(VAR_3, ";; Received %d bytes from %s#%d(",
   (int) FUNC_6(VAR_5),
   FUNC_7(FUNC_3(VAR_5)),
   (int) FUNC_9(VAR_4));

 if (VAR_7) {
  FUNC_8(VAR_3,
    FUNC_13(FUNC_12(VAR_7, 0), 0));
  FUNC_10(VAR_7);
 } else {
  VAR_8 = FUNC_7(FUNC_3(VAR_5));
  if (VAR_8) {
   FUNC_1(VAR_3, "%s", VAR_8);
   FUNC_0(VAR_8);
  }
 }
 FUNC_1(VAR_3, ") in %u ms\n\n", (unsigned int)FUNC_4(VAR_5));
}
