
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pcap_pkthdr {int dummy; } ;
typedef int netdissect_options ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct pcap_pkthdr const*,int const*,int ) ;

__attribute__((used)) static void
FUNC_2(u_char *VAR_3, const struct pcap_pkthdr *VAR_4, const u_char *VAR_5)
{
 ++VAR_2;

 ++VAR_0;

 FUNC_1((netdissect_options *)VAR_3, VAR_4, VAR_5, VAR_2);

 --VAR_0;
 if (VAR_1)
  FUNC_0(0);
}
