
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
struct pcap_pkthdr {scalar_t__ len; scalar_t__ caplen; } ;
struct TYPE_10__ {int ndo_suppress_default_print; scalar_t__ ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;
typedef int family ;
 int FUNC_0 (int const*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int const*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int const*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,int const*,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,int const*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,int const*,scalar_t__) ;
 int FUNC_8 (char*,char const*,int) ;
 int FUNC_9 (TYPE_1__*,scalar_t__,scalar_t__) ;

u_int
FUNC_10(netdissect_options *VAR_1, const struct pcap_pkthdr *VAR_2, const u_char *VAR_3)
{
 u_int VAR_4 = VAR_2->len;
 u_int VAR_5 = VAR_2->caplen;
 u_int VAR_6;

 if (VAR_5 < VAR_0) {
  FUNC_1((VAR_1, "[|null]"));
  return (VAR_0);
 }

 FUNC_8((char *)&VAR_6, (const char *)VAR_3, sizeof(VAR_6));
 if ((VAR_6 & 0xFFFF0000) != 0)
  VAR_6 = FUNC_2(VAR_6);

 if (VAR_1->ndo_eflag)
  FUNC_9(VAR_1, VAR_6, VAR_4);

 VAR_4 -= VAR_0;
 VAR_5 -= VAR_0;
 VAR_3 += VAR_0;

 switch (VAR_6) {

 case 133:
  FUNC_5(VAR_1, VAR_3, VAR_4);
  break;

 case 132:
 case 130:
 case 131:
  FUNC_4(VAR_1, VAR_3, VAR_4);
  break;

 case 128:
  FUNC_7(VAR_1, VAR_3, VAR_4);
  break;

 case 134:
  FUNC_3(VAR_1, VAR_3, VAR_4);
  break;

 case 129:
  FUNC_6(VAR_1, VAR_3, VAR_4);
  break;

 default:

  if (!VAR_1->ndo_eflag)
   FUNC_9(VAR_1, VAR_6, VAR_4 + VAR_0);
  if (!VAR_1->ndo_suppress_default_print)
   FUNC_0(VAR_3, VAR_5);
 }

 return (VAR_0);
}
