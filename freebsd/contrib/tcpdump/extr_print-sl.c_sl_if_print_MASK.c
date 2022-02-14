
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct pcap_pkthdr {int caplen; int len; } ;
struct ip {int dummy; } ;
struct TYPE_7__ {scalar_t__ ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (struct ip const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int const*,int) ;
 int FUNC_3 (TYPE_1__*,int const*,int) ;
 int FUNC_4 (TYPE_1__*,int const*,struct ip const*,int) ;
 int VAR_1 ;

u_int
FUNC_5(netdissect_options *VAR_2,
            const struct pcap_pkthdr *VAR_3, const u_char *VAR_4)
{
 register u_int VAR_5 = VAR_3->caplen;
 register u_int VAR_6 = VAR_3->len;
 register const struct ip *VAR_7;

 if (VAR_5 < VAR_0 || VAR_6 < VAR_0) {
  FUNC_1((VAR_2, "%s", VAR_1));
  return (VAR_5);
 }

 VAR_5 -= VAR_0;
 VAR_6 -= VAR_0;

 VAR_7 = (const struct ip *)(VAR_4 + VAR_0);

 if (VAR_2->ndo_eflag)
  FUNC_4(VAR_2, VAR_4, VAR_7, VAR_6);

 if (VAR_5 < 1 || VAR_6 < 1) {
  FUNC_1((VAR_2, "%s", VAR_1));
  return (VAR_5 + VAR_0);
 }

 switch (FUNC_0(VAR_7)) {
 case 4:
         FUNC_3(VAR_2, (const u_char *)VAR_7, VAR_6);
  break;
 case 6:
  FUNC_2(VAR_2, (const u_char *)VAR_7, VAR_6);
  break;
 default:
  FUNC_1((VAR_2, "ip v%d", FUNC_0(VAR_7)));
 }

 return (VAR_0);
}
