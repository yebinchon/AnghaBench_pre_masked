
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_short ;
typedef int u_int ;
typedef int u_char ;
struct arp_pkthdr {int dummy; } ;
struct TYPE_8__ {scalar_t__ ndo_vflag; int ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct arp_pkthdr const*) ;
 scalar_t__ FUNC_1 (struct arp_pkthdr const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int const*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct arp_pkthdr const) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct arp_pkthdr const*) ;
 int FUNC_7 (struct arp_pkthdr const*) ;
 int FUNC_8 (struct arp_pkthdr const*) ;
 scalar_t__ FUNC_9 (struct arp_pkthdr const*) ;
 scalar_t__ FUNC_10 (struct arp_pkthdr const*) ;
 int * FUNC_11 (struct arp_pkthdr const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (TYPE_1__*,int const*,int ,int ) ;
 int VAR_6 ;
 int FUNC_13 (int const*,scalar_t__) ;
 int FUNC_14 (TYPE_1__*,scalar_t__,int,scalar_t__) ;
 int FUNC_15 (TYPE_1__*,struct arp_pkthdr const*,int) ;
 int FUNC_16 (int ,char*,int) ;
 int FUNC_17 (TYPE_1__*,struct arp_pkthdr const*,int) ;
 int VAR_7 ;

void
FUNC_18(netdissect_options *VAR_8,
   const u_char *VAR_9, u_int VAR_10, u_int VAR_11)
{
 const struct arp_pkthdr *VAR_12;
 u_short VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_12 = (const struct arp_pkthdr *)VAR_9;
 FUNC_4(*VAR_12);

 VAR_14 = FUNC_0(VAR_12);
 VAR_13 = FUNC_7(VAR_12);
 VAR_15 = FUNC_6(VAR_12);







        switch(VAR_14) {
        case 135:
            FUNC_12(VAR_8, VAR_9, VAR_10, VAR_11);
            return;
        case 134:
            VAR_16 = VAR_3;
            break;
        default:
            VAR_16 = VAR_2;
            break;
 }

 if (!FUNC_5(*FUNC_11(VAR_12), FUNC_8(VAR_12))) {
  FUNC_3((VAR_8, "%s", VAR_7));
  FUNC_2((const u_char *)VAR_12, VAR_10);
  return;
 }

        if (!VAR_8->ndo_eflag) {
            FUNC_3((VAR_8, "ARP, "));
        }


        if ((VAR_13 != VAR_0 && VAR_13 != VAR_1) ||
     FUNC_8(VAR_12) != 4 ||
            FUNC_1(VAR_12) == 0 ||
            VAR_8->ndo_vflag) {
            FUNC_3((VAR_8, "%s (len %u), %s (len %u)",
                      FUNC_16(VAR_4, "Unknown Hardware (%u)", VAR_14),
                      FUNC_1(VAR_12),
                      FUNC_16(VAR_6, "Unknown Protocol (0x%04x)", VAR_13),
                      FUNC_8(VAR_12)));


            if (!VAR_8->ndo_vflag) {
                goto out;
            }
 }


        FUNC_3((VAR_8, "%s%s ",
               VAR_8->ndo_vflag ? ", " : "",
               FUNC_16(VAR_5, "Unknown (%u)", VAR_15)));

 switch (VAR_15) {

 case 130:
  FUNC_3((VAR_8, "who-has "));
  FUNC_17(VAR_8, VAR_12, VAR_13);
  if (FUNC_13((const u_char *)FUNC_10(VAR_12), FUNC_1(VAR_12)))
   FUNC_3((VAR_8, " (%s)",
      FUNC_14(VAR_8, FUNC_10(VAR_12), VAR_16, FUNC_1(VAR_12))));
  FUNC_3((VAR_8, " tell "));
  FUNC_15(VAR_8, VAR_12, VAR_13);
  break;

 case 131:
  FUNC_15(VAR_8, VAR_12, VAR_13);
  FUNC_3((VAR_8, " is-at %s",
                          FUNC_14(VAR_8, FUNC_9(VAR_12), VAR_16, FUNC_1(VAR_12))));
  break;

 case 128:
  FUNC_3((VAR_8, "who-is %s tell %s",
     FUNC_14(VAR_8, FUNC_10(VAR_12), VAR_16, FUNC_1(VAR_12)),
     FUNC_14(VAR_8, FUNC_9(VAR_12), VAR_16, FUNC_1(VAR_12))));
  break;

 case 129:
  FUNC_3((VAR_8, "%s at ",
     FUNC_14(VAR_8, FUNC_10(VAR_12), VAR_16, FUNC_1(VAR_12))));
  FUNC_17(VAR_8, VAR_12, VAR_13);
  break;

 case 132:
  FUNC_3((VAR_8, "who-is %s tell %s",
     FUNC_14(VAR_8, FUNC_10(VAR_12), VAR_16, FUNC_1(VAR_12)),
     FUNC_14(VAR_8, FUNC_9(VAR_12), VAR_16, FUNC_1(VAR_12))));
  break;

 case 133:
  FUNC_3((VAR_8,"%s at ",
     FUNC_14(VAR_8, FUNC_9(VAR_12), VAR_16, FUNC_1(VAR_12))));
  FUNC_15(VAR_8, VAR_12, VAR_13);
  break;

 default:
  FUNC_2((const u_char *)VAR_12, VAR_11);
  return;
 }

 out:
        FUNC_3((VAR_8, ", length %u", VAR_10));

 return;
trunc:
 FUNC_3((VAR_8, "%s", VAR_7));
}
