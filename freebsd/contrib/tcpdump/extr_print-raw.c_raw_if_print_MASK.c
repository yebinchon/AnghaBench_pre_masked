
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct pcap_pkthdr {int len; } ;
struct TYPE_5__ {scalar_t__ ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int const*,int ) ;

u_int
FUNC_2(netdissect_options *VAR_0, const struct pcap_pkthdr *VAR_1, const u_char *VAR_2)
{
 if (VAR_0->ndo_eflag)
  FUNC_0((VAR_0, "ip: "));

 FUNC_1(VAR_0, VAR_2, VAR_1->len);

 return (0);
}
