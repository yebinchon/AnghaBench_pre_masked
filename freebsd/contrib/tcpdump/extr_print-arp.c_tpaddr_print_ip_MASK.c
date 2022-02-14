
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
struct arp_pkthdr {int dummy; } ;
typedef int netdissect_options ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct arp_pkthdr const*) ;
 int FUNC_2 (struct arp_pkthdr const*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(netdissect_options *VAR_2,
         const struct arp_pkthdr *VAR_3, u_short VAR_4)
{
 if (VAR_4 != VAR_0 && VAR_4 != VAR_1)
  FUNC_0((VAR_2, "<wrong proto type>"));
 else if (FUNC_1(VAR_3) != 4)
  FUNC_0((VAR_2, "<wrong len>"));
 else
  FUNC_0((VAR_2, "%s", FUNC_3(VAR_2, FUNC_2(VAR_3))));
}
