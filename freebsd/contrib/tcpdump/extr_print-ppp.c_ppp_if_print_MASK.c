
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef scalar_t__ u_char ;
struct pcap_pkthdr {scalar_t__ len; scalar_t__ caplen; } ;
struct TYPE_5__ {scalar_t__ ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,scalar_t__ const*,scalar_t__) ;

u_int
FUNC_2(netdissect_options *VAR_1,
             const struct pcap_pkthdr *VAR_2, register const u_char *VAR_3)
{
 register u_int VAR_4 = VAR_2->len;
 register u_int VAR_5 = VAR_2->caplen;

 if (VAR_5 < VAR_0) {
  FUNC_0((VAR_1, "[|ppp]"));
  return (VAR_5);
 }
 FUNC_1(VAR_1, VAR_3, VAR_4);

 return (0);
}
