
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct pcap_pkthdr {int len; int caplen; } ;
struct TYPE_6__ {int ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;




 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*) ;

 int FUNC_2 (TYPE_1__*,struct pcap_pkthdr const*,int const*) ;
 int FUNC_3 (TYPE_1__*,int,int const*,int) ;
 int VAR_0 ;
 int FUNC_4 (int ,char*,int) ;

u_int
FUNC_5(netdissect_options *VAR_1,
                  const struct pcap_pkthdr *VAR_2, register const u_char *VAR_3)
{
 register u_int VAR_4 = VAR_2->len;
 register u_int VAR_5 = VAR_2->caplen;
 u_int VAR_6;
 u_int VAR_7 = 0;

 if (VAR_5 < 2) {
  FUNC_1((VAR_1, "[|ppp]"));
  return (VAR_5);
 }

 switch (VAR_3[0]) {

 case 128:
  if (VAR_5 < 4) {
   FUNC_1((VAR_1, "[|ppp]"));
   return (VAR_5);
  }

  if (VAR_1->ndo_eflag)
   FUNC_1((VAR_1, "%02x %02x %d ", VAR_3[0], VAR_3[1], VAR_4));
  VAR_3 += 2;
  VAR_4 -= 2;
  VAR_7 += 2;

  VAR_6 = FUNC_0(VAR_3);
  VAR_3 += 2;
  VAR_4 -= 2;
  VAR_7 += 2;
  FUNC_1((VAR_1, "%s: ", FUNC_4(VAR_0, "unknown PPP protocol (0x%04x)", VAR_6)));

  FUNC_3(VAR_1, VAR_6, VAR_3, VAR_4);
  break;

 case 129:
 case 130:
  return (FUNC_2(VAR_1, VAR_2, VAR_3));

 default:
  if (VAR_5 < 4) {
   FUNC_1((VAR_1, "[|ppp]"));
   return (VAR_5);
  }

  if (VAR_1->ndo_eflag)
   FUNC_1((VAR_1, "%02x %02x %d ", VAR_3[0], VAR_3[1], VAR_4));
  VAR_3 += 2;
  VAR_7 += 2;






  FUNC_1((VAR_1, "unknown addr %02x; ctrl %02x", VAR_3[0], VAR_3[1]));
  break;
 }

 return (VAR_7);
}
