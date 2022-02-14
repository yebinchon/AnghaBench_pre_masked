
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr_list ;
typedef int ldns_resolver ;
typedef int ldns_pkt ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,...) ;
 int * FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int ,int ) ;
 int VAR_0 ;

void
FUNC_12(FILE *VAR_1, ldns_resolver *VAR_2, ldns_pkt *VAR_3)
{
 ldns_rr_list *VAR_4;
 char *VAR_5;

 if (VAR_0 < 5) {
  return;
 }

 VAR_4 = FUNC_2(VAR_2, FUNC_3(VAR_3), 0, 0);

 FUNC_1(VAR_1, ";; Received %d bytes from %s#%d(",
   (int) FUNC_5(VAR_3),
   FUNC_6(FUNC_3(VAR_3)),
   (int) FUNC_8(VAR_2));

 if (VAR_4) {
  FUNC_7(VAR_1,
    FUNC_11(FUNC_10(VAR_4, 0), 0));
  FUNC_9(VAR_4);
 } else {
  VAR_5 = FUNC_6(FUNC_3(VAR_3));
  if (VAR_5) {
   FUNC_1(VAR_1, "%s", VAR_5);
   FUNC_0(VAR_5);
  }
 }
 FUNC_1(VAR_1, ") in %u ms\n\n", (unsigned int)FUNC_4(VAR_3));
}
