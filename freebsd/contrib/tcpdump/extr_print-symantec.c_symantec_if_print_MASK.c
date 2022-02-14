
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_short ;
typedef int u_int ;
typedef int u_char ;
struct symantec_header {int ether_type; } ;
struct pcap_pkthdr {int len; int caplen; } ;
struct TYPE_6__ {int ndo_suppress_default_print; scalar_t__ ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__,int const*,int,int,int *,int *) ;
 int FUNC_4 (TYPE_1__*,int const*,int) ;

u_int
FUNC_5(netdissect_options *VAR_1, const struct pcap_pkthdr *VAR_2, const u_char *VAR_3)
{
 u_int VAR_4 = VAR_2->len;
 u_int VAR_5 = VAR_2->caplen;
 const struct symantec_header *VAR_6;
 u_short VAR_7;

 if (VAR_5 < sizeof (struct symantec_header)) {
  FUNC_2((VAR_1, "[|symantec]"));
  return VAR_5;
 }

 if (VAR_1->ndo_eflag)
  FUNC_4(VAR_1, VAR_3, VAR_4);

 VAR_4 -= sizeof (struct symantec_header);
 VAR_5 -= sizeof (struct symantec_header);
 VAR_6 = (const struct symantec_header *)VAR_3;
 VAR_3 += sizeof (struct symantec_header);

 VAR_7 = FUNC_0(&VAR_6->ether_type);

 if (VAR_7 <= VAR_0) {

  if (!VAR_1->ndo_eflag)
   FUNC_4(VAR_1, (const u_char *)VAR_6, VAR_4 + sizeof (struct symantec_header));

  if (!VAR_1->ndo_suppress_default_print)
   FUNC_1(VAR_3, VAR_5);
 } else if (FUNC_3(VAR_1, VAR_7, VAR_3, VAR_4, VAR_5, ((void*)0), ((void*)0)) == 0) {

  if (!VAR_1->ndo_eflag)
   FUNC_4(VAR_1, (const u_char *)VAR_6, VAR_4 + sizeof (struct symantec_header));

  if (!VAR_1->ndo_suppress_default_print)
   FUNC_1(VAR_3, VAR_5);
 }

 return (sizeof (struct symantec_header));
}
