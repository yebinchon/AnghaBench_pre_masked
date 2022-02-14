
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
struct pcap_pkthdr {scalar_t__ caplen; scalar_t__ len; } ;
struct arc_linux_header {int arc_type; } ;
struct TYPE_6__ {scalar_t__ ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int const*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int const*,scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int const*,scalar_t__,int ,int ,int ) ;

u_int
FUNC_4(netdissect_options *VAR_2, const struct pcap_pkthdr *VAR_3, const u_char *VAR_4)
{
 u_int VAR_5 = VAR_3->caplen;
 u_int VAR_6 = VAR_3->len;
 const struct arc_linux_header *VAR_7;

 int VAR_8 = 0;
 u_char VAR_9;

 if (VAR_5 < VAR_0 || VAR_6 < VAR_0) {
  FUNC_1((VAR_2, "[|arcnet]"));
  return (VAR_5);
 }

 VAR_7 = (const struct arc_linux_header *)VAR_4;
 VAR_9 = VAR_7->arc_type;

 switch (VAR_9) {
 default:
  VAR_8 = VAR_1;
  if (VAR_5 < VAR_1 || VAR_6 < VAR_1) {
   FUNC_1((VAR_2, "[|arcnet]"));
   return (VAR_5);
  }
  break;
 case 128:
 case 130:
 case 129:
  VAR_8 = VAR_0;
  break;
 }

 if (VAR_2->ndo_eflag)
  FUNC_3(VAR_2, VAR_4, VAR_6, 0, 0, 0);




 VAR_6 -= VAR_8;
 VAR_5 -= VAR_8;
 VAR_4 += VAR_8;

 if (!FUNC_2(VAR_2, VAR_9, VAR_4, VAR_6, VAR_5))
  FUNC_0(VAR_4, VAR_5);

 return (VAR_8);
}
