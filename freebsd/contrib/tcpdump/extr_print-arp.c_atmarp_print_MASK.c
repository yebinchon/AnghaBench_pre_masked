
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_short ;
typedef int u_int ;
typedef int u_char ;
struct atmarp_pkthdr {int dummy; } ;
struct TYPE_7__ {scalar_t__ ndo_vflag; int ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;







 scalar_t__ FUNC_0 (struct atmarp_pkthdr const*) ;
 scalar_t__ FUNC_1 (struct atmarp_pkthdr const*) ;
 scalar_t__ FUNC_2 (struct atmarp_pkthdr const*) ;
 int FUNC_3 (struct atmarp_pkthdr const*) ;
 int FUNC_4 (struct atmarp_pkthdr const*) ;
 int FUNC_5 (struct atmarp_pkthdr const*) ;
 int FUNC_6 (struct atmarp_pkthdr const*) ;
 int FUNC_7 (struct atmarp_pkthdr const*) ;
 int FUNC_8 (struct atmarp_pkthdr const*) ;
 int FUNC_9 (struct atmarp_pkthdr const*) ;
 int FUNC_10 (struct atmarp_pkthdr const*) ;
 int FUNC_11 (struct atmarp_pkthdr const*) ;
 int FUNC_12 (struct atmarp_pkthdr const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_13 (int const*,int ) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (struct atmarp_pkthdr const) ;
 int FUNC_16 (int ,int) ;
 int * FUNC_17 (struct atmarp_pkthdr const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_18 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_19 (TYPE_1__*,struct atmarp_pkthdr const*,scalar_t__) ;
 int FUNC_20 (TYPE_1__*,struct atmarp_pkthdr const*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_21 (int ,char*,scalar_t__) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_22(netdissect_options *VAR_6,
      const u_char *VAR_7, u_int VAR_8, u_int VAR_9)
{
 const struct atmarp_pkthdr *VAR_10;
 u_short VAR_11, VAR_12, VAR_13;

 VAR_10 = (const struct atmarp_pkthdr *)VAR_7;
 FUNC_15(*VAR_10);

 VAR_12 = FUNC_0(VAR_10);
 VAR_11 = FUNC_2(VAR_10);
 VAR_13 = FUNC_1(VAR_10);

 if (!FUNC_16(*FUNC_17(VAR_10), FUNC_10(VAR_10))) {
  FUNC_14((VAR_6, "%s", VAR_5));
  FUNC_13((const u_char *)VAR_10, VAR_8);
  return;
 }

        if (!VAR_6->ndo_eflag) {
            FUNC_14((VAR_6, "ARP, "));
        }

 if ((VAR_11 != VAR_0 && VAR_11 != VAR_1) ||
     FUNC_5(VAR_10) != 4 ||
            FUNC_10(VAR_10) != 4 ||
            VAR_6->ndo_vflag) {
                FUNC_14((VAR_6, "%s, %s (len %u/%u)",
                          FUNC_21(VAR_2, "Unknown Hardware (%u)", VAR_12),
                          FUNC_21(VAR_4, "Unknown Protocol (0x%04x)", VAR_11),
                          FUNC_5(VAR_10),
                          FUNC_10(VAR_10)));


                if (!VAR_6->ndo_vflag) {
                    goto out;
                }
 }


        FUNC_14((VAR_6, "%s%s ",
               VAR_6->ndo_vflag ? ", " : "",
               FUNC_21(VAR_3, "Unknown (%u)", VAR_13)));

 switch (VAR_13) {

 case 128:
  FUNC_14((VAR_6, "who-has "));
  FUNC_20(VAR_6, VAR_10, VAR_11);
  if (FUNC_9(VAR_10) != 0) {
   FUNC_14((VAR_6, " ("));
   FUNC_18(VAR_6, FUNC_8(VAR_10), FUNC_9(VAR_10),
       FUNC_11(VAR_10), FUNC_12(VAR_10));
   FUNC_14((VAR_6, ")"));
  }
  FUNC_14((VAR_6, " tell "));
  FUNC_19(VAR_6, VAR_10, VAR_11);
  break;

 case 129:
  FUNC_19(VAR_6, VAR_10, VAR_11);
  FUNC_14((VAR_6, " is-at "));
  FUNC_18(VAR_6, FUNC_3(VAR_10), FUNC_4(VAR_10), FUNC_6(VAR_10),
                                  FUNC_7(VAR_10));
  break;

 case 131:
  FUNC_14((VAR_6, "who-is "));
  FUNC_18(VAR_6, FUNC_8(VAR_10), FUNC_9(VAR_10), FUNC_11(VAR_10),
      FUNC_12(VAR_10));
  FUNC_14((VAR_6, " tell "));
  FUNC_18(VAR_6, FUNC_3(VAR_10), FUNC_4(VAR_10), FUNC_6(VAR_10),
      FUNC_7(VAR_10));
  break;

 case 132:
  FUNC_18(VAR_6, FUNC_3(VAR_10), FUNC_4(VAR_10), FUNC_6(VAR_10),
      FUNC_7(VAR_10));
  FUNC_14((VAR_6, "at "));
  FUNC_19(VAR_6, VAR_10, VAR_11);
  break;

 case 130:
  FUNC_14((VAR_6, "for "));
  FUNC_19(VAR_6, VAR_10, VAR_11);
  break;

 default:
  FUNC_13((const u_char *)VAR_10, VAR_9);
  return;
 }

 out:
        FUNC_14((VAR_6, ", length %u", VAR_8));
        return;

trunc:
 FUNC_14((VAR_6, "%s", VAR_5));
}
