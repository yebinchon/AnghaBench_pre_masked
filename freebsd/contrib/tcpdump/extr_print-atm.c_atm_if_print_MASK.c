
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int u_int ;
typedef scalar_t__ u_char ;
struct pcap_pkthdr {int caplen; int len; } ;
struct TYPE_6__ {scalar_t__ ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;


 scalar_t__ FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (scalar_t__ const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ const VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__ const*,int,int) ;
 int FUNC_5 (TYPE_1__*,scalar_t__ const*,int) ;
 int VAR_4 ;

u_int
FUNC_6(netdissect_options *VAR_5,
             const struct pcap_pkthdr *VAR_6, const u_char *VAR_7)
{
 u_int VAR_8 = VAR_6->caplen;
 u_int VAR_9 = VAR_6->len;
 uint32_t VAR_10;
 u_int VAR_11 = 0;

 if (VAR_8 < 1 || VAR_9 < 1) {
  FUNC_3((VAR_5, "%s", VAR_4));
  return (VAR_8);
 }


        if (*VAR_7 == VAR_3) {
            if (VAR_5->ndo_eflag)
                FUNC_3((VAR_5, "CNLPID "));
            FUNC_5(VAR_5, VAR_7 + 1, VAR_9 - 1);
            return VAR_11;
        }





 if (VAR_8 < 3 || VAR_9 < 3) {
  FUNC_3((VAR_5, "%s", VAR_4));
  return (VAR_8);
 }
 VAR_10 = FUNC_0(VAR_7);
 if (VAR_10 != FUNC_2(VAR_2) &&
     VAR_10 != FUNC_2(VAR_1) &&
     VAR_10 != FUNC_2(VAR_0)) {
  if (VAR_8 < 20 || VAR_9 < 20) {
   FUNC_3((VAR_5, "%s", VAR_4));
   return (VAR_8);
  }
  if (VAR_5->ndo_eflag)
   FUNC_3((VAR_5, "%08x%08x %08x%08x ",
          FUNC_1(VAR_7),
          FUNC_1(VAR_7+4),
          FUNC_1(VAR_7+8),
          FUNC_1(VAR_7+12)));
  VAR_7 += 20;
  VAR_9 -= 20;
  VAR_8 -= 20;
  VAR_11 += 20;
 }
 VAR_11 += FUNC_4(VAR_5, VAR_7, VAR_9, VAR_8);
 return (VAR_11);
}
