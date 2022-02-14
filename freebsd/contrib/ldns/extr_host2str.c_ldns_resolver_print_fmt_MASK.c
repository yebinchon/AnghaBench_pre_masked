
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
typedef int ldns_resolver ;
typedef int ldns_rdf ;
typedef int ldns_output_format ;
struct TYPE_2__ {scalar_t__ tv_sec; } ;
typedef int FILE ;




 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 int * FUNC_8 (int const*) ;
 scalar_t__ FUNC_9 (int const*) ;
 int FUNC_10 (int const*) ;
 int FUNC_11 (int const*) ;
 int FUNC_12 (int const*) ;
 scalar_t__ FUNC_13 (int const*) ;
 size_t FUNC_14 (int const*) ;
 int ** FUNC_15 (int const*) ;
 scalar_t__ FUNC_16 (int const*) ;
 int FUNC_17 (int const*) ;
 int FUNC_18 (int const*) ;
 scalar_t__ FUNC_19 (int const*) ;
 scalar_t__ FUNC_20 (int const*) ;
 size_t* FUNC_21 (int const*) ;
 int ** FUNC_22 (int const*) ;
 size_t FUNC_23 (int const*) ;
 TYPE_1__ FUNC_24 (int const*) ;
 char* FUNC_25 (int const*) ;
 char* FUNC_26 (int const*) ;
 int FUNC_27 (int const*) ;
 int FUNC_28 (int *,int const*,int ) ;
 scalar_t__ FUNC_29 (int ) ;

void
FUNC_30(FILE *VAR_0,
  const ldns_output_format *VAR_1, const ldns_resolver *VAR_2)
{
 uint16_t VAR_3;
 ldns_rdf **VAR_4;
 ldns_rdf **VAR_5;
 size_t *VAR_6;
 if (!VAR_2) {
  return;
 }
 VAR_4 = FUNC_15(VAR_2);
 VAR_5 = FUNC_22(VAR_2);
 VAR_6 = FUNC_21(VAR_2);

 FUNC_0(VAR_0, "port: %d\n", (int)FUNC_16(VAR_2));
 FUNC_0(VAR_0, "edns0 size: %d\n", (int)FUNC_9(VAR_2));
 FUNC_0(VAR_0, "use ip6: %d\n", (int)FUNC_13(VAR_2));

 FUNC_0(VAR_0, "recursive: %d\n", FUNC_18(VAR_2));
 FUNC_0(VAR_0, "usevc: %d\n", FUNC_27(VAR_2));
 FUNC_0(VAR_0, "igntc: %d\n", FUNC_12(VAR_2));
 FUNC_0(VAR_0, "fail: %d\n", FUNC_10(VAR_2));
 FUNC_0(VAR_0, "retry: %d\n", (int)FUNC_20(VAR_2));
 FUNC_0(VAR_0, "retrans: %d\n", (int)FUNC_19(VAR_2));
 FUNC_0(VAR_0, "fallback: %d\n", FUNC_11(VAR_2));
 FUNC_0(VAR_0, "random: %d\n", FUNC_17(VAR_2));
 FUNC_0(VAR_0, "timeout: %d\n", (int)FUNC_24(VAR_2).tv_sec);
 FUNC_0(VAR_0, "dnssec: %d\n", FUNC_5(VAR_2));
 FUNC_0(VAR_0, "dnssec cd: %d\n", FUNC_7(VAR_2));
 FUNC_0(VAR_0, "trust anchors (%d listed):\n",
  (int)FUNC_29(FUNC_6(VAR_2)));
 FUNC_28(VAR_0, VAR_1, FUNC_6(VAR_2));
 FUNC_0(VAR_0, "tsig: %s %s\n",
                FUNC_26(VAR_2)?FUNC_26(VAR_2):"-",
                FUNC_25(VAR_2)?FUNC_25(VAR_2):"-");
 FUNC_0(VAR_0, "debug: %d\n", FUNC_2(VAR_2));

 FUNC_0(VAR_0, "default domain: ");
 FUNC_1(VAR_0, FUNC_8(VAR_2));
 FUNC_0(VAR_0, "\n");
 FUNC_0(VAR_0, "apply default domain: %d\n", FUNC_3(VAR_2));

 FUNC_0(VAR_0, "searchlist (%d listed):\n", (int)FUNC_23(VAR_2));
 for (VAR_3 = 0; VAR_3 < FUNC_23(VAR_2); VAR_3++) {
  FUNC_0(VAR_0, "\t");
  FUNC_1(VAR_0, VAR_5[VAR_3]);
  FUNC_0(VAR_0, "\n");
 }
 FUNC_0(VAR_0, "apply search list: %d\n", FUNC_4(VAR_2));

 FUNC_0(VAR_0, "nameservers (%d listed):\n", (int)FUNC_14(VAR_2));
 for (VAR_3 = 0; VAR_3 < FUNC_14(VAR_2); VAR_3++) {
  FUNC_0(VAR_0, "\t");
  FUNC_1(VAR_0, VAR_4[VAR_3]);

  switch ((int)VAR_6[VAR_3]) {
   case 128:
   FUNC_0(VAR_0, " - reachable\n");
   break;
   case 129:
   FUNC_0(VAR_0, " - unreachable\n");
   break;
  }
 }
}
