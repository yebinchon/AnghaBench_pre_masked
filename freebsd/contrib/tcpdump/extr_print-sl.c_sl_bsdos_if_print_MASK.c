
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
struct pcap_pkthdr {scalar_t__ caplen; scalar_t__ len; } ;
struct ip {int dummy; } ;
struct TYPE_6__ {scalar_t__ ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,int const*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int const*,struct ip const*,scalar_t__) ;
 int VAR_1 ;

u_int
FUNC_3(netdissect_options *VAR_2,
                  const struct pcap_pkthdr *VAR_3, const u_char *VAR_4)
{
 register u_int VAR_5 = VAR_3->caplen;
 register u_int VAR_6 = VAR_3->len;
 register const struct ip *VAR_7;

 if (VAR_5 < VAR_0) {
  FUNC_0((VAR_2, "%s", VAR_1));
  return (VAR_5);
 }

 VAR_6 -= VAR_0;

 VAR_7 = (const struct ip *)(VAR_4 + VAR_0);






 FUNC_1(VAR_2, (const u_char *)VAR_7, VAR_6);

 return (VAR_0);
}
