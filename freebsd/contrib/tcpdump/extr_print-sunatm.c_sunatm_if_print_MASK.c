
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_short ;
typedef scalar_t__ u_int ;
typedef int u_char ;
struct pcap_pkthdr {scalar_t__ caplen; scalar_t__ len; } ;
struct TYPE_5__ {scalar_t__ ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;


 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_2 (TYPE_1__*,int,int ,scalar_t__,int const*,scalar_t__,scalar_t__) ;

u_int
FUNC_3(netdissect_options *VAR_7,
                const struct pcap_pkthdr *VAR_8, const u_char *VAR_9)
{
 u_int VAR_10 = VAR_8->caplen;
 u_int VAR_11 = VAR_8->len;
 u_short VAR_12;
 u_char VAR_13;
 u_int VAR_14;

 if (VAR_10 < VAR_4) {
  FUNC_1((VAR_7, "[|atm]"));
  return (VAR_10);
 }

 if (VAR_7->ndo_eflag) {
  FUNC_1((VAR_7, VAR_9[VAR_3] & 0x80 ? "Tx: " : "Rx: "));
 }

 switch (VAR_9[VAR_3] & 0x0f) {

 case 129:
  VAR_14 = VAR_0;
  break;

 case 128:
  VAR_14 = VAR_1;
  break;

 default:
  VAR_14 = VAR_2;
  break;
 }

 VAR_12 = FUNC_0(&VAR_9[VAR_5]);
 VAR_13 = VAR_9[VAR_6];

 VAR_9 += VAR_4;
 VAR_10 -= VAR_4;
 VAR_11 -= VAR_4;
 FUNC_2(VAR_7, VAR_13, VAR_12, VAR_14, VAR_9, VAR_11, VAR_10);

 return (VAR_4);
}
